clear all;
addpath('CIS581Work');

whichDistTrans = 2;
stepThrough = 0; %0, just go though, 1, just pause at end, 2 step at every face
%% Initialize the feature detectors
faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');

lEyeDetector = vision.CascadeObjectDetector('lefteye');
rEyeDetector = vision.CascadeObjectDetector('righteye');
mouthDetector = vision.CascadeObjectDetector('mouth');
noseDetector = vision.CascadeObjectDetector('nose');

%% Load Images from folder
folder = 'TestSet/pose';
images = loadImages(folder);
replacedImages = images;
%% Load base image and mask
baseImg = im2double(imread('ConorFaceHires.jpg'));
faceMask = imread('ConorFaceHiresMask.jpg');
faceMask = ~logical(faceMask(:,:,1));
% images = images(1);

for i = 1:numel(images)
    currentImage = images{i};
    if strcmpi(folder, 'testset/more')
        currentImage = imresize(currentImage, 3);
    end
    
    fprintf('Detecting faces in image %d/%d ... ', i, numel(images));
    faceBoxes = step(faceDetector, currentImage);
    fprintf('Found %d faces \n', size(faceBoxes, 1));
        
    for j = 1:size(faceBoxes, 1)

        fprintf('\tDetecting features in face %d/%d ... ', j, size(faceBoxes, 1));

        xRange = (1:faceBoxes(j,4)) + faceBoxes(j,2);
        yRange = (1:faceBoxes(j,3)) + faceBoxes(j,1);
        faceImage = currentImage(xRange, yRange,:);
        if strcmpi(folder, 'testset/more')
            scale = 8;
            faceImage = imresize(faceImage, scale);
        end
        rEyeBoxes = step(rEyeDetector, faceImage);
        lEyeBoxes = step(lEyeDetector, faceImage);
        mouthBoxes = step(mouthDetector, faceImage);
        noseBoxes = step(noseDetector, faceImage);
        
        if isempty(rEyeBoxes) || isempty(lEyeBoxes) || isempty(mouthBoxes) || isempty(noseBoxes)
            fprintf('Didn''t find any features in this face box \n')
            continue
        end
        
        % Determine the best features using pictoral structure k-fan
        if whichDistTrans == 1
            [bestIdx, ~, bestPoints] = distTrans(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes);
            basePoints = [47 59 27 73 68 73 28 36 63 35]; %Base points, picked by hand
        elseif whichDistTrans == 2;
            [bestIdx, ~, bestPoints] = distTrans2(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes);
%             basePoints = [47 59 27 75 68 75 28 36 63 35];
            basePoints = [324 390 200 485 460 485 211 235 421 226];
            % basePoints = [47 59 28 36 63 35 27 73 68 73]; %Base points, picked by hand
        end
        

        fprintf('Done \n');

        fprintf('\tWarping Base Image ... ')

        % Pick control points for warping
        ctrlPoints = 1;
        reshapePoints = @(points) [points(1:2:end)' points(2:2:end)']; % Function resizes points into something warping functions can use

        switch ctrlPoints
            case 1 % Use just the four features from above (nose, mouth, leftEye, rightEye)
                im1_pts = reshapePoints(basePoints);
                im2_pts = reshapePoints(bestPoints);
            case 2 % Use four features and corners of face box
                im1_pts = [reshapePoints(basePoints); 1 1; 1 size(baseImg, 1); size(baseImg,2) 1; size(baseImg, 1) size(baseImg,2)];
                im2_pts = [reshapePoints(bestPoints); 1 1; 1 size(faceImage, 1);...
                    size(faceImage,2) 1; size(faceImage, 1) size(faceImage,2)];
            case 3 % Unse four features and center of face box
                im1_pts = [reshapePoints(basePoints); round(size(baseImg(:,:,1))/2)];
                im2_pts = [reshapePoints(bestPoints); round(size(faceImage(:,:,1))/2)];
        end
        
        % Color correct the base image to match
        baseImgColor = imhistmatch(baseImg, faceImage);
        % Pick warping method and warp, they're all not great  right now
        warpMethod = 'geo';
        switch warpMethod
            case 'tri'
                warp_frac = 1;
                dissolve_frac = 0;
                med_pts = (im1_pts + im2_pts)/2;
                tri = delaunay(med_pts(:,1), med_pts(:,2));
                morphed_im = morph(baseImgColor, faceImage, im1_pts, im2_pts, tri,...
                    warp_frac, dissolve_frac);
            case 'tps'
                warp_frac = 1;
                dissolve_frac = 0.1;
                morphed_im = morph_tps_wrapper(baseImgColor, faceImage, im1_pts, im2_pts, warp_frac, dissolve_frac)/255;
            case 'geo' 
%                 tform = fitgeotrans(im1_pts,im2_pts,'lwm',6);
                tform = fitgeotrans(im1_pts, im2_pts, 'projective');
                morphed_im = imwarp(baseImgColor, tform, 'OutputView',imref2d(size(faceImage)));
                morphed_mask = imwarp(faceMask, tform, 'OutputView',imref2d(size(faceImage)));
        end
        
        fprintf('Done \n');
        
        if stepThrough == 2
            figure(1)
            clf

            % Plot face sample and control points
            subplot(1,2,1)
            subimage(baseImgColor);
            hold on
            colormap lines
            scatter(basePoints(1:2:end), basePoints(2:2:end), 25, 1:(length(basePoints)/2));

            % Plot found face and best features
            subplot(1,2,2)
            subimage(faceImage);
            hold on
            colormap lines
            scatter(bestPoints(1:2:end), bestPoints(2:2:end), 25, 1:(length(basePoints)/2));

            pause
        end
        if strcmpi(folder, 'testset/more')
            morphed_mask = imresize(morphed_mask, 1/scale);
            morphed_im = imresize(morphed_im, 1/scale);
        end
        imageMask = false(size(currentImage(:,:,1)));
        imageMask(xRange, yRange,:) = logical(morphed_mask);
        morphedBlend = zeros(size(currentImage));
        morphedBlend(xRange, yRange,:) = morphed_im;
        fprintf('\tStarting Pyramid Blend... ')
        clear morphed_im morphed_mask baseImgColor faceImage xRange yRange
        
        imageMerged = pyramidBlend(morphedBlend, currentImage, imageMask,6);
        fprintf('Done \n');
        
        if stepThrough == 2
            figure(1);
            clf
            imagesc([currentImage imageMerged]);
            axis image
            pause
        end
        currentImage = imageMerged;
    end
    if stepThrough == 1
        figure(1);
        clf
        imagesc([currentImage imageMerged]);
        axis image
        pause
    end
    replacedImages{i} = currentImage;
    clear currentImage
end

saveImages('Results/pose', replacedImages);

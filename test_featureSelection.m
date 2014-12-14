clearvars;

% initialize feature detectors
faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');

lEyeDetector = vision.CascadeObjectDetector('lefteye');
rEyeDetector = vision.CascadeObjectDetector('righteye');
mouthDetector = vision.CascadeObjectDetector('mouth');
noseDetector = vision.CascadeObjectDetector('nose');

images = loadImages('SampleSet/easy');
images = images(5);

% images{1} = imread('ConorOBrien.jpg');

for i = 1:numel(images)
    I = images{i};
    
    fprintf('Detecting faces in image %d/%d ... \n', i, numel(images));
    figure(1);clf;subplot(1,2,1);
    subimage(I); axis image; axis off; drawnow;hold on
    faceboxes = step(faceDetector, I);
        
    fprintf('Found %d faces \n', size(faceboxes, 1));
        
    for j = 1:size(faceboxes, 1)
        
        fprintf('Detecting features in face %d/%d ... \n', j, size(faceboxes, 1));

        xrange = (1:faceboxes(j,4)) + faceboxes(j,2);
        yrange = (1:faceboxes(j,3)) + faceboxes(j,1);
        faceimage = I(xrange, yrange,:);
        rEyeBoxes = step(rEyeDetector, faceimage);
        lEyeBoxes = step(lEyeDetector, faceimage);
        mouthBoxes = step(mouthDetector, faceimage);
        noseBoxes = step(noseDetector, faceimage);
        
        if isempty(rEyeBoxes) || isempty(lEyeBoxes) || isempty(mouthBoxes) || isempty(noseBoxes)
            continue
        end
        
        % Determine the best features using pictoral structure k-fan
        [bestIdx, ~, bestPoints] = distTrans(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes);
%%      
        fprintf('Finished Detecting Features ... \n');


        figure(1)
        clf

        % Plot face sample and control points
        subplot(1,3,1)
        img = imread('ConorFace.jpg');
        faceMask = imread('ConorFaceMask.jpg');
        faceMask = ~logical(faceMask(:,:,1));
        subimage(img);
        hold on
        basePoints = [47 59 27 73 68 73 28 36 63 35];
        scatter(basePoints(1:2:end), basePoints(2:2:end));
        
        % Plot found face and best features
        subplot(1,3,2)
        subimage(faceimage);
        hold on
        scatter(bestPoints(1:2:end), bestPoints(2:2:end));
        subplot(1,3,3);
        reshapePoints = @(points) [points(1:2:end)' points(2:2:end)'];

        % Pick control points for warping
        ctrlPoints = 1;
        switch ctrlPoints
            case 1 % Use just the four features from above (nose, mouth, leftEye, rightEye)
                im1_pts = reshapePoints(basePoints);
                im2_pts = reshapePoints(bestPoints);
            case 2 % Use four features and corners of face box
                im1_pts = [reshapePoints(basePoints); 1 1; 1 size(img, 1); size(img,2) 1; size(img, 1) size(img,2)];
                im2_pts = [reshapePoints(bestPoints); 1 1; 1 size(faceimage, 1);...
                    size(faceimage,2) 1; size(faceimage, 1) size(faceimage,2)];
            case 3 % Unse four features and center of face box
                im1_pts = [reshapePoints(basePoints); round(size(img(:,:,1))/2)];
                im2_pts = [reshapePoints(bestPoints); round(size(faceimage(:,:,1))/2)];
        end

        % Pick warping method and warp, they're all pretty bad right now
        warpMethod = 'geo';
        switch warpMethod
            case 'tri'
                warp_frac = 1;
                dissolve_frac = 0;
                med_pts = (im1_pts + im2_pts)/2;
                tri = delaunay(med_pts(:,1), med_pts(:,2));
                morphed_im = morph(img, faceimage, im1_pts, im2_pts, tri,...
                    warp_frac, dissolve_frac);
            case 'tps'
                warp_frac = 1;
                dissolve_frac = 0.1;
                morphed_im = morph_tps_wrapper(img, faceimage, im1_pts, im2_pts, warp_frac, dissolve_frac)/255;
            case 'geo' 
%                 tform = fitgeotrans(im1_pts,im2_pts,'pwl');
                tform = fitgeotrans(im1_pts, im2_pts, 'projective');
                morphed_im = imwarp(img, tform, 'OutputView',imref2d(size(faceimage)));
                morphed_mask = imwarp(faceMask, tform, 'OutputView',imref2d(size(faceimage)));
        end
        
        merged = pyramidBlur(morphed_im, faceimage, morphed_mask);
        subimage(merged);
        hold on
        scatter(bestPoints(1:2:end), bestPoints(2:2:end));
        disp('Done!')
        pause
        I(xrange, yrange,:) = merged*255;
        clf
        imagesc(I);
        axis image
        pause
    end

%     pause
end
function swappedImage = faceSwapLive(targetImage, swapImage, swapMask)
    scale = 1/6; % shrink scale for swapImage

    persistent faceDetector rEyeDetector lEyeDetector mouthDetector noseDetector;

    % Initialize the detectors the first time function is called
    if isempty(faceDetector) 
        faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');
        lEyeDetector = vision.CascadeObjectDetector('lefteye');
        rEyeDetector = vision.CascadeObjectDetector('righteye');
        mouthDetector = vision.CascadeObjectDetector('mouth');
        noseDetector = vision.CascadeObjectDetector('nose');
    end
    
    % Detect faces in image
    faceBoxes = step(faceDetector, targetImage);
    
    % Initialize swappedImage, if no faces are found it just returns targetImage
    swappedImage = targetImage;
    
    for j = 1:size(faceBoxes, 1)
        
        xRange = (1:faceBoxes(j,4)) + faceBoxes(j,2);
        yRange = (1:faceBoxes(j,3)) + faceBoxes(j,1);
        faceImage = targetImage(xRange, yRange,:);

        coder.varsize('faceImageGray', [200 200]); %coder needs to know max size of face
        faceImageGray = rgb2gray(faceImage); %coder step needs grayscale image

        % detect features in face
        rEyeBoxes = step(rEyeDetector, faceImageGray);
        lEyeBoxes = step(lEyeDetector, faceImageGray);
        mouthBoxes = step(mouthDetector, faceImageGray);
        noseBoxes = step(noseDetector, faceImageGray);
        
        % If anything is missing, skip this facebox
        if isempty(rEyeBoxes) || isempty(lEyeBoxes) || isempty(mouthBoxes) || isempty(noseBoxes)
            continue
        end
        
        % Determine the best features using the pictoral structure, k-fan
        bestPoints = featSelectLive(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes);
        basePoints = double([324 390 200 485 460 485 211 235 421 226]*scale);
        
        % If featSelectLive rejects points, skip this facebox
        if isempty(bestPoints)
            continue
        end
                
        % Reshape control points for warping
        swapPts = reshapePoints(basePoints);
        targetPts = reshapePoints(bestPoints);
        
        % Fit transformation and warp image and mask
        tform = fitgeotrans(swapPts, targetPts, 'projective');
        warpedImage = imwarp(swapImage, tform,'nearest', 'OutputView', imref2d(size(faceImage)));
        warpedMask = imwarp(swapMask, tform,'nearest', 'OutputView', imref2d(size(faceImage)));
        
        imageMask = false(size(targetImage(:,:,1)));
        imageMask(xRange, yRange) = warpedMask;
        
        morphedBlend = targetImage;
        morphedBlend(xRange, yRange,:) = warpedImage;

        swappedImage = pyramidBlendLive(morphedBlend, targetImage, imageMask);

        if size(faceBoxes, 1) > 1
            targetImage = swappedImage;
        end
    end
end

function points = reshapePoints(points)
coder.inline('always')
    points = [points(1:2:end)' points(2:2:end)']; 
end
function swappedImage = faceSwapLive(targetImage, swapImage, swapMask)
    scale = 1/3/2;
    persistent faceDetector rEyeDetector lEyeDetector mouthDetector noseDetector;

    if isempty(faceDetector)
        faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');
        lEyeDetector = vision.CascadeObjectDetector('lefteye');
        rEyeDetector = vision.CascadeObjectDetector('righteye');
        mouthDetector = vision.CascadeObjectDetector('mouth');
        noseDetector = vision.CascadeObjectDetector('nose');
    end
    
    faceBoxes = step(faceDetector, targetImage);
    
    swappedImage = targetImage;

    for j = 1:size(faceBoxes, 1)
        
        xRange = (1:faceBoxes(j,4)) + faceBoxes(j,2);
        yRange = (1:faceBoxes(j,3)) + faceBoxes(j,1);
        
        coder.varsize('faceImageStep', [200 200]);
        faceImage = targetImage(xRange, yRange,:);
        faceImageStep = rgb2gray(faceImage);

        rEyeBoxes = step(rEyeDetector, faceImageStep);
        lEyeBoxes = step(lEyeDetector, faceImageStep);
        mouthBoxes = step(mouthDetector, faceImageStep);
        noseBoxes = step(noseDetector, faceImageStep);
        
        if isempty(rEyeBoxes) || isempty(lEyeBoxes) || isempty(mouthBoxes) || isempty(noseBoxes)
            continue
        end
        
        % Determine the best features using pictoral structure k-fan
        bestPoints = featSelectLive(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes);
        basePoints = double([324 390 200 485 460 485 211 235 421 226]*scale);
        
        if isempty(bestPoints)
            continue
        end
                
        % Pick control points for warping
        swapPts = reshapePoints(basePoints);
        targetPts = reshapePoints(bestPoints);
        
        tform = fitgeotrans(swapPts, targetPts, 'projective');
        warpedImage = imwarp(swapImage, tform, 'OutputView', imref2d(size(faceImage)));
        warpedMask = imwarp(swapMask, tform, 'OutputView', imref2d(size(faceImage)));
        
        imageMask = false(size(targetImage(:,:,1)));
        imageMask(xRange, yRange,:) = logical(warpedMask);
        
        morphedBlend = zeros(size(targetImage));
        morphedBlend(xRange, yRange,:) = warpedImage;
        morphedBlend(morphedBlend == 0) = mean(swapImage(swapMask));

        swappedImage = pyramidBlendLive(morphedBlend, targetImage, imageMask,6);

        if size(faceBoxes, 1) > 1
            targetImage = swappedImage;
        end
    end
    
end
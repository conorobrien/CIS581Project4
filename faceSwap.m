function swappedImage = faceSwap(targetImage, swapImage, swapMask, detectors, varargin)

    if ~isempty(varargin) && strcmpi(varargin{1}, '-v')
		verb = true;
	else
		verb = false;
    end
    
    if ~isempty(varargin) && strcmpi(varargin{1}, 'lores')
		lores = true;
	else
		lores = false;
    end

	if verb; fprintf('Detecting faces in image ...'); end;
    faceBoxes = step(detectors.faceDetector, targetImage);
    if verb; fprintf('Found %d faces \n', size(faceBoxes, 1)); end;
        
    for j = 1:size(faceBoxes, 1)

        if verb;fprintf('\tDetecting features in face %d/%d ... ', j, size(faceBoxes, 1));end;


        xRange = (1:faceBoxes(j,4)) + faceBoxes(j,2);
        yRange = (1:faceBoxes(j,3)) + faceBoxes(j,1);
        faceImage = targetImage(xRange, yRange,:);

        if lores
            scale = 8;
            faceImage = imresize(faceImage, scale);
        end

        rEyeBoxes = step(detectors.rEyeDetector, faceImage);
        lEyeBoxes = step(detectors.lEyeDetector, faceImage);
        mouthBoxes = step(detectors.mouthDetector, faceImage);
        noseBoxes = step(detectors.noseDetector, faceImage);
        
        if isempty(rEyeBoxes) || isempty(lEyeBoxes) || isempty(mouthBoxes) || isempty(noseBoxes)
            if verb;fprintf('Didn''t find any features in this face box \n');end;
            continue
        end
        
        % Determine the best features using pictoral structure k-fan
        bestPoints = featSelect(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes);
        basePoints = [324 390 200 485 460 485 211 235 421 226];
        
        if isempty(bestPoints)
            if verb;fprintf('Face wasn''t good enough \n');end
            continue
        end
                
		if verb;fprintf('Done \n');end;

        if verb;fprintf('\tWarping Base Image ... ');end;

        % Pick control points for warping
        reshapePoints = @(points) [points(1:2:end)' points(2:2:end)']; % Function resizes points into something warping functions can use
        swapPts = reshapePoints(basePoints);
        targetPts = reshapePoints(bestPoints);

        
        tform = fitgeotrans(swapPts, targetPts, 'projective');
        warpedImage = imwarp(swapImage, tform, 'OutputView',imref2d(size(faceImage)));
        warpedMask = imwarp(swapMask, tform, 'OutputView',imref2d(size(faceImage)));
        
        if lores
            warpedMask = imresize(warpedMask, 1/scale);
            warpedImage = imresize(warpedImage, 1/scale);
        end

        if verb;fprintf('Done \n');end;
        
        if verb
            figure(1)
            clf
            % Plot face sample and control points
            subplot(1,2,1)
            subimage(swapImageColor);
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
        
        imageMask = false(size(targetImage(:,:,1)));
        imageMask(xRange, yRange,:) = logical(warpedMask);
        
        morphedBlend = zeros(size(targetImage));
        morphedBlend(xRange, yRange,:) = warpedImage;
        morphedBlend(morphedBlend == 0) = mean(swapImage(swapMask));

        clear targetImageHsv
        
        if verb;fprintf('\tStarting Pyramid Blend... ');end;
        swappedImage = pyramidBlendLive(morphedBlend, targetImage, imageMask,15);
        if verb;fprintf('Done \n');end;
        
        if verb
            clf
            imagesc([targetImage swappedImage]);
            axis image
            pause
        end
        targetImage = swappedImage;
    end
    if verb
        figure(1);
        clf
        imagesc([targetImage swappedImage]);
        axis image
        pause
    end

    if ~exist('swappedImage','var')
        swappedImage = targetImage;
    end
    
end
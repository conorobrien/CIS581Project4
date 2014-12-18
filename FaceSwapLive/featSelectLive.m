function [bestPoints] = featSelectLive(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes)
% possible improvements:
% - use left/right of mouth rather then mouth center
% - needs speedup, the pointsDist function gets really slow as # features increases
scale = 1/3/2;
% Pull out center of boxes and count each feature
noseCenter = boxCenter(noseBoxes);
numNose = size(noseCenter,1);
mouthCenter = boxCenter(mouthBoxes);
numMouth = size(mouthCenter,1);
mouthLeft = [mouthBoxes(:,1) mouthBoxes(:,2)+mouthBoxes(:,4)/2];
mouthRight = [mouthBoxes(:,1)+mouthBoxes(:,3) mouthBoxes(:,2)+mouthBoxes(:,4)/2];
% numMouth = size(mouthLeft,1);
lEyeCenter = boxCenter(lEyeBoxes);
numLEye = size(lEyeCenter,1);
rEyeCenter = boxCenter(rEyeBoxes);
numREye = size(rEyeCenter,1);

% Create matrix with permutation of every feature as a row
lTotal = numNose*numMouth*numLEye*numREye;
idxNose = repmat(1:numNose, lTotal/numNose,1);
idxMouth = repmat(1:numMouth,lTotal/numNose/numMouth, numNose);
idxLEye = repmat(1:numLEye,lTotal/numNose/numMouth/numLEye,numNose*numMouth);
idxREye = repmat(1:numREye,1,lTotal/numREye);

% Feature matrix, points = [x1 y1 x2 y2 x3 y3 x4 y4]
points = [noseCenter(idxNose(:), :) mouthLeft(idxMouth(:), :) mouthRight(idxMouth(:), :) ...
    lEyeCenter(idxLEye(:), :) rEyeCenter(idxREye(:), :)];

% Points of my test face
basePoints = double([324 390 200 485 460 485 211 235 421 226]*scale);

% k-Fan distances for base face
baseDist = pointsDist(basePoints);

% This is pretty slow, try to vectorize it later
dists = zeros(lTotal, 16);
for i = 1:lTotal
    dists(i,:) = pointsDist(points(i,:));
end

% Find the closest in k-fan space (using l1 norm now, easier to 1line)
[minDist, minIdx] = min(sum(abs(bsxfun(@minus, dists, baseDist)),2));

if minDist > 2.5
    bestPoints = [];
else
    % Return points, the index in boxes, and the homography (don't use homography anymore though)
    bestPoints = round(points(minIdx,:));

    % Calculate the left and right corners of the mouth
    bestMouthC = mouthCenter(idxMouth(minIdx),:);
    bestMouth = mouthBoxes(idxMouth(minIdx),:);
    bestREye = bestPoints(7:8);
    bestLEye = bestPoints(9:10);

    mouthLeft = bestMouthC - (bestREye - bestLEye)/(bestREye(1) - bestLEye(1))*(bestMouth(3)/2);
    mouthRight = bestMouthC + (bestREye - bestLEye)/(bestREye(1) - bestLEye(1))*(bestMouth(3)/2);

    if any(isfinite(mouthLeft) & isfinite(mouthRight))
        bestPoints(3:4) = mouthLeft;
        bestPoints(5:6) = mouthRight;
    end
end

end



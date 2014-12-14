function [bestIdx, bestH, bestPoints] = distTrans(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes)
% possible improvements:
% - use left/right of mouth rather then mouth center
% - needs speedup, the pointsDist function gets really slow as # features increases

boxCenter = @(box)box(:,1:2) + box(:,3:4)/2;
% Pull out center of boxes and count each feature
noseCenter = boxCenter(noseBoxes);
numNose = size(noseCenter,1);
% mouthCenter = boxCenter(mouthBoxes);
% numMouth = size(mouthCenter,1);
mouthLeft = [mouthBoxes(:,1) mouthBoxes(:,2)+mouthBoxes(:,4)/2];
mouthRight = [mouthBoxes(:,1)+mouthBoxes(:,3) mouthBoxes(:,2)+mouthBoxes(:,4)/2];
numMouth = size(mouthLeft,1);
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
% points = [noseCenter(idxNose(:), :) mouthCenter(idxMouth(:), :) ...
%     lEyeCenter(idxLEye(:), :) rEyeCenter(idxREye(:), :)];
points = [noseCenter(idxNose(:), :) mouthLeft(idxMouth(:), :) mouthRight(idxMouth(:), :) ...
    lEyeCenter(idxLEye(:), :) rEyeCenter(idxREye(:), :)];

% Points of my test face
basePoints = [47 59 27 73 68 73 28 36 63 35];

% k-Fan distances for base face
baseDist = pointsDist(basePoints);

% This is pretty slow, try to vectorize it later
dists = zeros(lTotal, 16);
for i = 1:lTotal
    dists(i,:) = pointsDist(points(i,:));
end

% Find the closest in k-fan space (using l1 norm now, easier to 1line)
[~, minIdx] = min(sum(abs(bsxfun(@minus, dists, baseDist)),2));

% Return points, the index in boxes, and the homography (don't use homography anymore though)
bestPoints = round(points(minIdx, :));
bestIdx = [idxNose(minIdx) idxMouth(minIdx) idxLEye(minIdx) idxREye(minIdx)];
bestH = est_homography(points(minIdx, 1:2:end), points(minIdx,2:2:end),...
        basePoints(1:2:end), basePoints(2:2:end));
end

function dists = pointsDist(points)
	% Converts it into the k-fan space, right now using Nose and Right Eye
    dist1 = pdist2(points(1:2), [points([3 5 7 9])' points([4 6 8 10])']); %Nose
    dist2 = pdist2(points(3:4), [points([1 5 7 9])' points([2 6 8 10])']); % Mouth left
    dist3 = pdist2(points(5:6), [points([1 3 7 9])' points([2 4 8 10])']); % Left Eye
    dist4 = pdist2(points(7:8), [points([1 3 5 7])' points([2 4 6 8])']); % Right Eye

    dists = [dist1 dist2 dist3 dist4];
    dists = dists/mean(dists); % dividing by mean seems to be best way to normalize

end



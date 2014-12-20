function [bestPoints] = featSelectLive(noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes)
coder.inline('always')

scale = 1/6; %scale of baseImage, so I don't have to keep resizing basePoints

% Pull out center of boxes (and LR of mouth) and count each feature
noseCenter = boxCenter(noseBoxes);
numNose = size(noseCenter,1);
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

% Find the closest in k-fan space
[minDist, minIdx] = min(sum(abs(bsxfun(@minus, dists, baseDist)),2));

% If minimum is too far away, reject all faces, otherwise retrun the best
if minDist > 4
    bestPoints = [];
else
    % Return points, the index in boxes, and the homography (don't use homography anymore though)
    bestPoints = round(points(minIdx,:));

    % Calculate the left and right corners of the mouth
    bestMouth = mouthBoxes(idxMouth(minIdx),:);
    bestMouthC = boxCenter(bestMouth);
    bestREye = bestPoints(7:8);
    bestLEye = bestPoints(9:10);

    mouthLeft = bestMouthC - (bestREye - bestLEye)/(bestREye(1) - bestLEye(1))*(bestMouth(3)/2);
    mouthRight = bestMouthC + (bestREye - bestLEye)/(bestREye(1) - bestLEye(1))*(bestMouth(3)/2);

    if any(isfinite(mouthLeft) & isfinite(mouthRight)) % Reject NaN or Inf points, it happens sometimes
        bestPoints(3:4) = mouthLeft;
        bestPoints(5:6) = mouthRight;
    end
end

end

function center = boxCenter(box)
coder.inline('always')
    center = box(:,1:2) + box(:,3:4)/2;
end

function dists = pointsDist(points)
coder.inline('always')
    % Converts it into the k-fan space, right now using Nose and Right Eye
    dist1 = sqrt(sum(bsxfun(@minus, [points([3 5 7 9])' points([4 6 8 10])'],points(1:2)).^2, 2));
    dist2 = sqrt(sum(bsxfun(@minus, [points([1 5 7 9])' points([2 6 8 10])'],points(3:4)).^2, 2));
    dist3 = sqrt(sum(bsxfun(@minus, [points([1 3 7 9])' points([2 4 8 10])'],points(5:6)).^2, 2));
    dist4 = sqrt(sum(bsxfun(@minus, [points([1 3 5 9])' points([2 4 5 10])'],points(7:8)).^2, 2));

    dists = [dist1' dist2' dist3' dist4'];
    dists = dists/mean(dists); % dividing by mean seems to be best way to normalize
end


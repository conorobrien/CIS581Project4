function dists = pointsDist(points)
	% Converts it into the k-fan space, right now using Nose and Right Eye
    dist1 = sqrt(sum(bsxfun(@minus, [points([3 5 7 9])' points([4 6 8 10])'],points(1:2)).^2, 2));
    dist2 = sqrt(sum(bsxfun(@minus, [points([1 5 7 9])' points([2 6 8 10])'],points(3:4)).^2, 2));
    dist3 = sqrt(sum(bsxfun(@minus, [points([1 3 7 9])' points([2 4 8 10])'],points(5:6)).^2, 2));
    dist4 = sqrt(sum(bsxfun(@minus, [points([1 3 5 9])' points([2 4 5 10])'],points(7:8)).^2, 2));

    dists = [dist1' dist2' dist3' dist4'];
    dists = dists/mean(dists); % dividing by mean seems to be best way to normalize
end
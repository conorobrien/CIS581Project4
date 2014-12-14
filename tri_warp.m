function im_warp = tri_warp(im, im_pts, tri, T, bary_coord, pts_x, pts_y)

%% COMPUTE CORRESPONDING POINT IN SOURCE IMAGE
im_pts3 = reshape(im_pts', [1 2 length(im_pts)]); 
n_tri = size(tri,1);
n_pts = length(pts_x(:));

source_tri_pts = [	im_pts3(1,1,tri(:,1)),  im_pts3(1,1,tri(:,2)),  im_pts3(1,1,tri(:,3)) ;...
		            im_pts3(1,2,tri(:,1)),  im_pts3(1,2,tri(:,2)),  im_pts3(1,2,tri(:,3)) ;...
		            ones(1,3,n_tri)]; 
                
source_pts = zeros(n_pts, 2);
for i = 1:n_pts
    if ~isnan(T(i))
    source_pts_h = source_tri_pts(:,:,T(i))*bary_coord(:,i);
    source_pts(i,:) = round([source_pts_h(1)/source_pts_h(3) source_pts_h(2)/source_pts_h(3)]);
    end
end
%% COPY PIXEL VALUES TO WARPED IMAGE
warp_s = size(pts_x);
im_warp = zeros(warp_s(1), warp_s(2), 3);
for i = 1:n_pts
    if ~isnan(T(i))
        im_warp(pts_y(i), pts_x(i),:) = im(source_pts(i,2), source_pts(i,1),:);

    else
        im_warp(pts_y(i), pts_x(i),:) = zeros(1,1,size(im,3));
    end
end
end

function interp = source_interp(im, s2)
    
    interp(:,:,1) = interp2(im(:,:,1), s2(1), s2(2));
    interp(:,:,2) = interp2(im(:,:,2), s2(1), s2(2));
    interp(:,:,3) = interp2(im(:,:,3), s2(1), s2(2));
%     try
%     interp = (1-frac(2))*im(s1(2),s1(1),:) + frac(2)*im(s1(2)+1, s1(1),:)...
%         + (1-frac(1))*im(s1(2),s1(1)) + frac(1)*im(s1(2), s1(1)+1);
%     interp = interp/norm(interp);
%     catch
%         interp = im(s1(2),s1(1),:);
%     end
end

function morphed_im = morph(im1, im2, im1_pts, im2_pts, tri, warp_frac, dissolve_frac)

%% DEFINE INTERMEDIATE TRIANGLE (MEAN OF POINTS)
im1 = im2double(im1);
im2 = im2double(im2);

int_pts = im1_pts.*(1-warp_frac) + im2_pts.*warp_frac;
%% DETERMINE WHICH TRIANGLE EACH POINT IN B IS IN
[pts_x, pts_y] = meshgrid(min(int_pts(:,1)):max(int_pts(:,1)), min(int_pts(:,2)):max(int_pts(:,2)));
T = tsearchn(int_pts, tri, [pts_x(:) pts_y(:)]);
%% COMPUTE BARYCENTRIC COORDINATE FOR EACH POINT IN B

% compute matrix and its inverse
n_ctl_pts = length(int_pts);
n_tri = size(tri,1);
int_pts = reshape(int_pts', [1 2 n_ctl_pts]); 
tri_pts = [	int_pts(1,1,tri(:,1)),  int_pts(1,1,tri(:,2)),  int_pts(1,1,tri(:,3)) ;...
            int_pts(1,2,tri(:,1)),  int_pts(1,2,tri(:,2)),  int_pts(1,2,tri(:,3)) ;...
            ones(1,3,n_tri)];

tri_pts_inv = zeros(size(tri_pts));
for i = 1:n_tri
    tri_pts_inv(:,:,i) = inv(tri_pts(:,:,i));
end

n_pts = length(pts_x(:));
bary_coord = zeros(3,n_pts);
for i = 1:n_pts
    if ~isnan(T(i))
    bary_coord(:,i) = tri_pts_inv(:,:,T(i))*[pts_x(i) pts_y(i) 1]';
    end
end
    
im1_warp = tri_warp(im1, im1_pts, tri, T, bary_coord, pts_x, pts_y);
im2_warp = tri_warp(im2, im2_pts, tri, T, bary_coord, pts_x, pts_y);

morphed_im = im1_warp.*(1-dissolve_frac) + im2_warp.*dissolve_frac;

end


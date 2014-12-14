function morphed_im = morph_tps_wrapper(im1, im2, im1_pts, im2_pts, warp_frac, dissolve_frac )

int_pts = round(im1_pts.*(1-warp_frac) + im2_pts.*warp_frac);

im1_warp = morph_image(int_pts, im1, im1_pts);
im2_warp = morph_image(int_pts, im2, im2_pts);

morphed_im = im1_warp.*(1-dissolve_frac) + im2_warp.*dissolve_frac;

end

function im_warp = morph_image(int_pts, im, im_pts)
    [a1x,axx,ayx,wx] = est_tps(int_pts, im_pts(:,1));
    [a1y,axy,ayy,wy] = est_tps(int_pts, im_pts(:,2));
    im_warp = morph_tps(im, a1x, axx, ayx, wx, a1y, axy, ayy, wy, int_pts, fliplr(max(int_pts)));
end
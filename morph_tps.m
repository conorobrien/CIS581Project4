function morphed_im = morph_tps(imsource, a1x, axx, ayx, wx, a1y, axy, ayy, wy, ctr_pts, sz)

norm_row = @(x1, x2) sqrt(sum((x1 - x2).^2,2));
U = @(x1, x2) norm_row(x1,x2).^2.*max(log(norm_row(x1,x2).^2),0);

[x,y] = meshgrid(1:sz(2), 1:sz(1));
morphed_im = zeros(sz(1), sz(2), 3);

for i = 1:length(x(:))
    Uxy = U(ctr_pts, repmat([x(i) y(i)], [size(ctr_pts,1) 1]));
    sc_x = a1x + axx.*x(i) + ayx.*y(i) + sum(wx.*Uxy);
    sc_y = a1y + axy.*x(i) + ayy.*y(i) + sum(wy.*Uxy);
    sc_x_clamp = round(max(min(sc_x, size(imsource,2)), 1)); 
    sc_y_clamp = round(max(min(sc_y, size(imsource,1)), 1)); 

    morphed_im(y(i),x(i),:) = imsource(sc_y_clamp, sc_x_clamp,:);
end

end
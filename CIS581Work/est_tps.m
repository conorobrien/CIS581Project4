function [a1,ax,ay,w] = est_tps(ctr_pts, target_value)

norm_row = @(x1, x2) sqrt(sum((x1 - x2).^2,2));
U = @(x1, x2) norm_row(x1,x2).^2.*max(log(norm_row(x1,x2).^2),0);
n = length(ctr_pts);
lambda = 1e-3;
[i, j] = meshgrid(1:n,1:n);
Klin = U(ctr_pts(i(:),:), ctr_pts(j(:),:));
K = reshape(Klin, [n,n]);

P = [ctr_pts, ones(n,1)];

para = ([K P ; P' zeros(3)] + lambda.*eye(n+3))\[target_value; zeros(3,1)];

w = para(1:end-3);
ax = para(end-2);
ay = para(end-1);
a1 = para(end);
end


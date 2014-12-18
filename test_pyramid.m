%% builtin function

im1 = imresize(im2double(imread('apple.jpg')),1);
im2 = imresize(im2double(imread('orange.jpg')),1);
mask = [ones(size(im1,1), size(im1,2)/2) zeros(size(im1,1), size(im1,2)/2)];
% mask = ones(size(im1(:,:,1)));

mask = logical(mask);
for i = 1:10
    blend = pyramidBlendLive_mex(im1, im2, mask,int16(i));
    figure(1);imagesc(blend); axis image off
    disp('done')
    pause
end

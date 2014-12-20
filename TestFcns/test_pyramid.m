addpath ../FaceSwap
addpath ../FaceSwapLive

im1 = imresize(im2double(imread('apple.jpg')),1);
im2 = imresize(im2double(imread('orange.jpg')),1);
mask = [ones(size(im1,1), size(im1,2)/2) zeros(size(im1,1), size(im1,2)/2)];
mask = logical(mask);

for i = 1:10
    tic
    blend = pyramidBlend(im1, im2, mask);
    toc
    figure(1);imagesc(blend); axis image off
    pause
end

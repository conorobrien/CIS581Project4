%% builtin function

im1 = imread('apple.jpg');
im2 = imread('orange.jpg');
mask = [ones(size(im1,1), size(im1,2)/2) zeros(size(im1,1), size(im1,2)/2)];
figure(3)
imagesc(pyramidBlur(im1, im2, mask)); axis image off
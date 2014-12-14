%% builtin function

im1 = imread('apple.jpg');
im2 = imread('orange.jpg');
mask = [ones(size(im1,1), size(im1,2)/2) zeros(size(im1,1), size(im1,2)/2)];
figure(3)

for i = 1:10
    imagesc(pyramidBlur(im1, im2, mask,i)); axis image off
    pause
end

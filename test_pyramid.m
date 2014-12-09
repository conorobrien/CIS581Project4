%% builtin function

I0 = imread('cameraman.tif');
I1 = impyramid(I0, 'reduce');
I2 = impyramid(I1, 'reduce');
I3 = impyramid(I2, 'reduce');

figure(1)
subplot(1,4,1)
subimage(I0)
subplot(1,4,2)
subimage(I1)
subplot(1,4,3)
subimage(I2)
subplot(1,4,4)
subimage(I3)

%% our pyramid functions, not exactly the same but pretty close

pyramids = pyramidMake(im2double(I0), 4);

figure(2)
l = length(pyramids);
subplot(2,l,1);
for i = 1:length(pyramids)
    subplot(2,l,i)
    subimage(pyramids(i).gaussian);
    subplot(2, l, i+l)
    subimage(pyramids(i).laplacian);
end
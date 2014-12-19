function [ imageRecon ] = pyramidBlendLive(im1, im2, mask, levels)
%PYRAMIDBLUR pyramid blur two pyramid objects using a binary mask

% rewrite this to just do it five times, and allocate different sized
% images for each level. Will be much faster than it currently is.

gaussian1 = zeros([size(im1) levels], 'like', im1);
gaussian2 = zeros([size(im2) levels], 'like', im1);
laplacian1 = zeros([size(im1) levels-1], 'like', im1);
laplacian2 = zeros([size(im1) levels-1], 'like', im1);
imsize = zeros(levels, 2, 'like', im1);
gaussMask = false([size(mask) levels]);

gaussian1(:,:,:,1) = im1;
imsize(1,:) = size(im1(:,:,1));
gaussian2(:,:,:,1) = im2;
gaussMask(:,:,1) = mask;

for i = 2:levels
    [gaussian1(:,:,:,i), laplacian1(:,:,:,i-1), imsize(i,:)] = pyrBlendDown(gaussian1(:,:,:,i-1), imsize(i-1,:));
    [gaussian2(:,:,:,i), laplacian2(:,:,:,i-1), ~           ] = pyrBlendDown(gaussian2(:,:,:,i-1), imsize(i-1,:));
    [gaussMask(:,:,i),   ~,                     ~           ] = pyrBlendDown(gaussMask(:,:,i-1), imsize(i-1,:));
    if sum(imsize(i,:)) < 12
        levels = i;
        break
    end
end

imageRecon = bsxfun(@times, gaussian1(:,:,:,levels), gaussMask(:,:,levels)) + bsxfun(@times, gaussian2(:,:,:,levels), ~gaussMask(:,:,levels));

for i = (levels-1):-1:1
    laplacian = bsxfun(@times, laplacian1(:,:,:,i), gaussMask(:,:,i)) + bsxfun(@times, laplacian2(:,:,:,i), ~gaussMask(:,:,i));
    imageRecon = pyrBlendUp(imageRecon, imsize(i+1,:),imsize(i,:), laplacian);
end
imageRecon = uint8(imageRecon);
end

function [gaussian, laplacian, imStopSize] = pyrBlendDown(image, imStartSize)

    k = [1 4 6 4 1]/16;
    kernel = conv2(k, k');
   
    gaussian = zeros(size(image));
    laplacian = gaussian;

    mRange = 1:round(imStartSize(1)/2);
    nRange = 1:round(imStartSize(2)/2);
    imStopSize = round(imStartSize/2);

    gaussTemp = imfilter(image(1:imStartSize(1), 1:imStartSize(2),:), kernel, 'circular', 'conv');
    gaussian(mRange, nRange,:) = gaussTemp(1:2:end, 1:2:end,:);

    gaussTemp(:) = 0;
    gaussTemp(1:2:end, 1:2:end,:) = gaussian(mRange, nRange,:);
    laplacian(1:imStartSize(1), 1:imStartSize(2),:)  = ...
        image(1:imStartSize(1), 1:imStartSize(2),:) -...
        imfilter(gaussTemp(1:imStartSize(1), 1:imStartSize(2),:),...
        4*kernel, 'circular', 'conv');
end

function [imageRecon] = pyrBlendUp(image, imageSz1, imageSz2, laplacian)

    k = [1 4 6 4 1]/16;
    kernel = conv2(k, k');

    imageRecon = zeros(size(image,1), size(image,2), 3);
    imageRecon(1:2:imageSz2(1), 1:2:imageSz2(2),:) = image(1:imageSz1(1), 1:imageSz1(2),:);
    imageRecon(1:imageSz2(1), 1:imageSz2(2),:) = imfilter(imageRecon(1:imageSz2(1), 1:imageSz2(2),:), 4*kernel, 'circular', 'conv') + laplacian(1:imageSz2(1), 1:imageSz2(2),:);
end

% function blurred = blur(im1, im2, mask, levelsLeft)
%         %% if levelsLeft == 1, go down another step
%     if levelsLeft == 1 || numel(im1) < 27
%         blurred = bsxfun(@times, im1,mask) + bsxfun(@times, im2, ~mask);
%     else
%         %% blur with gaussian, subsample
%         k = [1 4 6 4 1]/16;
%         kernel = conv2(k, k');
% %         kernel = fspecial('gaussian',5,1.5);
%         blurmask = imfilter(mask, kernel, 'circular');
%         blurmask = blurmask(1:2:end, 1:2:end);

%         gaussLarge = imfilter(im1, kernel, 'circular');
%         gaussian1 = gaussLarge(1:2:end, 1:2:end,:);

%         gaussLarge = imfilter(im2, kernel, 'circular');
%         gaussian2 = gaussLarge(1:2:end, 1:2:end,:);

%         %% subtract to get laplace
%         gaussRecon = zeros(size(im1));
%         gaussRecon(1:2:end, 1:2:end,:) = gaussian1;
%         laplacian1 = im1 - imfilter(gaussRecon, 4*kernel, 'circular');

%         gaussRecon(1:2:end, 1:2:end,:) = gaussian2;
%         laplacian2 = im2 - imfilter(gaussRecon, 4*kernel, 'circular');
        
%         maskRecon = zeros(size(mask));
%         maskRecon(1:2:end, 1:2:end,:) = double(blurmask);
%         maskRecon = imfilter(maskRecon, 4*kernel, 'circular');
        
%         blurredTemp = blur(gaussian1, gaussian2, blurmask, levelsLeft-1);
%         blurred = zeros(size(im1));
%         blurred(1:2:end, 1:2:end,:) = blurredTemp;
        
%         blurred = imfilter(blurred, 4*kernel, 'circular') + bsxfun(@times, laplacian1,maskRecon)  + bsxfun(@times, laplacian2,(1-maskRecon));
%     end
% end
function [ image ] = pyramidBlur(im1, im2, mask, varargin)
%PYRAMIDBLUR pyramid blur two pyramid objects using a binary mask

if ~isempty(varargin)
    levels = varargin{1};
else
    levels = 10;
end

im1 = im2double(im1);
im2 = im2double(im2);
mask = logical(mask);
image = blur(im1, im2, mask, levels);
end

function blurred = blur(im1, im2, mask, levelsLeft)
        %% if levelsLeft == 1, go down another step
    if levelsLeft == 1 || numel(im1) < 4
        blurred = bsxfun(@times, im1,mask) + bsxfun(@times, im2,1 - mask);
    else
        %% blur with gaussian, subsample
        k = [1 4 6 4 1]/16;
        kernel = conv2(k, k');
        
        blurmask = imfilter(mask, kernel, 'circular');
        blurmask = blurmask(1:2:end, 1:2:end);

        gaussLarge = imfilter(im1, kernel, 'circular');
        gaussian1 = gaussLarge(1:2:end, 1:2:end,:);

        gaussLarge = imfilter(im2, kernel, 'circular');
        gaussian2 = gaussLarge(1:2:end, 1:2:end,:);

        %% subtract to get laplace
        gaussRecon = zeros(size(im1));
        gaussRecon(1:2:end, 1:2:end,:) = gaussian1;
        laplacian1 = im1 - imfilter(gaussRecon, 4*kernel, 'circular');

        gaussRecon(1:2:end, 1:2:end,:) = gaussian2;
        laplacian2 = im2 - imfilter(gaussRecon, 4*kernel, 'circular');

        blurredTemp = blur(gaussian1, gaussian2, blurmask, levelsLeft -1);
        blurred = zeros(size(im1));
        blurred(1:2:end, 1:2:end,:) = blurredTemp;
        blurred = imfilter(blurred, 4*kernel, 'circular') + bsxfun(@times, laplacian1,mask)  + bsxfun(@times, laplacian2,(~mask));
    end
end
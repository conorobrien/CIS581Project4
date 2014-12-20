function [ imageRecon ] = pyramidBlendLive(im1, im2, mask)
%PYRAMIDBLUR pyramid blur two pyramid objects using a binary mask

% First -> Second

[gaussian1_2, laplacian1_1] = pyrBlendDown(im1);
[gaussian2_2, laplacian2_1] = pyrBlendDown(im2);
[gaussMask_2, ~] = pyrBlendDown(mask);

% Second -> Third

[gaussian1_3, laplacian1_2] = pyrBlendDown(gaussian1_2);
[gaussian2_3, laplacian2_2] = pyrBlendDown(gaussian2_2);
[gaussMask_3, ~] = pyrBlendDown(gaussMask_2);

% Third -> Fourth

[gaussian1_4, laplacian1_3] = pyrBlendDown(gaussian1_3);
[gaussian2_4, laplacian2_3] = pyrBlendDown(gaussian2_3);
[gaussMask_4, ~] = pyrBlendDown(gaussMask_3);

% Fourth -> Fifth

[gaussian1_5, laplacian1_4] = pyrBlendDown(gaussian1_4);
[gaussian2_5, laplacian2_4] = pyrBlendDown(gaussian2_4);
[gaussMask_5, ~] = pyrBlendDown(gaussMask_4);

imageRecon = bsxfun(@times, gaussian1_5, gaussMask_5) + bsxfun(@times, gaussian2_5, ~gaussMask_5);

% Fifth -> Fourth 

laplacian = bsxfun(@times, laplacian1_4, gaussMask_4) + bsxfun(@times, laplacian2_4, ~gaussMask_4);
imageRecon = pyrBlendUp(imageRecon, laplacian);

% Fourth -> Third 

laplacian = bsxfun(@times, laplacian1_3, gaussMask_3) + bsxfun(@times, laplacian2_3, ~gaussMask_3);
imageRecon = pyrBlendUp(imageRecon, laplacian);

% Third -> Second 

laplacian = bsxfun(@times, laplacian1_2, gaussMask_2) + bsxfun(@times, laplacian2_2, ~gaussMask_2);
imageRecon = pyrBlendUp(imageRecon, laplacian);

% Second -> First

laplacian = bsxfun(@times, laplacian1_1, mask) + bsxfun(@times, laplacian2_1, mask);
imageRecon = pyrBlendUp(imageRecon, laplacian);

end

function [gaussian, laplacian] = pyrBlendDown(image)
coder.inline('always')
    
    kernel = coder.const(conv2([1 4 6 4 1]/16, [1 4 6 4 1]'/16));
   
    gaussTemp = imfilter(image, kernel, 'circular', 'conv');
    gaussian = gaussTemp(1:2:end, 1:2:end,:);

    gaussTemp(:) = 0;
    gaussTemp(1:2:end, 1:2:end,:) = gaussian;
    laplacian  = image - imfilter(gaussTemp,4*kernel, 'circular', 'conv');
end

function [imageRecon] = pyrBlendUp(image, laplacian)
coder.inline('always')

    kernel = coder.const(conv2([1 4 6 4 1]/16, [1 4 6 4 1]'/16));

    imageRecon = zeros(size(laplacian,1), size(laplacian,2), 3);
    imageRecon(1:2:end, 1:2:end,:) = image;
    imageRecon = imfilter(imageRecon, 4*kernel, 'circular', 'conv') + laplacian;
end

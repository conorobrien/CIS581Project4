function [ pyramid ] = pyramidMake(image, levels_left)
%pyramidMake produces pyramid objects with the specified number of levels
%   Detailed explanation goes here

pyramidTemp = imagePyramid();
%% Gaussian blur, 5x5 filter, subsample 2x
k = [1 4 6 4 1]/16;
kernel = conv2(k, k');

gaussLarge = conv2(padarray(image,[2 2], 'symmetric') , kernel, 'valid');
pyramidTemp.gaussian = gaussLarge(1:2:end, 1:2:end);
%% Laplacian, reconstruct from above and subtract from original

gaussRecon = zeros(size(image));
gaussRecon(1:2:end, 1:2:end) = pyramidTemp.gaussian;
pyramidTemp.laplacian = image - conv2(padarray(gaussRecon,[2 2], 'symmetric')...
    , 4*kernel, 'valid');

if levels_left == 1 || numel(pyramidTemp.gaussian)<64
    % final level or smaller than 8x8 gaussian, finish and go back up the recursion
    pyramid = pyramidTemp;
else
    % if not, call pyramidMake again and keep going
    pyramid = [pyramidTemp pyramidMake(pyramidTemp.gaussian, levels_left - 1)];
end

end


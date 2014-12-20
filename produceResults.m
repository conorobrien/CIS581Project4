clearvars;
addpath FaceSwap
%% Initialize the feature detectors
detectors.faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');
detectors.lEyeDetector = vision.CascadeObjectDetector('lefteye');
detectors.rEyeDetector = vision.CascadeObjectDetector('righteye');
detectors.mouthDetector = vision.CascadeObjectDetector('mouth');
detectors.noseDetector = vision.CascadeObjectDetector('nose');

%% Load Images from folder
folder = 'TestSet/pose';
images = loadImages(folder);
replacedImages = images;

%% Load base image and mask
swapImage = im2double(imread('SwapSet/ConorFaceHires.jpg'));
swapMask = imread('SwapSet/ConorFaceHiresMask.jpg');
swapMask = ~logical(swapMask(:,:,1));
colorMask = imread('SwapSet/ConorFaceHiresColorMask.jpg');
colorMask = ~logical(colorMask(:,:,1));

swappedImages = images;
for i = 1:numel(images)
        if strcmpi(folder, 'TestSet/more')
            swappedImages{i} = faceSwap(images{i}, swapImage, swapMask, colorMask, detectors, 'lores');
        else
            swappedImages{i} = faceSwap(images{i}, swapImage, swapMask, colorMask, detectors);
        end
end

saveImages(['Results/' folder], swappedImages)


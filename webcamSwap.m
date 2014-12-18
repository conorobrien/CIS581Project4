clear all

cam = webcam(1);

% Initialize the feature detectors
% detectors.faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');
% detectors.lEyeDetector = vision.CascadeObjectDetector('lefteye');
% detectors.rEyeDetector = vision.CascadeObjectDetector('righteye');
% detectors.mouthDetector = vision.CascadeObjectDetector('mouth');
% detectors.noseDetector = vision.CascadeObjectDetector('nose');

%% Load base image and mask
scale = 1/3;
swapImage = imresize(imread('SwapSet/ConorFaceHires.jpg'),scale/2);
% swapImage = im2double(imresize(imread('SwapSet/ConorFaceHires.jpg'),scale/2));

swapMask = imresize(imread('SwapSet/ConorFaceHiresMask.jpg'), scale/2);
swapMask = ~logical(swapMask(:,:,1));

if exist('test.avi', 'file')
    !rm test.avi
end
writerObj = VideoWriter('test.avi');
writerObj.FrameRate = 3;
open(writerObj);
t = tic;
dt = 0;
i = 0;
figure(1)
while dt < 60
    i = i+1;
    img = imresize(snapshot(cam), scale);
%     img = im2double(imresize(snapshot(cam), scale));

    swappedImage = faceSwapLive_mex(img, swapImage, swapMask);
%     swappedImage = faceSwap(img, swapImage, swapMask, detectors);
    imagesc(swappedImage);
    writeVideo(writerObj, swappedImage);
    dt = dt + toc;
end
close(writerObj)



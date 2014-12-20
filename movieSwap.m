clearvars;
addpath FaceSwap
%% Initialize the feature detectors
detectors.faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');
detectors.lEyeDetector = vision.CascadeObjectDetector('lefteye');
detectors.rEyeDetector = vision.CascadeObjectDetector('righteye');
detectors.mouthDetector = vision.CascadeObjectDetector('mouth');
detectors.noseDetector = vision.CascadeObjectDetector('nose');

%% Load base image and mask
swapImage = im2double(imread('SwapSet/ConorFaceHires.jpg'));
swapMask = imread('SwapSet/ConorFaceHiresMask.jpg');
swapMask = ~logical(swapMask(:,:,1));
colorMask = imread('SwapSet/ConorFaceHiresColorMask.jpg');
colorMask = ~logical(colorMask(:,:,1));

readObj = VideoReader('testset/video/videoclip.mp4');
writeObj = VideoWriter('testset/video/swapclip.mp4');
writeObj.FrameRate = 10;
open(writeObj);


while hasFrame(readObj)    
    
        image = im2double(readFrame(readObj));
        swappedImage = faceSwap(image, swapImage, swapMask,colorMask, detectors);
        writeVideo(writeObj, min(max(swappedImage, 0),1));

end

close(writeObj);

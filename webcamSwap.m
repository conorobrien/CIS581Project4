function webcamSwap(varargin)

if any(cellfun(@isnumeric,varargin))
    timeout = varargin{cellfun(@isnumeric,varargin)};
else
    timeout = 90;
end

if ~isempty(varargin) && any(strcmp('mex',varargin))
    useMex = true;
    addpath FaceSwapLive
else
    useMex = false;
    addpath FaceSwap
    %% Initialize the feature detectors
    detectors.faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');
    detectors.lEyeDetector = vision.CascadeObjectDetector('lefteye');
    detectors.rEyeDetector = vision.CascadeObjectDetector('righteye');
    detectors.mouthDetector = vision.CascadeObjectDetector('mouth');
    detectors.noseDetector = vision.CascadeObjectDetector('nose');
end

record = false;
% outputVideo = 'test'

fprintf('Will run for %d seconds, or press q to quit\n', timeout);

cam = webcam(1);

%% Load base image and mask
scale = 1/3;
swapImage = im2double(imresize(imread('SwapSet/ConorFaceHires.jpg'),scale/2));
swapMask = imresize(imread('SwapSet/ConorFaceHiresMask.jpg'), scale/2);
swapMask = ~logical(swapMask(:,:,1));
colorMask = imresize(imread('SwapSet/ConorFaceHiresColorMask.jpg'), scale/2);
colorMask = ~logical(colorMask(:,:,1));

if record
    if exist([outputVideo '.avi'], 'file') %#ok<*UNRCH>
        yes = true; no = false;
        if input('Video file already exists, overwrite? (yes,no): ')
            !rm test.avi
        else
            record = false;
        end
    end
    writerObj = VideoWriter('webcamswap.avi');
    writerObj.FrameRate = 6;
    open(writerObj);
end

dt = 0;
screen = figure(1);
set(screen, 'KeyPressFcn',@quitWindow);

tic;
while dt < timeout
    img = im2double(imresize(snapshot(cam), scale));
    tic;
    if ~useMex
        swappedImage = faceSwap(img, swapImage, swapMask, colorMask, detectors, 'webcam');
    else
        swappedImage = faceSwapLiveMEX(img, swapImage, (swapMask));
    end
    toc
    imagesc(fliplr(swappedImage));
    if record; writeVideo(writerObj, min(max(swappedImage, 0),1)); end;
    dt = dt + toc;
    if screen.UserData == 1
        close(screen);
        return
    end
end
if record; close(writerObj);end;
end

function quitWindow(source, eventdata)
if eventdata.Key == 'q'
    disp('quitting ...')
    source.UserData = 1;
end
end

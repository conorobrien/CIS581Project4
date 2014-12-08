clearvars

addpath face-release1.0-basic
tmp = load('face-release1.0-basic/face_p146_small.mat');
msmall = tmp.model;
tmp = load('face-release1.0-basic/face_p99.mat');
mlarge = tmp.model;
clear tmp

images = load_images('SampleSet/easy');

posemap = 90:-15:-90;

for i = 1:numel(images)
    fprintf('working on image %d/%d \n', i, numel(images));
    clf; imagesc(images{i}); axis image; axis off; drawnow;
    bs = detect(images{i}, msmall, msmall.thresh);
    
    if isempty(bs);
        fprintf('no faces found, trying mlarge \n');
        bs = detect(images{i}, mlarge, mlarge.thresh);
    end
    
    bs = clipboxes(images{i}, bs);
    bs = nms_face(bs,0.3);
    figure,showboxes(images{i}, bs(1),posemap),title('Highest scoring detection');
    disp('press any key to continue');
    pause;
    close all;
end


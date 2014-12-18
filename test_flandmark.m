clearvars;
addpath('CIS581Work');
addpath('flandmark/matlab_toolbox/mex/')
model2 = flandmark_load_model('flandmark/data/flandmark_model.dat');
load flandmark/data/model.mat
%% Initialize the feature detectors
faceDetector = vision.CascadeObjectDetector('Nose');

%% Load Images from folder
images = loadImages('SampleSet/easy');
% images = images(1);
% images{1} = imread('ConorOBrien.jpg');
%% Load base image and mask
baseImg = im2double(imread('ConorFace.jpg'));
faceMask = imread('ConorFaceMask.jpg');
faceMask = ~logical(faceMask(:,:,1));
% images = images(1);

for i = 1:numel(images)
    currentImage = imresize(images{i},2);
    currentImageBW = rgb2gray(currentImage);
    fprintf('Detecting faces in image %d/%d ... \n', i, numel(images));
    faceBoxes = step(faceDetector, currentImageBW);
    fprintf('Found %d faces \n', size(faceBoxes, 1));
        
    for j = 1:size(faceBoxes, 1)
        
        fprintf('Detecting features in face %d/%d ... \n', j, size(faceBoxes, 1));
       ol = round(max(faceBoxes(j,3:4))*1.5);
%         
        
%         boundingBox = max(faceBoxes(j, :) + [-ol/2 -ol/2 ol ol], [1 1 1 1]);
%         boundingBox([1 3]) = min(boundingBox([1 3]), size(currentImage, 1));
%         boundingBox([2 4]) = min(boundingBox([2 4]), size(currentImage, 2));
        bBox = [faceBoxes(j,1) faceBoxes(j,2) ...
            faceBoxes(j,1)+faceBoxes(j,3) faceBoxes(j,2)+faceBoxes(j,4)] + ...
            [-ol -ol ol ol];
        P = flandmark_detector(uint8(currentImageBW), int32(bBox), model2);
        fprintf('Finished Detecting Features ... \n');
        
        figure(1)
        clf
        imagesc(currentImageBW);
        axis image; colormap gray
        hold on
        comps = ['S0'; 'S1'; 'S2'; 'S3'; 'S4'; 'S5'; 'S6'; 'S7'];
        plot(P(1, 1), P(2, 1), 'bs', 'LineWidth', 1, 'MarkerSize', 5, 'MarkerFaceColor', 'b');
        text(P(1, 1)+1, P(2, 1)+1, comps(1,:), 'color', 'b', 'FontSize', 12);
        plot(P(1, 2:end), P(2, 2:end), 'rs', 'LineWidth', 1, 'MarkerSize', 5, 'MarkerFaceColor', 'r');
        text(P(1, 2:end)+1, P(2, 2:end)+1, comps(2:end,:), 'color', 'r', 'FontSize', 12);
        pause;
    end
end
clearvars;

faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');

lEyeDetector = vision.CascadeObjectDetector('lefteye');
rEyeDetector = vision.CascadeObjectDetector('righteye');
mouthDetector = vision.CascadeObjectDetector('mouth');
noseDetector = vision.CascadeObjectDetector('nose');

images = loadImages('SampleSet/easy');
images = images(5);

% images{1} = imread('ConorOBrien.jpg');
for i = 1:numel(images)
    I = images{i};
    
    fprintf('Detecting faces in image %d/%d ... \n', i, numel(images));
    figure(1);clf;subplot(1,2,1);
    subimage(I); axis image; axis off; drawnow;hold on
    faceboxes = step(faceDetector, I);
    
    fprintf('Found %d faces \n', size(faceboxes, 1));
    
    for j = 1:size(faceboxes,1)
        
        fprintf('Detecting features in face %d/%d ... \n', j, size(faceboxes, 1));

        xrange = (1:faceboxes(j,4)) + faceboxes(j,2);
        yrange = (1:faceboxes(j,3)) + faceboxes(j,1);
        faceimage = I(xrange, yrange,:);
        rEyeBoxes = step(rEyeDetector, faceimage);
        lEyeBoxes = step(lEyeDetector, faceimage);
        mouthBoxes = step(mouthDetector, faceimage);
        noseBoxes = step(noseDetector, faceimage);
        annotations = [ repmat({'Right Eye'}, size(rEyeBoxes,1),1);
                        repmat({'Left Eye'}, size(lEyeBoxes,1),1);
                        repmat({'Mouth'}, size(mouthBoxes,1),1);
                        repmat({'Nose'}, size(noseBoxes,1),1)];

        subimageAnn = insertObjectAnnotation(faceimage, 'rectangle', [rEyeBoxes; lEyeBoxes; mouthBoxes; noseBoxes], annotations);
        subplot(1,2,2);
        subimage(subimageAnn); axis image; axis off; drawnow;
        
        subplot(1,2,1)
        IFaces = insertObjectAnnotation(I, 'rectangle', faceboxes(j,:), 'Face');
        subimage(IFaces)
        
        disp('Paused...')
        pause
    end


    pause
end
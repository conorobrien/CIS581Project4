clearvars;

faceDetector = vision.CascadeObjectDetector('FrontalFaceCART');

lEyeDetector = vision.CascadeObjectDetector('lefteye');
rEyeDetector = vision.CascadeObjectDetector('righteye');
mouthDetector = vision.CascadeObjectDetector('mouth');
noseDetector = vision.CascadeObjectDetector('nose');
images = load_images('SampleSet/hard');

for i = 1:numel(images)
    I = images{i};
    
    fprintf('working on image %d/%d \n', i, numel(images));
    clf; imagesc(I); axis image; axis off; drawnow;
    faceboxes = step(faceDetector, I);
    rEyeBoxes = step(rEyeDetector, I);
    lEyeBoxes = step(lEyeDetector, I);
    mouthBoxes = step(mouthDetector, I);
    noseBoxes = step(noseDetector, I);
    
    IFaces = insertObjectAnnotation(I, 'rectangle', faceboxes, 'Face');
    IFaces = insertObjectAnnotation(IFaces, 'rectangle', rEyeBoxes, 'Right', 'color', 'red');
    IFaces = insertObjectAnnotation(IFaces, 'rectangle', lEyeBoxes, 'Left', 'color', 'green');
    IFaces = insertObjectAnnotation(IFaces, 'rectangle', mouthBoxes, 'Mouth','color', 'blue');
    IFaces = insertObjectAnnotation(IFaces, 'rectangle', noseBoxes, 'Nose', 'color', 'cyan');

    figure, imshow(IFaces)
    pause
end
function basePoints = findBasePoints(img)
    h = figure;
    disp('Nose, Left Mouth, Right Mouth, Left Eye, Right Eye')
    imagesc(img)
    axis image
    [x, y] = ginput(5);
    basePoints = zeros(1, length([x;y]));
    basePoints(1:2:end) = x;
    basePoints(2:2:end) = y;
    basePoints = int16(basePoints);
    disp(basePoints);
    close(h);
    
    
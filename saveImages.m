function saveImages(dir, images)
    for i = 1:numel(images)
        imageDir = [dir num2str(i) '.jpg'];
        imwrite(images{i}, imageDir);
    end
    
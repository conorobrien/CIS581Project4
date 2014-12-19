function images = loadImages(target_dir, varargin)
%LOAD_IMAGES Loads all images in a directory into a cell array
% default image type is .jpg, can pass in alternative extensions

    if ~isempty(varargin)
        type = varargin{1};
    else
        type = '.jpg';
    end

    switch computer
        case 'MACI64'
            target_dir(target_dir == '\') = '/';  % switch any accidental slashes to correct version
            if target_dir(end) ~= '/', target_dir = [target_dir '/']; end; % if it doesnt end with /, append it
            im_paths = dir([target_dir '*' type]); % glob any files of the appropriate type
        case 'PCWIN64'
            target_dir(target_dir == '/') = '\';
            if target_dir(end) ~= '\', target_dir = [target_dir '\']; end;
            im_paths = dir([target_dir '*' type]);
        otherwise
            error('Can''t recognize OS');
    end

    images = cell(numel(im_paths),1);
    for i = 1:numel(im_paths)
        images{i} = im2double(imread([target_dir im_paths(i).name]));
    end

end



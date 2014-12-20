clear all

readObj = VideoReader('webcamswap.avi');
writerObj = VideoWriter('webcamswap2.avi');
writerObj.FrameRate = 3;
open(writerObj);

while hasFrame(readObj) 
    image = readFrame(readObj);
    writeVideo(writerObj, image);
end

close(writerObj);
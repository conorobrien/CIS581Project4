CIS581Project4
==============

## Usage

#### webcamSwap 
webcamSwap() -runs for 60s using face swap with color correction  
webcamSwap(n) -runs for n seconds  
webcamSwap('mex') -runs using compiled coder .mex, can also give it a number to run for n seconds  
-Before using 'mex' option run compile.m in /FaceSwapLive to run the matlab coder, this doesn't always work though since coder is tempermental.

#### movieSwap
Just run the script, writes a swapped image to Results/faceswap.avi

#### produceResults
Writes swapped images to Results/, change variable folder on ln 11 to change where images are loaded from.


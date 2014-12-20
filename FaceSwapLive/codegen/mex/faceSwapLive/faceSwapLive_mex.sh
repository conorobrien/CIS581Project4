MATLAB="/Applications/MATLAB_R2014b.app"
Arch=maci64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/Users/conor/.matlab/R2014b"
OPTSFILE_NAME="./setEnv.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for faceSwapLive" > faceSwapLive_mex.mki
echo "CC=$CC" >> faceSwapLive_mex.mki
echo "CFLAGS=$CFLAGS" >> faceSwapLive_mex.mki
echo "CLIBS=$CLIBS" >> faceSwapLive_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> faceSwapLive_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> faceSwapLive_mex.mki
echo "CXX=$CXX" >> faceSwapLive_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> faceSwapLive_mex.mki
echo "CXXLIBS=$CXXLIBS" >> faceSwapLive_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> faceSwapLive_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> faceSwapLive_mex.mki
echo "LD=$LD" >> faceSwapLive_mex.mki
echo "LDFLAGS=$LDFLAGS" >> faceSwapLive_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> faceSwapLive_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> faceSwapLive_mex.mki
echo "Arch=$Arch" >> faceSwapLive_mex.mki
echo OMPFLAGS= >> faceSwapLive_mex.mki
echo OMPLINKFLAGS= >> faceSwapLive_mex.mki
echo "EMC_COMPILER=Xcode with Clang" >> faceSwapLive_mex.mki
echo "EMC_CONFIG=debug" >> faceSwapLive_mex.mki
"/Applications/MATLAB_R2014b.app/bin/maci64/gmake" -B -f faceSwapLive_mex.mk

/*
 * _coder_faceSwapLive_mex.c
 *
 * Code generation for function 'faceSwapLive'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_faceSwapLive_api.h"
#include "faceSwapLive_initialize.h"
#include "faceSwapLive_terminate.h"

/* Function Declarations */
static void faceSwapLive_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "faceSwapLive", NULL, false, {933878966U,2751585356U,3052266547U,2808075253U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void faceSwapLive_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[1];
  const mxArray *inputs[3];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  faceSwapLiveStackData* faceSwapLiveStackDataLocal = (faceSwapLiveStackData*)mxCalloc(1,sizeof(faceSwapLiveStackData));
  /* Module initialization. */
  faceSwapLive_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 3, mxCHAR_CLASS, 12, "faceSwapLive");
  } else if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 12, "faceSwapLive");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  faceSwapLive_api(faceSwapLiveStackDataLocal, inputs, outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  faceSwapLive_terminate();
  mxFree(faceSwapLiveStackDataLocal);
}

void faceSwapLive_atexit_wrapper(void)
{
   faceSwapLive_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(faceSwapLive_atexit_wrapper);
  /* Dispatch the entry-point. */
  faceSwapLive_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (_coder_faceSwapLive_mex.c) */

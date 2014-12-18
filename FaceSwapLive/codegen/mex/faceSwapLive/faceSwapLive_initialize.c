/*
 * faceSwapLive_initialize.c
 *
 * Code generation for function 'faceSwapLive_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "faceSwapLive_initialize.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Declarations */
static void faceSwapLive_once(void);

/* Function Definitions */
static void faceSwapLive_once(void)
{
  noseDetector_not_empty_init();
  mouthDetector_not_empty_init();
  lEyeDetector_not_empty_init();
  rEyeDetector_not_empty_init();
  faceDetector_not_empty_init();
}

void faceSwapLive_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Video_and_Image_Blockset", 2);
  emlrtLicenseCheckR2012b(&st, "Image_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    faceSwapLive_once();
  }
}

/* End of code generation (faceSwapLive_initialize.c) */

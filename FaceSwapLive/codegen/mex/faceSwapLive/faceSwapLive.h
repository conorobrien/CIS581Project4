/*
 * faceSwapLive.h
 *
 * Code generation for function 'faceSwapLive'
 *
 */

#ifndef __FACESWAPLIVE_H__
#define __FACESWAPLIVE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "faceSwapLive_types.h"

/* Variable Declarations */
extern faceSwapLiveStackData *faceSwapLiveStackDataLocal;

/* Function Declarations */
extern void faceSwapLive(faceSwapLiveStackData *SD, real_T targetImage[307440],
  const real_T swapImage[33075], const boolean_T swapMask[11025], real_T
  swappedImage[307440]);
extern void faceSwapLive_api(faceSwapLiveStackData *SD, const mxArray *prhs[3],
  const mxArray *plhs[1]);
extern void faceSwapLive_atexit(void);
extern void faceSwapLive_initialize(emlrtContext *aContext);
extern void faceSwapLive_terminate(void);

#endif

/* End of code generation (faceSwapLive.h) */

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

/* Function Declarations */
extern void faceDetector_not_empty_init(void);
extern void faceSwapLive(faceSwapLiveStackData *SD, const emlrtStack *sp,
  uint8_T targetImage[307440], const uint8_T swapImage[33075], const boolean_T
  swapMask[11025], uint8_T swappedImage[307440]);
extern void lEyeDetector_not_empty_init(void);
extern void mouthDetector_not_empty_init(void);
extern void noseDetector_not_empty_init(void);
extern void rEyeDetector_not_empty_init(void);

#endif

/* End of code generation (faceSwapLive.h) */

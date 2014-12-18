/*
 * imwarp.h
 *
 * Code generation for function 'imwarp'
 *
 */

#ifndef __IMWARP_H__
#define __IMWARP_H__

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
extern void b_remapPointsAndResample(const emlrtStack *sp, const boolean_T
  inputImage[11025], const real_T tform_T[9], const real_T outputRef_ImageSize[2],
  emxArray_real_T *outputImage);
extern void remapPointsAndResample(const emlrtStack *sp, const uint8_T
  inputImage[33075], const real_T tform_T[9], const real_T outputRef_ImageSize[2],
  emxArray_real_T *outputImage);

#endif

/* End of code generation (imwarp.h) */

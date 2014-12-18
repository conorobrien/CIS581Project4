/*
 * pyramidBlendLive.h
 *
 * Code generation for function 'pyramidBlendLive'
 *
 */

#ifndef __PYRAMIDBLENDLIVE_H__
#define __PYRAMIDBLENDLIVE_H__

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
extern void b_pyrBlendDown(const emlrtStack *sp, const boolean_T image[102480],
  const real_T imStartSize[2], real_T gaussian[102480], real_T laplacian[102480],
  real_T imStopSize[2]);
extern void pyrBlendDown(const emlrtStack *sp, const real_T image[307440], const
  real_T imStartSize[2], real_T gaussian[307440], real_T laplacian[307440],
  real_T imStopSize[2]);
extern void pyrBlendUp(const emlrtStack *sp, const real_T image[307440], const
  real_T imageSz1[2], const real_T imageSz2[2], const real_T laplacian[307440],
  real_T imageRecon[307440]);

#endif

/* End of code generation (pyramidBlendLive.h) */

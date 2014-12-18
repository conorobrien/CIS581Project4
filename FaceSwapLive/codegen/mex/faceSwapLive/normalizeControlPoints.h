/*
 * normalizeControlPoints.h
 *
 * Code generation for function 'normalizeControlPoints'
 *
 */

#ifndef __NORMALIZECONTROLPOINTS_H__
#define __NORMALIZECONTROLPOINTS_H__

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
extern void normalizeControlPoints(const emlrtStack *sp, const real_T pts_data[],
  const int32_T pts_size[2], real_T ptsNorm_data[], int32_T ptsNorm_size[2],
  real_T normMatrixInv[9]);

#endif

/* End of code generation (normalizeControlPoints.h) */

/*
 * reshapePoints.h
 *
 * Code generation for function 'reshapePoints'
 *
 */

#ifndef __RESHAPEPOINTS_H__
#define __RESHAPEPOINTS_H__

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
extern void reshapePoints(const emlrtStack *sp, const real_T points_data[],
  const int32_T points_size[2], real_T b_points_data[], int32_T b_points_size[2]);

#endif

/* End of code generation (reshapePoints.h) */

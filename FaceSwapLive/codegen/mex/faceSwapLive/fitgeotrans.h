/*
 * fitgeotrans.h
 *
 * Code generation for function 'fitgeotrans'
 *
 */

#ifndef __FITGEOTRANS_H__
#define __FITGEOTRANS_H__

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
extern void fitgeotrans(const emlrtStack *sp, const real_T fixedPoints_data[],
  const int32_T fixedPoints_size[2], real_T *tform_Dimensionality, real_T
  tform_T[9]);

#endif

/* End of code generation (fitgeotrans.h) */

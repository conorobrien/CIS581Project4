/*
 * isfinite.c
 *
 * Code generation for function 'isfinite'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "isfinite.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
void b_isfinite(const real_T x[2], boolean_T b[2])
{
  int32_T i15;
  for (i15 = 0; i15 < 2; i15++) {
    b[i15] = ((!muDoubleScalarIsInf(x[i15])) && (!muDoubleScalarIsNaN(x[i15])));
  }
}

/* End of code generation (isfinite.c) */

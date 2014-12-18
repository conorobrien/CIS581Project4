/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "sum.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
void sum(const real_T x[8], real_T y[4])
{
  int32_T iy;
  int32_T ixstart;
  int32_T j;
  iy = -1;
  ixstart = 3;
  for (j = 0; j < 4; j++) {
    ixstart++;
    iy++;
    y[iy] = x[ixstart - 4] + x[ixstart];
  }
}

/* End of code generation (sum.c) */

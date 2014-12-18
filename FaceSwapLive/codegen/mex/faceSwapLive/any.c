/*
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "any.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
boolean_T any(const boolean_T x[2])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(x[k] == 0)) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (any.c) */

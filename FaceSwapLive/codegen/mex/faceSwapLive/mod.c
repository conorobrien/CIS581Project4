/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "mod.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
void b_mod(const real_T x_data[], const int32_T x_size[2], real_T y, real_T
           r_data[], int32_T r_size[2])
{
  int16_T iv125[2];
  int32_T k;
  real_T r;
  for (k = 0; k < 2; k++) {
    iv125[k] = (int16_T)x_size[k];
  }

  r_size[0] = 1;
  r_size[1] = iv125[1];
  for (k = 0; k < iv125[1]; k++) {
    if (y == 0.0) {
      r = x_data[k];
    } else if (y == muDoubleScalarFloor(y)) {
      r = x_data[k] - muDoubleScalarFloor(x_data[k] / y) * y;
    } else {
      r = x_data[k] / y;
      if (muDoubleScalarAbs(r - muDoubleScalarRound(r)) <=
          2.2204460492503131E-16 * muDoubleScalarAbs(r)) {
        r = 0.0;
      } else {
        r = (r - muDoubleScalarFloor(r)) * y;
      }
    }

    r_data[k] = r;
  }
}

/* End of code generation (mod.c) */

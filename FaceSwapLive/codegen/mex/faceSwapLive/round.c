/*
 * round.c
 *
 * Code generation for function 'round'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "round.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
void b_round(real_T x[10])
{
  int32_T k;
  for (k = 0; k < 10; k++) {
    x[k] = muDoubleScalarRound(x[k]);
  }
}

void c_round(real_T x[2])
{
  int32_T k;
  for (k = 0; k < 2; k++) {
    x[k] = muDoubleScalarRound(x[k]);
  }
}

/* End of code generation (round.c) */

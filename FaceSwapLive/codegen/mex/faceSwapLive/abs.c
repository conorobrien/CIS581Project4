/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "abs.h"
#include "faceSwapLive_emxutil.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRTEInfo kb_emlrtRTEI = { 16, 5, "abs",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elfun/abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T i14;
  int32_T k;
  for (i14 = 0; i14 < 2; i14++) {
    uv1[i14] = (uint32_T)x->size[i14];
  }

  i14 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = 16;
  emxEnsureCapacity(sp, (emxArray__common *)y, i14, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  i14 = x->size[0] << 4;
  for (k = 0; k < i14; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */

/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "sqrt.h"
#include "eml_error.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo pc_emlrtRSI = { 14, "sqrt",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T x[4])
{
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < 4; k++) {
    if (x[k] < 0.0) {
      st.site = &pc_emlrtRSI;
      eml_error(&st);
    }
  }

  for (k = 0; k < 4; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

void c_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &pc_emlrtRSI;
    eml_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.c) */

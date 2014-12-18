/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "eml_int_forloop_overflow_check.h"
#include "SystemCore.h"
#include "faceSwapLive_mexutil.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtMCInfo e_emlrtMCI = { 87, 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 86, 15, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo uj_emlrtRSI = { 86, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo wj_emlrtRSI = { 87, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Definitions */
void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 34 };

  const mxArray *m7;
  char_T cv22[34];
  int32_T i;
  static const char_T cv23[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 5 };

  char_T cv24[5];
  static const char_T cv25[5] = { 'i', 'n', 't', '3', '2' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  y = NULL;
  m7 = emlrtCreateCharArray(2, iv24);
  for (i = 0; i < 34; i++) {
    cv22[i] = cv23[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m7, cv22);
  emlrtAssign(&y, m7);
  b_y = NULL;
  m7 = emlrtCreateCharArray(2, iv25);
  for (i = 0; i < 5; i++) {
    cv24[i] = cv25[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m7, cv24);
  emlrtAssign(&b_y, m7);
  st.site = &uj_emlrtRSI;
  b_st.site = &wj_emlrtRSI;
  error(&st, message(&b_st, y, b_y, &e_emlrtMCI), &f_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */

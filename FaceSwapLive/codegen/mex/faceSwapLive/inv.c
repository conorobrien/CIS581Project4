/*
 * inv.c
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "inv.h"
#include "eml_warning.h"
#include "norm.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo tb_emlrtRSI = { 27, "inv",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/matfun/inv.m" };

static emlrtRSInfo ub_emlrtRSI = { 40, "inv",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/matfun/inv.m" };

static emlrtRSInfo vb_emlrtRSI = { 44, "inv",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/matfun/inv.m" };

/* Function Definitions */
void inv(const emlrtStack *sp, const real_T x[9], real_T y[9])
{
  real_T b_x[9];
  int32_T p1;
  int32_T p2;
  int32_T p3;
  real_T absx11;
  real_T absx21;
  real_T absx31;
  int32_T itmp;
  real_T b_y;
  const mxArray *c_y;
  static const int32_T iv26[2] = { 1, 8 };

  const mxArray *m8;
  char_T cv26[8];
  static const char_T cv27[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  char_T cv28[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  memcpy(&b_x[0], &x[0], 9U * sizeof(real_T));
  p1 = 0;
  p2 = 3;
  p3 = 6;
  absx11 = muDoubleScalarAbs(x[0]);
  absx21 = muDoubleScalarAbs(x[1]);
  absx31 = muDoubleScalarAbs(x[2]);
  if ((absx21 > absx11) && (absx21 > absx31)) {
    p1 = 3;
    p2 = 0;
    b_x[0] = x[1];
    b_x[1] = x[0];
    b_x[3] = x[4];
    b_x[4] = x[3];
    b_x[6] = x[7];
    b_x[7] = x[6];
  } else {
    if (absx31 > absx11) {
      p1 = 6;
      p3 = 0;
      b_x[0] = x[2];
      b_x[2] = x[0];
      b_x[3] = x[5];
      b_x[5] = x[3];
      b_x[6] = x[8];
      b_x[8] = x[6];
    }
  }

  absx21 = b_x[1] / b_x[0];
  b_x[1] /= b_x[0];
  absx11 = b_x[2] / b_x[0];
  b_x[2] /= b_x[0];
  b_x[4] -= absx21 * b_x[3];
  b_x[5] -= absx11 * b_x[3];
  b_x[7] -= absx21 * b_x[6];
  b_x[8] -= absx11 * b_x[6];
  if (muDoubleScalarAbs(b_x[5]) > muDoubleScalarAbs(b_x[4])) {
    itmp = p2;
    p2 = p3;
    p3 = itmp;
    b_x[1] = absx11;
    b_x[2] = absx21;
    absx11 = b_x[4];
    b_x[4] = b_x[5];
    b_x[5] = absx11;
    absx11 = b_x[7];
    b_x[7] = b_x[8];
    b_x[8] = absx11;
  }

  absx31 = b_x[5];
  b_y = b_x[4];
  absx21 = b_x[5] / b_x[4];
  b_x[8] -= absx21 * b_x[7];
  absx11 = (absx21 * b_x[1] - b_x[2]) / b_x[8];
  absx21 = -(b_x[1] + b_x[7] * absx11) / b_x[4];
  y[p1] = ((1.0 - b_x[3] * absx21) - b_x[6] * absx11) / b_x[0];
  y[p1 + 1] = absx21;
  y[p1 + 2] = absx11;
  absx11 = -(absx31 / b_y) / b_x[8];
  absx21 = (1.0 - b_x[7] * absx11) / b_x[4];
  y[p2] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p2 + 1] = absx21;
  y[p2 + 2] = absx11;
  absx11 = 1.0 / b_x[8];
  absx21 = -b_x[7] * absx11 / b_x[4];
  y[p3] = -(b_x[3] * absx21 + b_x[6] * absx11) / b_x[0];
  y[p3 + 1] = absx21;
  y[p3 + 2] = absx11;
  st.site = &tb_emlrtRSI;
  absx11 = norm(x);
  absx21 = norm(y);
  absx31 = 1.0 / (absx11 * absx21);
  if ((absx11 == 0.0) || (absx21 == 0.0) || (absx31 == 0.0)) {
    b_st.site = &ub_emlrtRSI;
    eml_warning(&b_st);
  } else {
    if (muDoubleScalarIsNaN(absx31) || (absx31 < 2.2204460492503131E-16)) {
      b_st.site = &vb_emlrtRSI;
      c_y = NULL;
      m8 = emlrtCreateCharArray(2, iv26);
      for (p1 = 0; p1 < 8; p1++) {
        cv26[p1] = cv27[p1];
      }

      emlrtInitCharArrayR2013a(&b_st, 8, m8, cv26);
      emlrtAssign(&c_y, m8);
      d_y = NULL;
      m8 = emlrtCreateDoubleScalar(14.0);
      emlrtAssign(&d_y, m8);
      e_y = NULL;
      m8 = emlrtCreateDoubleScalar(6.0);
      emlrtAssign(&e_y, m8);
      f_y = NULL;
      m8 = emlrtCreateDoubleScalar(absx31);
      emlrtAssign(&f_y, m8);
      c_st.site = &kk_emlrtRSI;
      c_emlrt_marshallIn(&c_st, c_sprintf(&c_st, b_sprintf(&c_st, c_y, d_y, e_y,
        &i_emlrtMCI), f_y, &j_emlrtMCI), "sprintf", cv28);
      b_st.site = &vb_emlrtRSI;
      b_eml_warning(&b_st, cv28);
    }
  }
}

/* End of code generation (inv.c) */

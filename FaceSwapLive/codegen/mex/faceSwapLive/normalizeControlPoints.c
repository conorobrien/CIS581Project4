/*
 * normalizeControlPoints.c
 *
 * Code generation for function 'normalizeControlPoints'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "normalizeControlPoints.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo hd_emlrtRSI = { 51, "combine_vector_elements",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo od_emlrtRSI = { 21, "normalizeControlPoints",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+geotrans/+internal/normalizeControlPoints.m"
};

static emlrtRSInfo pd_emlrtRSI = { 26, "normalizeControlPoints",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+geotrans/+internal/normalizeControlPoints.m"
};

static emlrtRSInfo qd_emlrtRSI = { 28, "normalizeControlPoints",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+geotrans/+internal/normalizeControlPoints.m"
};

static emlrtRSInfo rd_emlrtRSI = { 31, "normalizeControlPoints",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+geotrans/+internal/normalizeControlPoints.m"
};

static emlrtRSInfo sd_emlrtRSI = { 12, "hypot",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elfun/hypot.m" };

static emlrtRSInfo td_emlrtRSI = { 11, "eml_scalexp_alloc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"
};

static emlrtRSInfo ud_emlrtRSI = { 19, "sumprod",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/private/sumprod.m"
};

static emlrtRSInfo vd_emlrtRSI = { 38, "sumprod",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/private/sumprod.m"
};

static emlrtMCInfo v_emlrtMCI = { 1, 1, "scalexpAlloc",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"
};

static emlrtRSInfo qj_emlrtRSI = { 1, "scalexpAlloc",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"
};

/* Function Definitions */
void normalizeControlPoints(const emlrtStack *sp, const real_T pts_data[], const
  int32_T pts_size[2], real_T ptsNorm_data[], int32_T ptsNorm_size[2], real_T
  normMatrixInv[9])
{
  real_T cent[2];
  int32_T i19;
  int32_T ix;
  int32_T iy;
  int32_T bk;
  int32_T ixstart;
  real_T s;
  int32_T k;
  real_T av_data[10];
  int32_T nc1;
  int32_T b;
  int32_T ck;
  real_T cv_data[10];
  int32_T exitg2;
  boolean_T p;
  const mxArray *y;
  static const int32_T iv78[2] = { 1, 15 };

  const mxArray *m20;
  char_T cv110[15];
  static const char_T cv111[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  const mxArray *b_y;
  static const int32_T iv79[2] = { 1, 36 };

  char_T cv112[36];
  static const char_T cv113[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T b_p;
  int32_T exitg1;
  int32_T b_k;
  const mxArray *c_y;
  static const int32_T iv80[2] = { 1, 37 };

  char_T cv114[37];
  static const char_T cv115[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &od_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &gd_emlrtRSI;
  if (pts_size[0] == 0) {
    for (i19 = 0; i19 < 2; i19++) {
      cent[i19] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    for (bk = 0; bk < 2; bk++) {
      ixstart = ix + 1;
      ix++;
      s = pts_data[ixstart];
      c_st.site = &hd_emlrtRSI;
      for (k = 2; k <= pts_size[0]; k++) {
        ix++;
        s += pts_data[ix];
      }

      iy++;
      cent[iy] = s;
    }
  }

  for (i19 = 0; i19 < 2; i19++) {
    cent[i19] /= (real_T)pts_size[0];
  }

  st.site = &pd_emlrtRSI;
  ix = pts_size[0];
  ptsNorm_size[0] = pts_size[0];
  if (pts_size[0] == 0) {
  } else {
    iy = 0;
    bk = 0;
    nc1 = pts_size[0];
    b = (pts_size[0] << 1) - pts_size[0];
    b_st.site = &qc_emlrtRSI;
    ck = 0;
    while ((nc1 > 0) && (ck <= b)) {
      b_st.site = &rc_emlrtRSI;
      for (k = 0; k + 1 <= ix; k++) {
        av_data[k] = pts_data[iy + k];
      }

      ixstart = (int8_T)pts_size[0];
      for (i19 = 0; i19 < ixstart; i19++) {
        cv_data[i19] = av_data[i19] - cent[bk];
      }

      b_st.site = &sc_emlrtRSI;
      for (k = 0; k + 1 <= nc1; k++) {
        ptsNorm_data[ck + k] = cv_data[k];
      }

      iy += ix;
      bk++;
      ck += nc1;
    }
  }

  st.site = &qd_emlrtRSI;
  b_st.site = &sd_emlrtRSI;
  c_st.site = &td_emlrtRSI;
  i19 = pts_size[0];
  k = 1;
  do {
    exitg2 = 0;
    if (k - 1 < 2) {
      if (k <= 1) {
        ixstart = ptsNorm_size[0];
      } else {
        ixstart = 1;
      }

      if (k <= 1) {
        ix = ptsNorm_size[0];
      } else {
        ix = 1;
      }

      if (ixstart != ix) {
        p = false;
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (p) {
  } else {
    y = NULL;
    m20 = emlrtCreateCharArray(2, iv78);
    for (bk = 0; bk < 15; bk++) {
      cv110[bk] = cv111[bk];
    }

    emlrtInitCharArrayR2013a(&c_st, 15, m20, cv110);
    emlrtAssign(&y, m20);
    d_st.site = &qj_emlrtRSI;
    error(&d_st, b_message(&d_st, y, &v_emlrtMCI), &v_emlrtMCI);
  }

  for (k = 0; k < (int8_T)i19; k++) {
    av_data[k] = muDoubleScalarHypot(ptsNorm_data[k], ptsNorm_data[k +
      ptsNorm_size[0]]);
  }

  ixstart = (int8_T)pts_size[0];
  for (k = 0; k < (int8_T)i19; k++) {
    cv_data[k] = av_data[k] * av_data[k];
  }

  st.site = &qd_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  if (((int8_T)pts_size[0] == 1) || ((int8_T)pts_size[0] != 1)) {
    p = true;
  } else {
    p = false;
  }

  c_st.site = &ud_emlrtRSI;
  if (p) {
  } else {
    b_y = NULL;
    m20 = emlrtCreateCharArray(2, iv79);
    for (bk = 0; bk < 36; bk++) {
      cv112[bk] = cv113[bk];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m20, cv112);
    emlrtAssign(&b_y, m20);
    d_st.site = &pj_emlrtRSI;
    error(&d_st, b_message(&d_st, b_y, &w_emlrtMCI), &w_emlrtMCI);
  }

  p = false;
  b_p = false;
  k = 0;
  do {
    exitg1 = 0;
    if (k < 2) {
      if (k + 1 <= 1) {
        b_k = ixstart;
      } else {
        b_k = 1;
      }

      if (b_k != 0) {
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  c_st.site = &vd_emlrtRSI;
  if (!p) {
  } else {
    c_y = NULL;
    m20 = emlrtCreateCharArray(2, iv80);
    for (bk = 0; bk < 37; bk++) {
      cv114[bk] = cv115[bk];
    }

    emlrtInitCharArrayR2013a(&c_st, 37, m20, cv114);
    emlrtAssign(&c_y, m20);
    d_st.site = &pj_emlrtRSI;
    error(&d_st, b_message(&d_st, c_y, &w_emlrtMCI), &w_emlrtMCI);
  }

  c_st.site = &uc_emlrtRSI;
  if ((int8_T)pts_size[0] == 0) {
    s = 0.0;
  } else {
    s = cv_data[0];
    d_st.site = &wd_emlrtRSI;
    for (k = 2; k <= ixstart; k++) {
      s += cv_data[k - 1];
    }
  }

  if (s > 0.0) {
    st.site = &rd_emlrtRSI;
    st.site = &rd_emlrtRSI;
    s = muDoubleScalarSqrt(pts_size[0] << 1) / muDoubleScalarSqrt(s);
  } else {
    s = 1.0;
  }

  ptsNorm_size[1] = 2;
  ixstart = pts_size[0] << 1;
  for (i19 = 0; i19 < ixstart; i19++) {
    ptsNorm_data[i19] *= s;
  }

  normMatrixInv[0] = 1.0 / s;
  normMatrixInv[3] = 0.0;
  normMatrixInv[6] = 0.0;
  normMatrixInv[1] = 0.0;
  normMatrixInv[4] = 1.0 / s;
  normMatrixInv[7] = 0.0;
  normMatrixInv[2] = cent[0];
  normMatrixInv[5] = cent[1];
  normMatrixInv[8] = 1.0;
}

/* End of code generation (normalizeControlPoints.c) */

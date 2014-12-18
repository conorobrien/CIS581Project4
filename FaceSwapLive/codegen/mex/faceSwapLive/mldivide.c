/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "mldivide.h"
#include "inv.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_warning.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo ue_emlrtRSI = { 1, "xscal",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xscal.p"
};

static emlrtRSInfo ve_emlrtRSI = { 1, "xscal",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/xscal.p"
};

static emlrtRSInfo ff_emlrtRSI = { 29, "eml_qrsolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_qrsolve.m" };

static emlrtRSInfo gf_emlrtRSI = { 38, "eml_qrsolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_qrsolve.m" };

static emlrtRSInfo hf_emlrtRSI = { 37, "eml_qrsolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_qrsolve.m" };

static emlrtRSInfo if_emlrtRSI = { 8, "eml_xgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/eml_xgeqp3.m"
};

static emlrtRSInfo jf_emlrtRSI = { 8, "eml_lapack_xgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgeqp3.m"
};

static emlrtRSInfo kf_emlrtRSI = { 100, "eml_matlab_zgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgeqp3.m"
};

static emlrtRSInfo lf_emlrtRSI = { 93, "eml_matlab_zgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgeqp3.m"
};

static emlrtRSInfo mf_emlrtRSI = { 74, "eml_matlab_zgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgeqp3.m"
};

static emlrtRSInfo nf_emlrtRSI = { 64, "eml_matlab_zgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgeqp3.m"
};

static emlrtRSInfo of_emlrtRSI = { 47, "eml_matlab_zgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgeqp3.m"
};

static emlrtRSInfo pf_emlrtRSI = { 32, "eml_matlab_zgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgeqp3.m"
};

static emlrtRSInfo qf_emlrtRSI = { 25, "eml_matlab_zgeqp3",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zgeqp3.m"
};

static emlrtRSInfo uf_emlrtRSI = { 81, "eml_matlab_zlarfg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarfg.m"
};

static emlrtRSInfo vf_emlrtRSI = { 71, "eml_matlab_zlarfg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarfg.m"
};

static emlrtRSInfo wf_emlrtRSI = { 68, "eml_matlab_zlarfg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarfg.m"
};

static emlrtRSInfo xf_emlrtRSI = { 53, "eml_matlab_zlarfg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarfg.m"
};

static emlrtRSInfo yf_emlrtRSI = { 41, "eml_matlab_zlarfg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarfg.m"
};

static emlrtRSInfo ag_emlrtRSI = { 20, "eml_matlab_zlarfg",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarfg.m"
};

static emlrtRSInfo bg_emlrtRSI = { 28, "eml_xscal",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m"
};

static emlrtRSInfo cg_emlrtRSI = { 50, "eml_matlab_zlarf",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarf.m"
};

static emlrtRSInfo dg_emlrtRSI = { 68, "eml_matlab_zlarf",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarf.m"
};

static emlrtRSInfo eg_emlrtRSI = { 75, "eml_matlab_zlarf",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarf.m"
};

static emlrtRSInfo fg_emlrtRSI = { 103, "eml_matlab_zlarf",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zlarf.m"
};

static emlrtRSInfo gg_emlrtRSI = { 52, "eml_xgemv",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/blas/eml_xgemv.m"
};

static emlrtRSInfo hg_emlrtRSI = { 1, "xgemv",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xgemv.p"
};

static emlrtRSInfo ig_emlrtRSI = { 1, "xgemv",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/xgemv.p"
};

static emlrtRSInfo jg_emlrtRSI = { 41, "eml_xgerc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/blas/eml_xgerc.m"
};

static emlrtRSInfo kg_emlrtRSI = { 1, "xgerc",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xgerc.p"
};

static emlrtRTEInfo nc_emlrtRTEI = { 99, 5, "eml_qrsolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_qrsolve.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 106, 5, "eml_qrsolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_qrsolve.m" };

/* Function Declarations */
static real_T c_eml_xnrm2(const emlrtStack *sp, int32_T n, const real_T x[80],
  int32_T ix0);
static void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T
  iv0, real_T tau, real_T C[80], int32_T ic0, real_T work[8]);
static void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, real_T x[80],
                      int32_T ix0);

/* Function Definitions */
static real_T c_eml_xnrm2(const emlrtStack *sp, int32_T n, const real_T x[80],
  int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  boolean_T b_ix0;
  int32_T k;
  real_T absxk;
  real_T t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qe_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &re_emlrtRSI;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  kend = (ix0 + n) - 1;
  c_st.site = &se_emlrtRSI;
  if (ix0 > kend) {
    b_ix0 = false;
  } else {
    b_ix0 = (kend > 2147483646);
  }

  if (b_ix0) {
    d_st.site = &rb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = ix0; k <= kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T
  iv0, real_T tau, real_T C[80], int32_T ic0, real_T work[8])
{
  int32_T lastv;
  int32_T i;
  int32_T lastc;
  boolean_T exitg2;
  int32_T colbottom;
  boolean_T b_i;
  int32_T exitg1;
  boolean_T b10;
  int32_T iac;
  int32_T ix;
  real_T c;
  int32_T b;
  boolean_T b_iac;
  int32_T ia;
  boolean_T c_i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  if (tau != 0.0) {
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C[i - 2] == 0.0)) {
      lastv--;
      i--;
    }

    st.site = &cg_emlrtRSI;
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      i = ic0 + (lastc - 1) * 10;
      colbottom = (i + lastv) - 1;
      b_st.site = &fg_emlrtRSI;
      if (i > colbottom) {
        b_i = false;
      } else {
        b_i = (colbottom > 2147483646);
      }

      if (b_i) {
        c_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      do {
        exitg1 = 0;
        if (i <= colbottom) {
          if (C[i - 1] != 0.0) {
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    st.site = &dg_emlrtRSI;
    b_st.site = &gg_emlrtRSI;
    c_st.site = &hg_emlrtRSI;
    if (lastc == 0) {
    } else {
      d_st.site = &ig_emlrtRSI;
      if (1 > lastc) {
        b10 = false;
      } else {
        b10 = (lastc > 2147483646);
      }

      if (b10) {
        e_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      for (i = 1; i <= lastc; i++) {
        work[i - 1] = 0.0;
      }

      i = 0;
      colbottom = ic0 + 10 * (lastc - 1);
      for (iac = ic0; iac <= colbottom; iac += 10) {
        ix = iv0;
        c = 0.0;
        b = (iac + lastv) - 1;
        d_st.site = &ig_emlrtRSI;
        if (iac > b) {
          b_iac = false;
        } else {
          b_iac = (b > 2147483646);
        }

        if (b_iac) {
          e_st.site = &rb_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (ia = iac; ia <= b; ia++) {
          c += C[ia - 1] * C[ix - 1];
          ix++;
        }

        work[i] += c;
        i++;
      }
    }

    st.site = &eg_emlrtRSI;
    b_st.site = &jg_emlrtRSI;
    c_st.site = &kg_emlrtRSI;
    d_st.site = &lg_emlrtRSI;
    e_st.site = &mg_emlrtRSI;
    if (-tau == 0.0) {
    } else {
      i = ic0 - 1;
      colbottom = 0;
      f_st.site = &ng_emlrtRSI;
      for (iac = 1; iac <= lastc; iac++) {
        if (work[colbottom] != 0.0) {
          c = work[colbottom] * -tau;
          ix = iv0;
          b = lastv + i;
          f_st.site = &ng_emlrtRSI;
          if (i + 1 > b) {
            c_i = false;
          } else {
            c_i = (b > 2147483646);
          }

          if (c_i) {
            g_st.site = &rb_emlrtRSI;
            check_forloop_overflow_error(&g_st);
          }

          for (ia = i; ia + 1 <= b; ia++) {
            C[ia] += C[ix - 1] * c;
            ix++;
          }
        }

        colbottom++;
        i += 10;
      }
    }
  }
}

static void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, real_T x[80],
                      int32_T ix0)
{
  int32_T b;
  boolean_T b_ix0;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &ue_emlrtRSI;
  b = (ix0 + n) - 1;
  c_st.site = &ve_emlrtRSI;
  if (ix0 > b) {
    b_ix0 = false;
  } else {
    b_ix0 = (b > 2147483646);
  }

  if (b_ix0) {
    d_st.site = &rb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = ix0; k <= b; k++) {
    x[k - 1] *= a;
  }
}

real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const real_T x[80], int32_T
                 ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  boolean_T b_ix0;
  int32_T k;
  real_T absxk;
  real_T t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qe_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &re_emlrtRSI;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  kend = (ix0 + n) - 1;
  c_st.site = &se_emlrtRSI;
  if (ix0 > kend) {
    b_ix0 = false;
  } else {
    b_ix0 = (kend > 2147483646);
  }

  if (b_ix0) {
    d_st.site = &rb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = ix0; k <= kend; k++) {
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

void mldivide(const emlrtStack *sp, const real_T A[80], const real_T B[10],
              real_T Y[8])
{
  real_T b_B[10];
  real_T b_A[80];
  real_T tau[8];
  int8_T jpvt[8];
  real_T work[8];
  int32_T iy;
  real_T vn1[8];
  real_T vn2[8];
  int32_T k;
  int32_T ix;
  real_T tol;
  real_T rankR;
  boolean_T b_k;
  real_T absxk;
  real_T t;
  int32_T i;
  int32_T i_i;
  int32_T pvt;
  boolean_T b8;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv81[2] = { 1, 8 };

  const mxArray *m21;
  char_T cv116[8];
  static const char_T cv117[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  char_T cv118[14];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ef_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  memcpy(&b_B[0], &B[0], 10U * sizeof(real_T));
  b_st.site = &ff_emlrtRSI;
  c_st.site = &if_emlrtRSI;
  d_st.site = &jf_emlrtRSI;
  memcpy(&b_A[0], &A[0], 80U * sizeof(real_T));
  for (iy = 0; iy < 8; iy++) {
    jpvt[iy] = (int8_T)(1 + iy);
    work[iy] = 0.0;
  }

  e_st.site = &qf_emlrtRSI;
  k = 10;
  for (ix = 0; ix < 8; ix++) {
    e_st.site = &pf_emlrtRSI;
    f_st.site = &qe_emlrtRSI;
    g_st.site = &re_emlrtRSI;
    tol = 0.0;
    rankR = 2.2250738585072014E-308;
    h_st.site = &se_emlrtRSI;
    if (k - 9 > k) {
      b_k = false;
    } else {
      b_k = (k > 2147483646);
    }

    if (b_k) {
      i_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }

    for (iy = k - 10; iy + 1 <= k; iy++) {
      absxk = muDoubleScalarAbs(A[iy]);
      if (absxk > rankR) {
        t = rankR / absxk;
        tol = 1.0 + tol * t * t;
        rankR = absxk;
      } else {
        t = absxk / rankR;
        tol += t * t;
      }
    }

    tol = rankR * muDoubleScalarSqrt(tol);
    vn1[ix] = tol;
    vn2[ix] = vn1[ix];
    k += 10;
  }

  for (i = 0; i < 8; i++) {
    i_i = i + i * 10;
    e_st.site = &of_emlrtRSI;
    f_st.site = &rf_emlrtRSI;
    g_st.site = &sf_emlrtRSI;
    iy = 1;
    if (8 - i > 1) {
      ix = i;
      tol = muDoubleScalarAbs(vn1[i]);
      h_st.site = &tf_emlrtRSI;
      for (k = 2; k <= 8 - i; k++) {
        ix++;
        rankR = muDoubleScalarAbs(vn1[ix]);
        if (rankR > tol) {
          iy = k;
          tol = rankR;
        }
      }
    }

    pvt = (i + iy) - 1;
    if (pvt + 1 != i + 1) {
      ix = 10 * pvt;
      iy = 10 * i;
      for (k = 0; k < 10; k++) {
        tol = b_A[ix];
        b_A[ix] = b_A[iy];
        b_A[iy] = tol;
        ix++;
        iy++;
      }

      iy = jpvt[pvt];
      jpvt[pvt] = jpvt[i];
      jpvt[i] = (int8_T)iy;
      vn1[pvt] = vn1[i];
      vn2[pvt] = vn2[i];
    }

    e_st.site = &nf_emlrtRSI;
    rankR = b_A[i_i];
    absxk = 0.0;
    f_st.site = &ag_emlrtRSI;
    tol = c_eml_xnrm2(&f_st, 9 - i, b_A, i_i + 2);
    if (tol != 0.0) {
      tol = muDoubleScalarHypot(b_A[i_i], tol);
      if (b_A[i_i] >= 0.0) {
        tol = -tol;
      }

      if (muDoubleScalarAbs(tol) < 1.0020841800044864E-292) {
        iy = 0;
        do {
          iy++;
          f_st.site = &yf_emlrtRSI;
          eml_xscal(&f_st, 9 - i, 9.9792015476736E+291, b_A, i_i + 2);
          tol *= 9.9792015476736E+291;
          rankR *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(tol) >= 1.0020841800044864E-292));

        f_st.site = &xf_emlrtRSI;
        tol = c_eml_xnrm2(&f_st, 9 - i, b_A, i_i + 2);
        tol = muDoubleScalarHypot(rankR, tol);
        if (rankR >= 0.0) {
          tol = -tol;
        }

        absxk = (tol - rankR) / tol;
        f_st.site = &wf_emlrtRSI;
        eml_xscal(&f_st, 9 - i, 1.0 / (rankR - tol), b_A, i_i + 2);
        f_st.site = &vf_emlrtRSI;
        if (1 > iy) {
          b8 = false;
        } else {
          b8 = (iy > 2147483646);
        }

        if (b8) {
          g_st.site = &rb_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        for (k = 1; k <= iy; k++) {
          tol *= 1.0020841800044864E-292;
        }

        rankR = tol;
      } else {
        absxk = (tol - b_A[i_i]) / tol;
        f_st.site = &uf_emlrtRSI;
        eml_xscal(&f_st, 9 - i, 1.0 / (b_A[i_i] - tol), b_A, i_i + 2);
        rankR = tol;
      }
    }

    tau[i] = absxk;
    b_A[i_i] = rankR;
    if (i + 1 < 8) {
      rankR = b_A[i_i];
      b_A[i_i] = 1.0;
      e_st.site = &mf_emlrtRSI;
      eml_matlab_zlarf(&e_st, 10 - i, 7 - i, i_i + 1, tau[i], b_A, (i + (i + 1) *
        10) + 1, work);
      b_A[i_i] = rankR;
    }

    for (ix = i + 1; ix + 1 < 9; ix++) {
      if (vn1[ix] != 0.0) {
        tol = muDoubleScalarAbs(b_A[i + 10 * ix]) / vn1[ix];
        tol = 1.0 - tol * tol;
        if (tol < 0.0) {
          tol = 0.0;
        }

        rankR = vn1[ix] / vn2[ix];
        rankR = tol * (rankR * rankR);
        if (rankR <= 1.4901161193847656E-8) {
          e_st.site = &lf_emlrtRSI;
          vn1[ix] = eml_xnrm2(&e_st, 9 - i, b_A, (i + 10 * ix) + 2);
          vn2[ix] = vn1[ix];
        } else {
          e_st.site = &kf_emlrtRSI;
          vn1[ix] *= muDoubleScalarSqrt(tol);
        }
      }
    }
  }

  rankR = 0.0;
  tol = 10.0 * muDoubleScalarAbs(b_A[0]) * 2.2204460492503131E-16;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 8)) {
    if (muDoubleScalarAbs(b_A[k + 10 * k]) <= tol) {
      b_st.site = &gf_emlrtRSI;
      y = NULL;
      m21 = emlrtCreateCharArray(2, iv81);
      for (i = 0; i < 8; i++) {
        cv116[i] = cv117[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 8, m21, cv116);
      emlrtAssign(&y, m21);
      b_y = NULL;
      m21 = emlrtCreateDoubleScalar(14.0);
      emlrtAssign(&b_y, m21);
      c_y = NULL;
      m21 = emlrtCreateDoubleScalar(6.0);
      emlrtAssign(&c_y, m21);
      d_y = NULL;
      m21 = emlrtCreateDoubleScalar(tol);
      emlrtAssign(&d_y, m21);
      c_st.site = &kk_emlrtRSI;
      c_emlrt_marshallIn(&c_st, c_sprintf(&c_st, b_sprintf(&c_st, y, b_y, c_y,
        &i_emlrtMCI), d_y, &j_emlrtMCI), "sprintf", cv118);
      b_st.site = &hf_emlrtRSI;
      c_eml_warning(&b_st, rankR, cv118);
      exitg1 = true;
    } else {
      rankR++;
      k++;
    }
  }

  memset(&Y[0], 0, sizeof(real_T) << 3);
  for (ix = 0; ix < 8; ix++) {
    if (tau[ix] != 0.0) {
      tol = b_B[ix];
      for (i = 0; i <= 8 - ix; i++) {
        iy = (ix + i) + 1;
        tol += b_A[iy + 10 * ix] * b_B[iy];
      }

      tol *= tau[ix];
      if (tol != 0.0) {
        b_B[ix] -= tol;
        for (i = 0; i <= 8 - ix; i++) {
          iy = (ix + i) + 1;
          b_B[iy] -= b_A[iy + 10 * ix] * tol;
        }
      }
    }
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, rankR, mxDOUBLE_CLASS, (int32_T)rankR,
    &nc_emlrtRTEI, &st);
  for (i = 0; i < (int32_T)rankR; i++) {
    Y[jpvt[i] - 1] = b_B[i];
  }

  emlrtForLoopVectorCheckR2012b(rankR, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)-(1.0
    + (-1.0 - rankR)), &oc_emlrtRTEI, &st);
  for (ix = 0; ix < (int32_T)-(1.0 + (-1.0 - rankR)); ix++) {
    tol = rankR + -(real_T)ix;
    Y[jpvt[(int32_T)tol - 1] - 1] /= b_A[((int32_T)tol + 10 * ((int32_T)tol - 1))
      - 1];
    for (i = 0; i < (int32_T)(tol - 1.0); i++) {
      Y[jpvt[i] - 1] -= Y[jpvt[(int32_T)tol - 1] - 1] * b_A[i + 10 * ((int32_T)
        tol - 1)];
    }
  }
}

/* End of code generation (mldivide.c) */

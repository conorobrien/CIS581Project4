/*
 * fitgeotrans.c
 *
 * Code generation for function 'fitgeotrans'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "fitgeotrans.h"
#include "eml_error.h"
#include "validateattributes.h"
#include "repmat.h"
#include "det.h"
#include "inv.h"
#include "eml_warning.h"
#include "mldivide.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "normalizeControlPoints.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo cd_emlrtRSI = { 11, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo dd_emlrtRSI = { 30, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo ed_emlrtRSI = { 16, "validateControlPoints",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+geotrans/+internal/validateControlPoints.m"
};

static emlrtRSInfo fd_emlrtRSI = { 18, "validateControlPoints",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+geotrans/+internal/validateControlPoints.m"
};

static emlrtRSInfo id_emlrtRSI = { 85, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo jd_emlrtRSI = { 102, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo kd_emlrtRSI = { 105, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo ld_emlrtRSI = { 112, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo md_emlrtRSI = { 114, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo nd_emlrtRSI = { 117, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtRSInfo xd_emlrtRSI = { 15, "rank",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/matfun/rank.m" };

static emlrtRSInfo yd_emlrtRSI = { 14, "svd",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo ae_emlrtRSI = { 34, "svd",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/matfun/svd.m" };

static emlrtRSInfo be_emlrtRSI = { 19, "eml_xgesvd",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/eml_xgesvd.m"
};

static emlrtRSInfo ce_emlrtRSI = { 9, "eml_lapack_xgesvd",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgesvd.m"
};

static emlrtRSInfo je_emlrtRSI = { 373, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ke_emlrtRSI = { 264, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo me_emlrtRSI = { 110, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo ne_emlrtRSI = { 90, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo pe_emlrtRSI = { 73, "eml_matlab_zsvdc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"
};

static emlrtRSInfo we_emlrtRSI = { 30, "eml_xdotc",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/blas/eml_xdotc.m"
};

static emlrtRSInfo xe_emlrtRSI = { 1, "xdotc",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xdotc.p"
};

static emlrtRSInfo ye_emlrtRSI = { 1, "xdot",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+blas/xdot.p"
};

static emlrtRSInfo af_emlrtRSI = { 1, "xdot",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/xdot.p"
};

static emlrtRSInfo bf_emlrtRSI = { 1, "xdotx",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p"
};

static emlrtRSInfo og_emlrtRSI = { 48, "eml_lusolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_lusolve.m" };

static emlrtRSInfo pg_emlrtRSI = { 235, "eml_lusolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_lusolve.m" };

static emlrtRSInfo qg_emlrtRSI = { 76, "eml_lusolve",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_lusolve.m" };

static emlrtRSInfo rg_emlrtRSI = { 103, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRSInfo sg_emlrtRSI = { 272, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRSInfo tg_emlrtRSI = { 278, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtECInfo q_emlrtECI = { 1, 99, 6, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtECInfo r_emlrtECI = { -1, 99, 55, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtECInfo s_emlrtECI = { -1, 99, 48, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtECInfo t_emlrtECI = { 1, 98, 6, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtECInfo u_emlrtECI = { -1, 98, 55, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

static emlrtECInfo v_emlrtECI = { -1, 98, 48, "fitgeotrans",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/fitgeotrans.m" };

/* Function Declarations */
static void b_eml_xaxpy(int32_T n, real_T a, const real_T x[80], int32_T ix0,
  real_T y[10], int32_T iy0);
static real_T b_eml_xnrm2(const emlrtStack *sp, int32_T n, const real_T x[8],
  int32_T ix0);
static void c_eml_xaxpy(int32_T n, real_T a, const real_T x[10], int32_T ix0,
  real_T y[80], int32_T iy0);
static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[80], int32_T
                      iy0);
static real_T eml_xdotc(const emlrtStack *sp, int32_T n, const real_T x[80],
  int32_T ix0, const real_T y[80], int32_T iy0);
static void eml_xgesvd(const emlrtStack *sp, const real_T A[80], real_T S[8]);
static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);

/* Function Definitions */
static void b_eml_xaxpy(int32_T n, real_T a, const real_T x[80], int32_T ix0,
  real_T y[10], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (a == 0.0) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

static real_T b_eml_xnrm2(const emlrtStack *sp, int32_T n, const real_T x[8],
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

static void c_eml_xaxpy(int32_T n, real_T a, const real_T x[10], int32_T ix0,
  real_T y[80], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (a == 0.0) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}

static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[80], int32_T
                      iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (a == 0.0) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}

static real_T eml_xdotc(const emlrtStack *sp, int32_T n, const real_T x[80],
  int32_T ix0, const real_T y[80], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  boolean_T b7;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &we_emlrtRSI;
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
  b_st.site = &xe_emlrtRSI;
  c_st.site = &ye_emlrtRSI;
  d_st.site = &af_emlrtRSI;
  d = 0.0;
  ix = ix0;
  iy = iy0;
  e_st.site = &bf_emlrtRSI;
  if (1 > n) {
    b7 = false;
  } else {
    b7 = (n > 2147483646);
  }

  if (b7) {
    f_st.site = &rb_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (k = 1; k <= n; k++) {
    d += x[ix - 1] * y[iy - 1];
    ix++;
    iy++;
  }

  return d;
}

static void eml_xgesvd(const emlrtStack *sp, const real_T A[80], real_T S[8])
{
  real_T b_A[80];
  real_T s[8];
  real_T e[8];
  int32_T i;
  real_T work[10];
  int32_T q;
  int32_T qs;
  boolean_T apply_transform;
  real_T ztest0;
  int32_T qjj;
  int32_T m;
  real_T ztest;
  real_T rt;
  int32_T iter;
  real_T snorm;
  boolean_T exitg1;
  int32_T exitg4;
  boolean_T exitg3;
  real_T f;
  real_T varargin_1[5];
  real_T mtmp;
  boolean_T exitg2;
  real_T sqds;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &be_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &ce_emlrtRSI;
  memcpy(&b_A[0], &A[0], 80U * sizeof(real_T));
  for (i = 0; i < 8; i++) {
    s[i] = 0.0;
    e[i] = 0.0;
  }

  memset(&work[0], 0, 10U * sizeof(real_T));
  for (q = 0; q < 8; q++) {
    qs = q + 10 * q;
    apply_transform = false;
    c_st.site = &pe_emlrtRSI;
    ztest0 = eml_xnrm2(&c_st, 10 - q, b_A, qs + 1);
    if (ztest0 > 0.0) {
      apply_transform = true;
      if (b_A[qs] < 0.0) {
        s[q] = -ztest0;
      } else {
        s[q] = ztest0;
      }

      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        ztest0 = 1.0 / s[q];
        i = (qs - q) + 10;
        for (qjj = qs; qjj + 1 <= i; qjj++) {
          b_A[qjj] *= ztest0;
        }
      } else {
        i = (qs - q) + 10;
        for (qjj = qs; qjj + 1 <= i; qjj++) {
          b_A[qjj] /= s[q];
        }
      }

      b_A[qs]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (i = q + 1; i + 1 < 9; i++) {
      qjj = q + 10 * i;
      if (apply_transform) {
        c_st.site = &ne_emlrtRSI;
        ztest0 = eml_xdotc(&c_st, 10 - q, b_A, qs + 1, b_A, qjj + 1);
        eml_xaxpy(10 - q, -(ztest0 / b_A[q + 10 * q]), qs + 1, b_A, qjj + 1);
      }

      e[i] = b_A[qjj];
    }

    if (q + 1 <= 6) {
      c_st.site = &me_emlrtRSI;
      ztest0 = b_eml_xnrm2(&c_st, 7 - q, e, q + 2);
      if (ztest0 == 0.0) {
        e[q] = 0.0;
      } else {
        if (e[q + 1] < 0.0) {
          e[q] = -ztest0;
        } else {
          e[q] = ztest0;
        }

        ztest0 = e[q];
        if (muDoubleScalarAbs(e[q]) >= 1.0020841800044864E-292) {
          ztest0 = 1.0 / e[q];
          for (qjj = q + 1; qjj + 1 < 9; qjj++) {
            e[qjj] *= ztest0;
          }
        } else {
          for (qjj = q + 1; qjj + 1 < 9; qjj++) {
            e[qjj] /= ztest0;
          }
        }

        e[q + 1]++;
        e[q] = -e[q];
        for (i = q + 1; i + 1 < 11; i++) {
          work[i] = 0.0;
        }

        for (i = q + 1; i + 1 < 9; i++) {
          b_eml_xaxpy(9 - q, e[i], b_A, (q + 10 * i) + 2, work, q + 2);
        }

        for (i = q + 1; i + 1 < 9; i++) {
          c_eml_xaxpy(9 - q, -e[i] / e[q + 1], work, q + 2, b_A, (q + 10 * i) +
                      2);
        }
      }
    }
  }

  m = 6;
  e[6] = b_A[76];
  e[7] = 0.0;
  for (q = 0; q < 8; q++) {
    ztest = e[q];
    if (s[q] != 0.0) {
      rt = muDoubleScalarAbs(s[q]);
      ztest0 = s[q] / rt;
      s[q] = rt;
      if (q + 1 < 8) {
        ztest = e[q] / ztest0;
      }
    }

    if ((q + 1 < 8) && (ztest != 0.0)) {
      rt = muDoubleScalarAbs(ztest);
      ztest0 = ztest;
      ztest = rt;
      s[q + 1] *= rt / ztest0;
    }

    e[q] = ztest;
  }

  iter = 0;
  snorm = 0.0;
  for (i = 0; i < 8; i++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[i]),
      muDoubleScalarAbs(e[i])));
  }

  exitg1 = false;
  while ((!exitg1) && (m + 2 > 0)) {
    if (iter >= 75) {
      c_st.site = &ke_emlrtRSI;
      c_eml_error(&c_st);
    } else {
      i = m;
      do {
        exitg4 = 0;
        q = i + 1;
        if (i + 1 == 0) {
          exitg4 = 1;
        } else {
          ztest0 = muDoubleScalarAbs(e[i]);
          if ((ztest0 <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[i]) +
                muDoubleScalarAbs(s[i + 1]))) || (ztest0 <=
               1.0020841800044864E-292) || ((iter > 20) && (ztest0 <=
                2.2204460492503131E-16 * snorm))) {
            e[i] = 0.0;
            exitg4 = 1;
          } else {
            i--;
          }
        }
      } while (exitg4 == 0);

      if (i + 1 == m + 1) {
        i = 4;
      } else {
        qs = m + 2;
        qjj = m + 2;
        exitg3 = false;
        while ((!exitg3) && (qjj >= i + 1)) {
          qs = qjj;
          if (qjj == i + 1) {
            exitg3 = true;
          } else {
            ztest0 = 0.0;
            if (qjj < m + 2) {
              ztest0 = muDoubleScalarAbs(e[qjj - 1]);
            }

            if (qjj > i + 2) {
              ztest0 += muDoubleScalarAbs(e[qjj - 2]);
            }

            ztest = muDoubleScalarAbs(s[qjj - 1]);
            if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
                 1.0020841800044864E-292)) {
              s[qjj - 1] = 0.0;
              exitg3 = true;
            } else {
              qjj--;
            }
          }
        }

        if (qs == i + 1) {
          i = 3;
        } else if (qs == m + 2) {
          i = 1;
        } else {
          i = 2;
          q = qs;
        }
      }

      switch (i) {
       case 1:
        f = e[m];
        e[m] = 0.0;
        for (qjj = m; qjj + 1 >= q + 1; qjj--) {
          ztest0 = s[qjj];
          eml_xrotg(&ztest0, &f, &ztest, &rt);
          s[qjj] = ztest0;
          if (qjj + 1 > q + 1) {
            f = -rt * e[qjj - 1];
            e[qjj - 1] *= ztest;
          }
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        while (q + 1 <= m + 2) {
          eml_xrotg(&s[q], &f, &ztest, &rt);
          f = -rt * e[q];
          e[q] *= ztest;
          q++;
        }
        break;

       case 3:
        varargin_1[0] = muDoubleScalarAbs(s[m + 1]);
        varargin_1[1] = muDoubleScalarAbs(s[m]);
        varargin_1[2] = muDoubleScalarAbs(e[m]);
        varargin_1[3] = muDoubleScalarAbs(s[q]);
        varargin_1[4] = muDoubleScalarAbs(e[q]);
        i = 1;
        mtmp = varargin_1[0];
        if (muDoubleScalarIsNaN(varargin_1[0])) {
          qjj = 2;
          exitg2 = false;
          while ((!exitg2) && (qjj < 6)) {
            i = qjj;
            if (!muDoubleScalarIsNaN(varargin_1[qjj - 1])) {
              mtmp = varargin_1[qjj - 1];
              exitg2 = true;
            } else {
              qjj++;
            }
          }
        }

        if (i < 5) {
          while (i + 1 < 6) {
            if (varargin_1[i] > mtmp) {
              mtmp = varargin_1[i];
            }

            i++;
          }
        }

        f = s[m + 1] / mtmp;
        ztest0 = s[m] / mtmp;
        ztest = e[m] / mtmp;
        sqds = s[q] / mtmp;
        rt = ((ztest0 + f) * (ztest0 - f) + ztest * ztest) / 2.0;
        ztest0 = f * ztest;
        ztest0 *= ztest0;
        if ((rt != 0.0) || (ztest0 != 0.0)) {
          ztest = rt * rt + ztest0;
          c_st.site = &je_emlrtRSI;
          c_sqrt(&c_st, &ztest);
          if (rt < 0.0) {
            ztest = -ztest;
          }

          ztest = ztest0 / (rt + ztest);
        } else {
          ztest = 0.0;
        }

        f = (sqds + f) * (sqds - f) + ztest;
        ztest0 = sqds * (e[q] / mtmp);
        for (qjj = q + 1; qjj <= m + 1; qjj++) {
          eml_xrotg(&f, &ztest0, &ztest, &rt);
          if (qjj > q + 1) {
            e[qjj - 2] = f;
          }

          f = ztest * s[qjj - 1] + rt * e[qjj - 1];
          e[qjj - 1] = ztest * e[qjj - 1] - rt * s[qjj - 1];
          ztest0 = rt * s[qjj];
          s[qjj] *= ztest;
          s[qjj - 1] = f;
          eml_xrotg(&s[qjj - 1], &ztest0, &ztest, &rt);
          f = ztest * e[qjj - 1] + rt * s[qjj];
          s[qjj] = -rt * e[qjj - 1] + ztest * s[qjj];
          ztest0 = rt * e[qjj];
          e[qjj] *= ztest;
        }

        e[m] = f;
        iter++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
        }

        i = q + 1;
        while ((q + 1 < 8) && (s[q] < s[i])) {
          rt = s[q];
          s[q] = s[i];
          s[i] = rt;
          q = i;
          i++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  memcpy(&S[0], &s[0], sizeof(real_T) << 3);
}

static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  double * a_t;
  double * b_t;
  double * c_t;
  double * s_t;
  *c = 0.0;
  *s = 0.0;
  a_t = (double *)(a);
  b_t = (double *)(b);
  c_t = (double *)(c);
  s_t = (double *)(s);
  drotg(a_t, b_t, c_t, s_t);
}

void fitgeotrans(const emlrtStack *sp, const real_T fixedPoints_data[], const
                 int32_T fixedPoints_size[2], real_T *tform_Dimensionality,
                 real_T tform_T[9])
{
  boolean_T p;
  int32_T r2;
  int32_T i;
  boolean_T exitg4;
  const mxArray *y;
  static const int32_T iv66[2] = { 1, 43 };

  const mxArray *m19;
  char_T cv87[43];
  static const char_T cv88[43] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'v', 'a',
    'l', 'i', 'd', 'a', 't', 'e', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'P', 'o',
    'i', 'n', 't', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
    'n', 'i', 't', 'e' };

  const mxArray *b_y;
  static const int32_T iv67[2] = { 1, 34 };

  char_T cv89[34];
  static const char_T cv90[34] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'f', 'i', 'x', 'e', 'd', 'P', 'o', 'i', 'n', 't', 's', ' ', 't', 'o', ' ',
    'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  int8_T varargin_2[2];
  boolean_T b_p;
  boolean_T exitg3;
  const mxArray *c_y;
  static const int32_T iv68[2] = { 1, 47 };

  char_T cv91[47];
  static const char_T cv92[47] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'g', 'e',
    'o', 't', 'r', 'a', 'n', 's', ':', 'd', 'i', 'f', 'f', 'e', 'r', 'e', 'n',
    't', 'N', 'u', 'm', 'b', 'e', 'r', 's', 'O', 'f', 'C', 'o', 'n', 't', 'r',
    'o', 'l', 'P', 'o', 'i', 'n', 't', 's' };

  const mxArray *d_y;
  static const int32_T iv69[2] = { 1, 11 };

  char_T cv93[11];
  static const char_T cv94[11] = { 'f', 'i', 'x', 'e', 'd', 'P', 'o', 'i', 'n',
    't', 's' };

  const mxArray *e_y;
  static const int32_T iv70[2] = { 1, 12 };

  char_T cv95[12];
  static const char_T cv96[12] = { 'm', 'o', 'v', 'i', 'n', 'g', 'P', 'o', 'i',
    'n', 't', 's' };

  real_T T[9];
  int32_T xy_size[2];
  real_T xy_data[20];
  real_T x_data[10];
  real_T y_data[10];
  real_T b_y_data[10];
  int32_T r1;
  real_T b_x_data[10];
  real_T c_y_data[10];
  real_T X[80];
  static const real_T dv6[5] = { -0.0072520911700345216, 1.1168220401852607,
    -1.2401075900758414, 1.0171057865972908, -0.88656814553667607 };

  static const real_T dv7[5] = { -0.23387994023360154, -1.095065766675158,
    -1.095065766675158, 1.1712127239605172, 1.2527987496234017 };

  real_T a21;
  real_T U[8];
  real_T absxk;
  int32_T r3;
  const mxArray *f_y;
  static const int32_T iv71[2] = { 1, 42 };

  char_T cv97[42];
  static const char_T cv98[42] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'g', 'e',
    'o', 't', 'r', 'a', 'n', 's', ':', 'r', 'e', 'q', 'u', 'i', 'r', 'e', 'd',
    'N', 'o', 'n', 'C', 'o', 'l', 'l', 'i', 'n', 'e', 'a', 'r', 'P', 'o', 'i',
    'n', 't', 's' };

  const mxArray *g_y;
  const mxArray *h_y;
  static const int32_T iv72[2] = { 1, 10 };

  char_T cv99[10];
  static const char_T cv100[10] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'v',
    'e' };

  real_T Tvec[9];
  static const real_T dv8[10] = { 0.0072520911700345216, -1.1168220401852607,
    1.2401075900758414, -1.0171057865972908, 0.88656814553667607,
    0.23387994023360154, 1.095065766675158, 1.095065766675158,
    -1.1712127239605172, -1.2527987496234017 };

  real_T Tinv[9];
  real_T B[9];
  static const real_T b[9] = { 18.3855015342706, 0.0, 53.86666666666666, 0.0,
    18.3855015342706, 60.7, 0.0, 0.0, 1.0 };

  boolean_T exitg2;
  const mxArray *i_y;
  static const int32_T iv73[2] = { 1, 40 };

  char_T cv101[40];
  static const char_T cv102[40] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'r',
    'o', 'j', 'e', 'c', 't', 'i', 'v', 'e', '2', 'd', '.', 's', 'e', 't', '.',
    'T', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't',
    'e' };

  const mxArray *j_y;
  static const int32_T iv74[2] = { 1, 24 };

  char_T cv103[24];
  static const char_T cv104[24] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'T', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  boolean_T exitg1;
  const mxArray *k_y;
  static const int32_T iv75[2] = { 1, 40 };

  static const char_T cv105[40] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'r',
    'o', 'j', 'e', 'c', 't', 'i', 'v', 'e', '2', 'd', '.', 's', 'e', 't', '.',
    'T', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a',
    'N' };

  const mxArray *l_y;
  static const int32_T iv76[2] = { 1, 25 };

  char_T cv106[25];
  static const char_T cv107[25] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'T', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-', 'N', 'a', 'N',
    '.' };

  const mxArray *m_y;
  static const int32_T iv77[2] = { 1, 44 };

  char_T cv108[44];
  static const char_T cv109[44] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'g', 'e',
    'o', 't', 'r', 'a', 'n', 's', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r',
    'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'a', 't', 'i', 'o', 'n', 'M',
    'a', 't', 'r', 'i', 'x' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cd_emlrtRSI;
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
  b_st.site = &ed_emlrtRSI;
  p = true;
  r2 = fixedPoints_size[0] << 1;
  i = 0;
  exitg4 = false;
  while ((!exitg4) && (i <= r2 - 1)) {
    if ((!muDoubleScalarIsInf(fixedPoints_data[i])) && (!muDoubleScalarIsNaN
         (fixedPoints_data[i]))) {
      i++;
    } else {
      p = false;
      exitg4 = true;
    }
  }

  if (p) {
  } else {
    y = NULL;
    m19 = emlrtCreateCharArray(2, iv66);
    for (i = 0; i < 43; i++) {
      cv87[i] = cv88[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 43, m19, cv87);
    emlrtAssign(&y, m19);
    b_y = NULL;
    m19 = emlrtCreateCharArray(2, iv67);
    for (i = 0; i < 34; i++) {
      cv89[i] = cv90[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 34, m19, cv89);
    emlrtAssign(&b_y, m19);
    c_st.site = &ik_emlrtRSI;
    b_error(&c_st, y, b_y, &t_emlrtMCI);
  }

  for (r2 = 0; r2 < 2; r2++) {
    varargin_2[r2] = (int8_T)fixedPoints_size[r2];
  }

  p = false;
  b_p = true;
  i = 0;
  exitg3 = false;
  while ((!exitg3) && (i < 2)) {
    if (!(5 + -3 * i == varargin_2[i])) {
      b_p = false;
      exitg3 = true;
    } else {
      i++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  b_st.site = &fd_emlrtRSI;
  if (!!p) {
  } else {
    c_y = NULL;
    m19 = emlrtCreateCharArray(2, iv68);
    for (i = 0; i < 47; i++) {
      cv91[i] = cv92[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 47, m19, cv91);
    emlrtAssign(&c_y, m19);
    d_y = NULL;
    m19 = emlrtCreateCharArray(2, iv69);
    for (i = 0; i < 11; i++) {
      cv93[i] = cv94[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 11, m19, cv93);
    emlrtAssign(&d_y, m19);
    e_y = NULL;
    m19 = emlrtCreateCharArray(2, iv70);
    for (i = 0; i < 12; i++) {
      cv95[i] = cv96[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 12, m19, cv95);
    emlrtAssign(&e_y, m19);
    c_st.site = &mj_emlrtRSI;
    error(&c_st, c_message(&c_st, c_y, d_y, e_y, &u_emlrtMCI), &u_emlrtMCI);
  }

  st.site = &dd_emlrtRSI;
  b_st.site = &id_emlrtRSI;
  normalizeControlPoints(&b_st, fixedPoints_data, fixedPoints_size, xy_data,
    xy_size, T);
  i = xy_size[0];
  for (r2 = 0; r2 < i; r2++) {
    x_data[r2] = xy_data[r2];
  }

  i = xy_size[0];
  for (r2 = 0; r2 < i; r2++) {
    y_data[r2] = xy_data[r2 + xy_size[0]];
  }

  emlrtSizeEqCheck1DFastR2012b(5, xy_size[0], &v_emlrtECI, &st);
  emlrtSizeEqCheck1DFastR2012b(5, xy_size[0], &u_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &t_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &t_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &t_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &t_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &t_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(5, xy_size[0], &t_emlrtECI, &st);
  emlrtSizeEqCheck1DFastR2012b(5, xy_size[0], &s_emlrtECI, &st);
  emlrtSizeEqCheck1DFastR2012b(5, xy_size[0], &r_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &q_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &q_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &q_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &q_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(xy_size[0], xy_size[0], &q_emlrtECI, &st);
  emlrtDimSizeEqCheckFastR2012b(5, xy_size[0], &q_emlrtECI, &st);
  r2 = xy_size[0];
  i = xy_size[0];
  for (r1 = 0; r1 < i; r1++) {
    b_y_data[r1] = y_data[r1];
  }

  i = xy_size[0];
  for (r1 = 0; r1 < i; r1++) {
    b_x_data[r1] = x_data[r1];
  }

  i = xy_size[0];
  for (r1 = 0; r1 < i; r1++) {
    c_y_data[r1] = y_data[r1];
  }

  i = xy_size[0];
  for (r1 = 0; r1 < i; r1++) {
    X[r1] = x_data[r1];
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[10 + r1] = b_y_data[r1];
    X[20 + r1] = 1.0;
    X[30 + r1] = 0.0;
    X[40 + r1] = 0.0;
    X[50 + r1] = 0.0;
    X[60 + r1] = dv6[r1] * x_data[r1];
    X[70 + r1] = dv6[r1] * y_data[r1];
  }

  i = xy_size[0];
  for (r1 = 0; r1 < i; r1++) {
    X[r1 + r2] = 0.0;
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[10 + (r1 + r2)] = 0.0;
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[20 + (r1 + r2)] = 0.0;
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[30 + (r1 + r2)] = b_x_data[r1];
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[40 + (r1 + r2)] = c_y_data[r1];
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[50 + (r1 + r2)] = 1.0;
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[60 + (r1 + r2)] = dv7[r1] * x_data[r1];
  }

  for (r1 = 0; r1 < 5; r1++) {
    X[70 + (r1 + r2)] = dv7[r1] * y_data[r1];
  }

  b_st.site = &jd_emlrtRSI;
  a21 = 0.0;
  c_st.site = &xd_emlrtRSI;
  for (i = 0; i < 80; i++) {
    if (!((!muDoubleScalarIsInf(X[i])) && (!muDoubleScalarIsNaN(X[i])))) {
      d_st.site = &yd_emlrtRSI;
      b_eml_error(&d_st);
    }
  }

  d_st.site = &ae_emlrtRSI;
  eml_xgesvd(&d_st, X, U);
  absxk = muDoubleScalarAbs(U[0]);
  if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
    if (absxk <= 2.2250738585072014E-308) {
      absxk = 4.94065645841247E-324;
    } else {
      frexp(absxk, &r3);
      absxk = ldexp(1.0, r3 - 53);
    }
  } else {
    absxk = rtNaN;
  }

  absxk *= 10.0;
  i = 0;
  while ((i < 8) && (U[i] > absxk)) {
    a21++;
    i++;
  }

  b_st.site = &jd_emlrtRSI;
  if (a21 >= 8.0) {
  } else {
    f_y = NULL;
    m19 = emlrtCreateCharArray(2, iv71);
    for (i = 0; i < 42; i++) {
      cv97[i] = cv98[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 42, m19, cv97);
    emlrtAssign(&f_y, m19);
    g_y = NULL;
    m19 = emlrtCreateDoubleScalar(4.0);
    emlrtAssign(&g_y, m19);
    h_y = NULL;
    m19 = emlrtCreateCharArray(2, iv72);
    for (i = 0; i < 10; i++) {
      cv99[i] = cv100[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 10, m19, cv99);
    emlrtAssign(&h_y, m19);
    c_st.site = &pj_emlrtRSI;
    error(&c_st, c_message(&c_st, f_y, g_y, h_y, &w_emlrtMCI), &w_emlrtMCI);
  }

  b_st.site = &kd_emlrtRSI;
  mldivide(&b_st, X, dv8, U);
  memcpy(&Tvec[0], &U[0], sizeof(real_T) << 3);
  Tvec[8] = 1.0;
  memcpy(&Tinv[0], &Tvec[0], 9U * sizeof(real_T));
  for (r2 = 0; r2 < 3; r2++) {
    for (r1 = 0; r1 < 3; r1++) {
      B[r2 + 3 * r1] = 0.0;
      for (i = 0; i < 3; i++) {
        B[r2 + 3 * r1] += Tinv[r2 + 3 * i] * b[i + 3 * r1];
      }
    }
  }

  b_st.site = &ld_emlrtRSI;
  c_st.site = &ef_emlrtRSI;
  d_st.site = &og_emlrtRSI;
  r1 = 0;
  r2 = 1;
  r3 = 2;
  absxk = muDoubleScalarAbs(T[0]);
  a21 = muDoubleScalarAbs(T[1]);
  if (a21 > absxk) {
    absxk = a21;
    r1 = 1;
    r2 = 0;
  }

  if (muDoubleScalarAbs(T[2]) > absxk) {
    r1 = 2;
    r2 = 1;
    r3 = 0;
  }

  T[r2] /= T[r1];
  T[r3] /= T[r1];
  T[3 + r2] -= T[r2] * T[3 + r1];
  T[3 + r3] -= T[r3] * T[3 + r1];
  T[6 + r2] -= T[r2] * T[6 + r1];
  T[6 + r3] -= T[r3] * T[6 + r1];
  if (muDoubleScalarAbs(T[3 + r3]) > muDoubleScalarAbs(T[3 + r2])) {
    i = r2;
    r2 = r3;
    r3 = i;
  }

  T[3 + r3] /= T[3 + r2];
  T[6 + r3] -= T[3 + r3] * T[6 + r2];
  if ((T[r1] == 0.0) || (T[3 + r2] == 0.0) || (T[6 + r3] == 0.0)) {
    e_st.site = &pg_emlrtRSI;
    f_st.site = &qg_emlrtRSI;
    eml_warning(&f_st);
  }

  for (i = 0; i < 3; i++) {
    Tinv[3 * i] = B[r1 + 3 * i];
    Tinv[1 + 3 * i] = B[r2 + 3 * i] - Tinv[3 * i] * T[r2];
    Tinv[2 + 3 * i] = (B[r3 + 3 * i] - Tinv[3 * i] * T[r3]) - Tinv[1 + 3 * i] *
      T[3 + r3];
    Tinv[2 + 3 * i] /= T[6 + r3];
    Tinv[3 * i] -= Tinv[2 + 3 * i] * T[6 + r1];
    Tinv[1 + 3 * i] -= Tinv[2 + 3 * i] * T[6 + r2];
    Tinv[1 + 3 * i] /= T[3 + r2];
    Tinv[3 * i] -= Tinv[1 + 3 * i] * T[3 + r1];
    Tinv[3 * i] /= T[r1];
  }

  b_st.site = &md_emlrtRSI;
  inv(&b_st, Tinv, T);
  absxk = T[8];
  for (r2 = 0; r2 < 9; r2++) {
    T[r2] /= absxk;
  }

  b_st.site = &nd_emlrtRSI;
  c_st.site = &rg_emlrtRSI;
  d_st.site = &sg_emlrtRSI;
  p = true;
  i = 0;
  exitg2 = false;
  while ((!exitg2) && (i < 9)) {
    if ((!muDoubleScalarIsInf(T[i])) && (!muDoubleScalarIsNaN(T[i]))) {
      i++;
    } else {
      p = false;
      exitg2 = true;
    }
  }

  if (p) {
  } else {
    i_y = NULL;
    m19 = emlrtCreateCharArray(2, iv73);
    for (i = 0; i < 40; i++) {
      cv101[i] = cv102[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 40, m19, cv101);
    emlrtAssign(&i_y, m19);
    j_y = NULL;
    m19 = emlrtCreateCharArray(2, iv74);
    for (i = 0; i < 24; i++) {
      cv103[i] = cv104[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 24, m19, cv103);
    emlrtAssign(&j_y, m19);
    e_st.site = &ik_emlrtRSI;
    b_error(&e_st, i_y, j_y, &t_emlrtMCI);
  }

  p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 9)) {
    if (!muDoubleScalarIsNaN(T[i])) {
      i++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
  } else {
    k_y = NULL;
    m19 = emlrtCreateCharArray(2, iv75);
    for (i = 0; i < 40; i++) {
      cv101[i] = cv105[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 40, m19, cv101);
    emlrtAssign(&k_y, m19);
    l_y = NULL;
    m19 = emlrtCreateCharArray(2, iv76);
    for (i = 0; i < 25; i++) {
      cv106[i] = cv107[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 25, m19, cv106);
    emlrtAssign(&l_y, m19);
    e_st.site = &hk_emlrtRSI;
    b_error(&e_st, k_y, l_y, &x_emlrtMCI);
  }

  d_st.site = &tg_emlrtRSI;
  absxk = det(&d_st, T);
  b_p = false;
  p = true;
  if (!(absxk == 0.0)) {
    p = false;
  }

  if (!p) {
  } else {
    b_p = true;
  }

  d_st.site = &tg_emlrtRSI;
  if (!b_p) {
  } else {
    m_y = NULL;
    m19 = emlrtCreateCharArray(2, iv77);
    for (i = 0; i < 44; i++) {
      cv108[i] = cv109[i];
    }

    emlrtInitCharArrayR2013a(&d_st, 44, m19, cv108);
    emlrtAssign(&m_y, m19);
    e_st.site = &mj_emlrtRSI;
    error(&e_st, b_message(&e_st, m_y, &u_emlrtMCI), &u_emlrtMCI);
  }

  memcpy(&tform_T[0], &T[0], 9U * sizeof(real_T));
  *tform_Dimensionality = 2.0;
}

/* End of code generation (fitgeotrans.c) */

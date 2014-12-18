/*
 * pointsDist.c
 *
 * Code generation for function 'pointsDist'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "pointsDist.h"
#include "sqrt.h"
#include "sum.h"
#include "bsxfun.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo lc_emlrtRSI = { 3, "pointsDist",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pointsDist.m"
};

static emlrtRSInfo mc_emlrtRSI = { 4, "pointsDist",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pointsDist.m"
};

static emlrtRSInfo nc_emlrtRSI = { 5, "pointsDist",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pointsDist.m"
};

static emlrtRSInfo oc_emlrtRSI = { 6, "pointsDist",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pointsDist.m"
};

/* Function Definitions */
void pointsDist(const emlrtStack *sp, const real_T points[10], real_T dists[16])
{
  real_T b_points[8];
  int32_T k;
  real_T a[8];
  real_T dist1[4];
  static const int8_T iv60[4] = { 0, 4, 6, 8 };

  static const int8_T iv61[4] = { 1, 5, 7, 9 };

  real_T dist2[4];
  static const int8_T iv62[4] = { 0, 2, 6, 8 };

  static const int8_T iv63[4] = { 1, 3, 7, 9 };

  real_T dist3[4];
  static const int8_T iv64[4] = { 0, 2, 4, 8 };

  static const int8_T iv65[4] = { 1, 3, 4, 9 };

  real_T dist4[4];
  real_T y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /*  Converts it into the k-fan space, right now using Nose and Right Eye */
  for (k = 0; k < 4; k++) {
    b_points[k] = points[2 + (k << 1)];
    b_points[4 + k] = points[3 + (k << 1)];
  }

  bsxfun(b_points, *(real_T (*)[2])&points[0], a);
  for (k = 0; k < 8; k++) {
    b_points[k] = a[k] * a[k];
  }

  sum(b_points, dist1);
  st.site = &lc_emlrtRSI;
  b_sqrt(&st, dist1);
  for (k = 0; k < 4; k++) {
    b_points[k] = points[iv60[k]];
    b_points[4 + k] = points[iv61[k]];
  }

  bsxfun(b_points, *(real_T (*)[2])&points[2], a);
  for (k = 0; k < 8; k++) {
    b_points[k] = a[k] * a[k];
  }

  sum(b_points, dist2);
  st.site = &mc_emlrtRSI;
  b_sqrt(&st, dist2);
  for (k = 0; k < 4; k++) {
    b_points[k] = points[iv62[k]];
    b_points[4 + k] = points[iv63[k]];
  }

  bsxfun(b_points, *(real_T (*)[2])&points[4], a);
  for (k = 0; k < 8; k++) {
    b_points[k] = a[k] * a[k];
  }

  sum(b_points, dist3);
  st.site = &nc_emlrtRSI;
  b_sqrt(&st, dist3);
  for (k = 0; k < 4; k++) {
    b_points[k] = points[iv64[k]];
    b_points[4 + k] = points[iv65[k]];
  }

  bsxfun(b_points, *(real_T (*)[2])&points[6], a);
  for (k = 0; k < 8; k++) {
    b_points[k] = a[k] * a[k];
  }

  sum(b_points, dist4);
  st.site = &oc_emlrtRSI;
  b_sqrt(&st, dist4);
  for (k = 0; k < 4; k++) {
    dists[k] = dist1[k];
  }

  for (k = 0; k < 4; k++) {
    dists[k + 4] = dist2[k];
  }

  for (k = 0; k < 4; k++) {
    dists[k + 8] = dist3[k];
  }

  for (k = 0; k < 4; k++) {
    dists[k + 12] = dist4[k];
  }

  y = dists[0];
  for (k = 0; k < 15; k++) {
    y += dists[k + 1];
  }

  y /= 16.0;
  for (k = 0; k < 16; k++) {
    dists[k] /= y;
  }

  /*  dividing by mean seems to be best way to normalize */
}

/* End of code generation (pointsDist.c) */

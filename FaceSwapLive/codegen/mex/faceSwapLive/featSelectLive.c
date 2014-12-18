/*
 * featSelectLive.c
 *
 * Code generation for function 'featSelectLive'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "featSelectLive.h"
#include "faceSwapLive_emxutil.h"
#include "abs.h"
#include "pointsDist.h"
#include "any.h"
#include "isfinite.h"
#include "round.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "boxCenter.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo wb_emlrtRSI = { 7, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo xb_emlrtRSI = { 9, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo yb_emlrtRSI = { 14, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo ac_emlrtRSI = { 16, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo bc_emlrtRSI = { 21, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo cc_emlrtRSI = { 22, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo dc_emlrtRSI = { 23, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo ec_emlrtRSI = { 24, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo fc_emlrtRSI = { 39, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo gc_emlrtRSI = { 43, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRSInfo vc_emlrtRSI = { 47, "combine_vector_elements",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo wc_emlrtRSI = { 18, "min",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/min.m" };

static emlrtRSInfo xc_emlrtRSI = { 15, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo yc_emlrtRSI = { 96, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo ad_emlrtRSI = { 229, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo bd_emlrtRSI = { 202, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo p_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo q_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo r_emlrtMCI = { 82, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo s_emlrtMCI = { 81, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 1, 25, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 41, 1, "bsxfun",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRTEInfo s_emlrtRTEI = { 65, 1, "bsxfun",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtRTEInfo t_emlrtRTEI = { 30, 1, "combine_vector_elements",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 7, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 9, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 11, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 12, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 14, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 16, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 21, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 22, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 23, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 24, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 27, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 37, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 85, 5, "bsxfun",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/elmat/bsxfun.m" };

static emlrtECInfo e_emlrtECI = { -1, 11, 30, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtECInfo f_emlrtECI = { 1, 11, 13, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtECInfo g_emlrtECI = { -1, 12, 15, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtECInfo h_emlrtECI = { -1, 12, 47, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtECInfo i_emlrtECI = { 1, 12, 14, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtECInfo j_emlrtECI = { 1, 27, 10, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtRTEInfo lc_emlrtRTEI = { 38, 1, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtBCInfo h_emlrtBCI = { -1, -1, 39, 36, "points", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 39, 11, "dists", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 49, 31, "points", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 52, 30, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  1 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 52, 30, "mouthCenter",
  "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 53, 28, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  1 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 53, 28, "mouthBoxes", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtECInfo k_emlrtECI = { -1, 54, 16, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtECInfo l_emlrtECI = { -1, 55, 16, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m"
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 27, 22, "noseCenter", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 27, 22, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  1 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 27, 47, "mouthLeft", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 27, 47, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  1 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 27, 74, "mouthRight", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 27, 74, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 28, 16, "lEyeCenter", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 28, 16, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 28, 42, "rEyeCenter", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 28, 42, "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  1 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 52, 30, "idxMouth", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 53, 28, "idxMouth", "featSelectLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/featSelectLive.m",
  0 };

static emlrtRSInfo sj_emlrtRSI = { 81, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo tj_emlrtRSI = { 38, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo bk_emlrtRSI = { 82, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo ck_emlrtRSI = { 41, "eml_min_or_max",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

/* Function Definitions */
void featSelectLive(const emlrtStack *sp, const emxArray_real_T *noseBoxes,
                    const emxArray_real_T *mouthBoxes, const emxArray_real_T
                    *lEyeBoxes, const emxArray_real_T *rEyeBoxes, real_T
                    bestPoints_data[], int32_T bestPoints_size[2])
{
  emxArray_real_T *noseCenter;
  emxArray_real_T *mouthCenter;
  emxArray_real_T *av;
  int32_T cdiff;
  int32_T k;
  emxArray_real_T *b_mouthBoxes;
  int32_T bk;
  int32_T ndbl;
  emxArray_real_T *r4;
  emxArray_real_T *c_mouthBoxes;
  emxArray_real_T *mouthLeft;
  emxArray_real_T *d_mouthBoxes;
  emxArray_real_T *e_mouthBoxes;
  emxArray_real_T *r5;
  emxArray_real_T *mouthRight;
  emxArray_real_T *lEyeCenter;
  emxArray_real_T *rEyeCenter;
  real_T lTotal;
  int32_T apnd;
  int32_T absb;
  emxArray_real_T *r6;
  emxArray_real_T *idxNose;
  emxArray_real_T *idxMouth;
  emxArray_real_T *idxLEye;
  emxArray_real_T *idxREye;
  real_T y;
  emxArray_real_T *points;
  int32_T ak;
  emxArray_real_T *dists;
  real_T b_points[10];
  real_T dv3[16];
  emxArray_real_T *c;
  int32_T na1;
  boolean_T overflow;
  emxArray_real_T *cv;
  boolean_T b0;
  static const real_T dv4[16] = { 0.66828929698204464, 0.709729404078068,
    0.82063341203289908, 0.81516197675825952, 0.66828929698204464,
    1.1123310007811715, 1.0705838620705388, 1.4566111362643215,
    0.709729404078068, 1.1123310007811715, 1.5095486465647872,
    1.1205444317741478, 0.82063341203289908, 1.0705838620705388,
    1.4357539616390549, 0.8992458951099872 };

  real_T sz[2];
  const mxArray *b_y;
  static const int32_T iv46[2] = { 1, 36 };

  const mxArray *m15;
  char_T cv65[36];
  static const char_T cv66[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv47[2] = { 1, 39 };

  char_T cv67[39];
  static const char_T cv68[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg1;
  real_T dv5[10];
  int32_T iv48[2];
  real_T b_mouthRight[2];
  boolean_T bv0[2];
  boolean_T bv1[2];
  boolean_T bv2[2];
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
  f_st.prev = &c_st;
  f_st.tls = c_st.tls;
  g_st.prev = &e_st;
  g_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &noseCenter, 2, &u_emlrtRTEI, true);
  emxInit_real_T(sp, &mouthCenter, 2, &v_emlrtRTEI, true);
  c_emxInit_real_T(sp, &av, 1, &s_emlrtRTEI, true);

  /*  possible improvements: */
  /*  - use left/right of mouth rather then mouth center */
  /*  - needs speedup, the pointsDist function gets really slow as # features increases */
  /*  Pull out center of boxes and count each feature */
  st.site = &wb_emlrtRSI;
  boxCenter(&st, noseBoxes, noseCenter);
  st.site = &xb_emlrtRSI;
  boxCenter(&st, mouthBoxes, mouthCenter);
  cdiff = mouthBoxes->size[0];
  k = av->size[0];
  av->size[0] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)av, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  for (k = 0; k < cdiff; k++) {
    av->data[k] = mouthBoxes->data[k + mouthBoxes->size[0] * 3] / 2.0;
  }

  c_emxInit_real_T(sp, &b_mouthBoxes, 1, &q_emlrtRTEI, true);
  k = mouthBoxes->size[0];
  bk = av->size[0];
  emlrtSizeEqCheck1DFastR2012b(k, bk, &e_emlrtECI, sp);
  cdiff = mouthBoxes->size[0];
  ndbl = mouthBoxes->size[0];
  k = b_mouthBoxes->size[0];
  b_mouthBoxes->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)b_mouthBoxes, k, (int32_T)sizeof
                    (real_T), &q_emlrtRTEI);
  for (k = 0; k < ndbl; k++) {
    b_mouthBoxes->data[k] = mouthBoxes->data[k + mouthBoxes->size[0]] + av->
      data[k];
  }

  emxInit_real_T(sp, &r4, 2, &q_emlrtRTEI, true);
  k = r4->size[0] * r4->size[1];
  r4->size[0] = cdiff;
  r4->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r4, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  for (k = 0; k < cdiff; k++) {
    r4->data[k] = b_mouthBoxes->data[k];
  }

  emxFree_real_T(&b_mouthBoxes);
  c_emxInit_real_T(sp, &c_mouthBoxes, 1, &q_emlrtRTEI, true);
  k = mouthBoxes->size[0];
  bk = r4->size[0];
  emlrtDimSizeEqCheckFastR2012b(k, bk, &f_emlrtECI, sp);
  cdiff = mouthBoxes->size[0];
  ndbl = mouthBoxes->size[0];
  k = c_mouthBoxes->size[0];
  c_mouthBoxes->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)c_mouthBoxes, k, (int32_T)sizeof
                    (real_T), &q_emlrtRTEI);
  for (k = 0; k < ndbl; k++) {
    c_mouthBoxes->data[k] = mouthBoxes->data[k];
  }

  emxInit_real_T(sp, &mouthLeft, 2, &w_emlrtRTEI, true);
  k = mouthLeft->size[0] * mouthLeft->size[1];
  mouthLeft->size[0] = cdiff;
  mouthLeft->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)mouthLeft, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  for (k = 0; k < cdiff; k++) {
    mouthLeft->data[k] = c_mouthBoxes->data[k];
  }

  emxFree_real_T(&c_mouthBoxes);
  cdiff = r4->size[0];
  for (k = 0; k < cdiff; k++) {
    mouthLeft->data[k + mouthLeft->size[0]] = r4->data[k];
  }

  k = mouthBoxes->size[0];
  bk = mouthBoxes->size[0];
  emlrtSizeEqCheck1DFastR2012b(k, bk, &g_emlrtECI, sp);
  cdiff = mouthBoxes->size[0];
  k = av->size[0];
  av->size[0] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)av, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  for (k = 0; k < cdiff; k++) {
    av->data[k] = mouthBoxes->data[k + mouthBoxes->size[0] * 3] / 2.0;
  }

  c_emxInit_real_T(sp, &d_mouthBoxes, 1, &q_emlrtRTEI, true);
  k = mouthBoxes->size[0];
  bk = av->size[0];
  emlrtSizeEqCheck1DFastR2012b(k, bk, &h_emlrtECI, sp);
  cdiff = mouthBoxes->size[0];
  ndbl = mouthBoxes->size[0];
  k = d_mouthBoxes->size[0];
  d_mouthBoxes->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)d_mouthBoxes, k, (int32_T)sizeof
                    (real_T), &q_emlrtRTEI);
  for (k = 0; k < ndbl; k++) {
    d_mouthBoxes->data[k] = mouthBoxes->data[k] + mouthBoxes->data[k +
      (mouthBoxes->size[0] << 1)];
  }

  k = r4->size[0] * r4->size[1];
  r4->size[0] = cdiff;
  r4->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r4, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  for (k = 0; k < cdiff; k++) {
    r4->data[k] = d_mouthBoxes->data[k];
  }

  emxFree_real_T(&d_mouthBoxes);
  c_emxInit_real_T(sp, &e_mouthBoxes, 1, &q_emlrtRTEI, true);
  cdiff = mouthBoxes->size[0];
  ndbl = mouthBoxes->size[0];
  k = e_mouthBoxes->size[0];
  e_mouthBoxes->size[0] = ndbl;
  emxEnsureCapacity(sp, (emxArray__common *)e_mouthBoxes, k, (int32_T)sizeof
                    (real_T), &q_emlrtRTEI);
  for (k = 0; k < ndbl; k++) {
    e_mouthBoxes->data[k] = mouthBoxes->data[k + mouthBoxes->size[0]] + av->
      data[k];
  }

  emxInit_real_T(sp, &r5, 2, &q_emlrtRTEI, true);
  k = r5->size[0] * r5->size[1];
  r5->size[0] = cdiff;
  r5->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r5, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  for (k = 0; k < cdiff; k++) {
    r5->data[k] = e_mouthBoxes->data[k];
  }

  emxFree_real_T(&e_mouthBoxes);
  emxInit_real_T(sp, &mouthRight, 2, &x_emlrtRTEI, true);
  k = r4->size[0];
  bk = r5->size[0];
  emlrtDimSizeEqCheckFastR2012b(k, bk, &i_emlrtECI, sp);
  k = mouthRight->size[0] * mouthRight->size[1];
  mouthRight->size[0] = r4->size[0];
  mouthRight->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)mouthRight, k, (int32_T)sizeof
                    (real_T), &q_emlrtRTEI);
  cdiff = r4->size[0];
  for (k = 0; k < cdiff; k++) {
    mouthRight->data[k] = r4->data[k];
  }

  emxFree_real_T(&r4);
  cdiff = r5->size[0];
  for (k = 0; k < cdiff; k++) {
    mouthRight->data[k + mouthRight->size[0]] = r5->data[k];
  }

  emxFree_real_T(&r5);
  emxInit_real_T(sp, &lEyeCenter, 2, &y_emlrtRTEI, true);
  emxInit_real_T(sp, &rEyeCenter, 2, &ab_emlrtRTEI, true);

  /*  numMouth = size(mouthLeft,1); */
  st.site = &yb_emlrtRSI;
  boxCenter(&st, lEyeBoxes, lEyeCenter);
  st.site = &ac_emlrtRSI;
  boxCenter(&st, rEyeBoxes, rEyeCenter);

  /*  Create matrix with permutation of every feature as a row */
  lTotal = (real_T)noseCenter->size[0] * (real_T)mouthCenter->size[0] * (real_T)
    lEyeCenter->size[0] * (real_T)rEyeCenter->size[0];
  st.site = &bc_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (noseCenter->size[0] < 1) {
    cdiff = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)noseCenter->size[0] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - noseCenter->size[0]) + 1;
    absb = noseCenter->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = noseCenter->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    cdiff = ndbl - 1;
  }

  emxInit_real_T(&c_st, &r6, 2, &q_emlrtRTEI, true);
  d_st.site = &pb_emlrtRSI;
  k = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = cdiff + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)r6, k, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (cdiff + 1 > 0) {
    r6->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      r6->data[cdiff] = apnd;
      k = cdiff + (cdiff < 0);
      if (k >= 0) {
        ndbl = (int32_T)((uint32_T)k >> 1);
      } else {
        ndbl = (int32_T)~(~(uint32_T)k >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < ndbl; k++) {
        r6->data[k] = 1.0 + (real_T)k;
        r6->data[cdiff - k] = apnd - k;
      }

      if (ndbl << 1 == cdiff) {
        r6->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        r6->data[ndbl] = 1.0 + (real_T)ndbl;
        r6->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_real_T(&c_st, &idxNose, 2, &bb_emlrtRTEI, true);
  st.site = &bc_emlrtRSI;
  repmat(&st, r6, lTotal / (real_T)noseCenter->size[0], idxNose);
  st.site = &cc_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (mouthCenter->size[0] < 1) {
    cdiff = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)mouthCenter->size[0] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - mouthCenter->size[0]) + 1;
    absb = mouthCenter->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = mouthCenter->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    cdiff = ndbl - 1;
  }

  d_st.site = &pb_emlrtRSI;
  k = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = cdiff + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)r6, k, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (cdiff + 1 > 0) {
    r6->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      r6->data[cdiff] = apnd;
      k = cdiff + (cdiff < 0);
      if (k >= 0) {
        ndbl = (int32_T)((uint32_T)k >> 1);
      } else {
        ndbl = (int32_T)~(~(uint32_T)k >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < ndbl; k++) {
        r6->data[k] = 1.0 + (real_T)k;
        r6->data[cdiff - k] = apnd - k;
      }

      if (ndbl << 1 == cdiff) {
        r6->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        r6->data[ndbl] = 1.0 + (real_T)ndbl;
        r6->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_real_T(&c_st, &idxMouth, 2, &cb_emlrtRTEI, true);
  st.site = &cc_emlrtRSI;
  b_repmat(&st, r6, lTotal / (real_T)noseCenter->size[0] / (real_T)
           mouthCenter->size[0], noseCenter->size[0], idxMouth);
  st.site = &dc_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (lEyeCenter->size[0] < 1) {
    cdiff = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)lEyeCenter->size[0] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - lEyeCenter->size[0]) + 1;
    absb = lEyeCenter->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = lEyeCenter->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    cdiff = ndbl - 1;
  }

  d_st.site = &pb_emlrtRSI;
  k = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = cdiff + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)r6, k, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (cdiff + 1 > 0) {
    r6->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      r6->data[cdiff] = apnd;
      k = cdiff + (cdiff < 0);
      if (k >= 0) {
        ndbl = (int32_T)((uint32_T)k >> 1);
      } else {
        ndbl = (int32_T)~(~(uint32_T)k >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < ndbl; k++) {
        r6->data[k] = 1.0 + (real_T)k;
        r6->data[cdiff - k] = apnd - k;
      }

      if (ndbl << 1 == cdiff) {
        r6->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        r6->data[ndbl] = 1.0 + (real_T)ndbl;
        r6->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_real_T(&c_st, &idxLEye, 2, &db_emlrtRTEI, true);
  st.site = &dc_emlrtRSI;
  b_repmat(&st, r6, lTotal / (real_T)noseCenter->size[0] / (real_T)
           mouthCenter->size[0] / (real_T)lEyeCenter->size[0], (real_T)
           noseCenter->size[0] * (real_T)mouthCenter->size[0], idxLEye);
  st.site = &ec_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (rEyeCenter->size[0] < 1) {
    cdiff = -1;
    apnd = 0;
  } else {
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)rEyeCenter->size[0] - 1.0) +
      0.5);
    apnd = ndbl + 1;
    cdiff = (ndbl - rEyeCenter->size[0]) + 1;
    absb = rEyeCenter->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      ndbl++;
      apnd = rEyeCenter->size[0];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }

    cdiff = ndbl - 1;
  }

  d_st.site = &pb_emlrtRSI;
  k = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = cdiff + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)r6, k, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (cdiff + 1 > 0) {
    r6->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      r6->data[cdiff] = apnd;
      k = cdiff + (cdiff < 0);
      if (k >= 0) {
        ndbl = (int32_T)((uint32_T)k >> 1);
      } else {
        ndbl = (int32_T)~(~(uint32_T)k >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < ndbl; k++) {
        r6->data[k] = 1.0 + (real_T)k;
        r6->data[cdiff - k] = apnd - k;
      }

      if (ndbl << 1 == cdiff) {
        r6->data[ndbl] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        r6->data[ndbl] = 1.0 + (real_T)ndbl;
        r6->data[ndbl + 1] = apnd - ndbl;
      }
    }
  }

  emxInit_real_T(&c_st, &idxREye, 2, &eb_emlrtRTEI, true);
  st.site = &ec_emlrtRSI;
  c_repmat(&st, r6, lTotal / (real_T)rEyeCenter->size[0], idxREye);

  /*  Feature matrix, points = [x1 y1 x2 y2 x3 y3 x4 y4] */
  cdiff = idxNose->size[0] * idxNose->size[1];
  emxFree_real_T(&r6);
  for (k = 0; k < cdiff; k++) {
    bk = noseCenter->size[0];
    y = idxNose->data[k];
    ndbl = (int32_T)emlrtIntegerCheckFastR2012b(y, &g_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, bk, &m_emlrtBCI, sp);
  }

  cdiff = idxMouth->size[0] * idxMouth->size[1];
  for (k = 0; k < cdiff; k++) {
    bk = mouthLeft->size[0];
    y = idxMouth->data[k];
    ndbl = (int32_T)emlrtIntegerCheckFastR2012b(y, &h_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, bk, &n_emlrtBCI, sp);
  }

  ndbl = idxNose->size[0] * idxNose->size[1];
  cdiff = idxMouth->size[0] * idxMouth->size[1];
  emlrtDimSizeEqCheckFastR2012b(ndbl, cdiff, &j_emlrtECI, sp);
  cdiff = idxMouth->size[0] * idxMouth->size[1];
  for (k = 0; k < cdiff; k++) {
    bk = mouthRight->size[0];
    y = idxMouth->data[k];
    ndbl = (int32_T)emlrtIntegerCheckFastR2012b(y, &i_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, bk, &o_emlrtBCI, sp);
  }

  ndbl = idxNose->size[0] * idxNose->size[1];
  cdiff = idxMouth->size[0] * idxMouth->size[1];
  emlrtDimSizeEqCheckFastR2012b(ndbl, cdiff, &j_emlrtECI, sp);
  cdiff = idxLEye->size[0] * idxLEye->size[1];
  for (k = 0; k < cdiff; k++) {
    bk = lEyeCenter->size[0];
    y = idxLEye->data[k];
    ndbl = (int32_T)emlrtIntegerCheckFastR2012b(y, &j_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, bk, &p_emlrtBCI, sp);
  }

  ndbl = idxNose->size[0] * idxNose->size[1];
  absb = idxLEye->size[0] * idxLEye->size[1];
  emlrtDimSizeEqCheckFastR2012b(ndbl, absb, &j_emlrtECI, sp);
  cdiff = idxREye->size[1];
  for (k = 0; k < cdiff; k++) {
    bk = rEyeCenter->size[0];
    y = idxREye->data[k];
    ndbl = (int32_T)emlrtIntegerCheckFastR2012b(y, &k_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, bk, &q_emlrtBCI, sp);
  }

  emxInit_real_T(sp, &points, 2, &fb_emlrtRTEI, true);
  ndbl = idxNose->size[0] * idxNose->size[1];
  apnd = idxREye->size[1];
  emlrtDimSizeEqCheckFastR2012b(ndbl, apnd, &j_emlrtECI, sp);
  ndbl = idxNose->size[0] * idxNose->size[1];
  cdiff = idxMouth->size[0] * idxMouth->size[1];
  ak = idxMouth->size[0] * idxMouth->size[1];
  absb = idxLEye->size[0] * idxLEye->size[1];
  apnd = idxREye->size[1];
  k = points->size[0] * points->size[1];
  points->size[0] = ndbl;
  points->size[1] = 10;
  emxEnsureCapacity(sp, (emxArray__common *)points, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  for (k = 0; k < 2; k++) {
    for (bk = 0; bk < ndbl; bk++) {
      points->data[bk + points->size[0] * k] = noseCenter->data[((int32_T)
        idxNose->data[bk] + noseCenter->size[0] * k) - 1];
    }
  }

  emxFree_real_T(&idxNose);
  emxFree_real_T(&noseCenter);
  for (k = 0; k < 2; k++) {
    for (bk = 0; bk < cdiff; bk++) {
      points->data[bk + points->size[0] * (k + 2)] = mouthLeft->data[((int32_T)
        idxMouth->data[bk] + mouthLeft->size[0] * k) - 1];
    }
  }

  emxFree_real_T(&mouthLeft);
  for (k = 0; k < 2; k++) {
    for (bk = 0; bk < ak; bk++) {
      points->data[bk + points->size[0] * (k + 4)] = mouthRight->data[((int32_T)
        idxMouth->data[bk] + mouthRight->size[0] * k) - 1];
    }
  }

  emxFree_real_T(&mouthRight);
  for (k = 0; k < 2; k++) {
    for (bk = 0; bk < absb; bk++) {
      points->data[bk + points->size[0] * (k + 6)] = lEyeCenter->data[((int32_T)
        idxLEye->data[bk] + lEyeCenter->size[0] * k) - 1];
    }
  }

  emxFree_real_T(&idxLEye);
  emxFree_real_T(&lEyeCenter);
  for (k = 0; k < 2; k++) {
    for (bk = 0; bk < apnd; bk++) {
      points->data[bk + points->size[0] * (k + 8)] = rEyeCenter->data[((int32_T)
        idxREye->data[bk] + rEyeCenter->size[0] * k) - 1];
    }
  }

  emxFree_real_T(&idxREye);
  emxFree_real_T(&rEyeCenter);
  emxInit_real_T(sp, &dists, 2, &gb_emlrtRTEI, true);

  /*  Points of my test face */
  /*  k-Fan distances for base face */
  /*  This is pretty slow, try to vectorize it later */
  k = dists->size[0] * dists->size[1];
  dists->size[0] = (int32_T)lTotal;
  dists->size[1] = 16;
  emxEnsureCapacity(sp, (emxArray__common *)dists, k, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  cdiff = (int32_T)lTotal << 4;
  for (k = 0; k < cdiff; k++) {
    dists->data[k] = 0.0;
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, lTotal, mxDOUBLE_CLASS, (int32_T)
    lTotal, &lc_emlrtRTEI, sp);
  cdiff = 1;
  while (cdiff - 1 <= (int32_T)lTotal - 1) {
    k = points->size[0];
    ndbl = emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, k, &h_emlrtBCI, sp);
    for (k = 0; k < 10; k++) {
      b_points[k] = points->data[(ndbl + points->size[0] * k) - 1];
    }

    st.site = &fc_emlrtRSI;
    pointsDist(&st, b_points, dv3);
    ndbl = dists->size[0];
    emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, ndbl, &i_emlrtBCI, sp);
    for (k = 0; k < 16; k++) {
      dists->data[(cdiff + dists->size[0] * k) - 1] = dv3[k];
    }

    cdiff++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInit_real_T(sp, &c, 2, &q_emlrtRTEI, true);

  /*  Find the closest in k-fan space (using l1 norm now, easier to 1line) */
  st.site = &gc_emlrtRSI;
  na1 = dists->size[0];
  k = c->size[0] * c->size[1];
  c->size[0] = dists->size[0];
  c->size[1] = 16;
  emxEnsureCapacity(&st, (emxArray__common *)c, k, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  apnd = dists->size[0];
  if (apnd == 0) {
  } else {
    ndbl = dists->size[0];
    k = av->size[0];
    av->size[0] = ndbl;
    emxEnsureCapacity(&st, (emxArray__common *)av, k, (int32_T)sizeof(real_T),
                      &s_emlrtRTEI);
    ak = 0;
    bk = 0;
    apnd = dists->size[0];
    cdiff = dists->size[0];
    ndbl = dists->size[0];
    absb = (cdiff << 4) - ndbl;
    b_st.site = &qc_emlrtRSI;
    cdiff = dists->size[0];
    if ((cdiff == 0) || (0 > absb)) {
      overflow = false;
    } else {
      cdiff = dists->size[0];
      overflow = (absb > MAX_int32_T - cdiff);
    }

    if (overflow) {
      c_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    ndbl = 0;
    c_emxInit_real_T(&st, &cv, 1, &hb_emlrtRTEI, true);
    while ((apnd > 0) && (ndbl <= absb)) {
      b_st.site = &rc_emlrtRSI;
      if (1 > na1) {
        b0 = false;
      } else {
        b0 = (na1 > 2147483646);
      }

      if (b0) {
        c_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 0; k + 1 <= na1; k++) {
        av->data[k] = dists->data[ak + k];
      }

      k = cv->size[0];
      cv->size[0] = av->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)cv, k, (int32_T)sizeof(real_T),
                        &q_emlrtRTEI);
      cdiff = av->size[0];
      for (k = 0; k < cdiff; k++) {
        cv->data[k] = av->data[k] - dv4[bk];
      }

      b_st.site = &sc_emlrtRSI;
      if (apnd > 2147483646) {
        c_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 0; k + 1 <= apnd; k++) {
        c->data[ndbl + k] = cv->data[k];
      }

      ak += na1;
      bk++;
      ndbl += apnd;
    }

    emxFree_real_T(&cv);
  }

  b_abs(sp, c, dists);
  st.site = &gc_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  emxFree_real_T(&c);
  for (k = 0; k < 2; k++) {
    sz[k] = dists->size[k];
  }

  k = av->size[0];
  av->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(&c_st, (emxArray__common *)av, k, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  if (dists->size[0] == 0) {
    k = av->size[0];
    av->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)av, k, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    cdiff = (int32_T)sz[0];
    for (k = 0; k < cdiff; k++) {
      av->data[k] = 0.0;
    }
  } else {
    ndbl = dists->size[0];
    cdiff = -1;
    ak = -1;
    d_st.site = &vc_emlrtRSI;
    overflow = (dists->size[0] > 2147483646);
    if (overflow) {
      e_st.site = &rb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (absb = 1; absb <= ndbl; absb++) {
      ak++;
      apnd = ak;
      lTotal = dists->data[ak];
      for (k = 0; k < 15; k++) {
        apnd += ndbl;
        lTotal += dists->data[apnd];
      }

      cdiff++;
      av->data[cdiff] = lTotal;
    }
  }

  emxFree_real_T(&dists);
  st.site = &gc_emlrtRSI;
  b_st.site = &wc_emlrtRSI;
  c_st.site = &xc_emlrtRSI;
  if ((av->size[0] == 1) || (av->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m15 = emlrtCreateCharArray(2, iv46);
    for (cdiff = 0; cdiff < 36; cdiff++) {
      cv65[cdiff] = cv66[cdiff];
    }

    emlrtInitCharArrayR2013a(&c_st, 36, m15, cv65);
    emlrtAssign(&b_y, m15);
    d_st.site = &tj_emlrtRSI;
    f_st.site = &ck_emlrtRSI;
    error(&d_st, b_message(&f_st, b_y, &p_emlrtMCI), &q_emlrtMCI);
  }

  if (av->size[0] > 0) {
  } else {
    c_y = NULL;
    m15 = emlrtCreateCharArray(2, iv47);
    for (cdiff = 0; cdiff < 39; cdiff++) {
      cv67[cdiff] = cv68[cdiff];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m15, cv67);
    emlrtAssign(&c_y, m15);
    d_st.site = &sj_emlrtRSI;
    f_st.site = &bk_emlrtRSI;
    error(&d_st, b_message(&f_st, c_y, &r_emlrtMCI), &s_emlrtMCI);
  }

  d_st.site = &yc_emlrtRSI;
  ak = 1;
  cdiff = av->size[0];
  lTotal = av->data[0];
  absb = 0;
  if (av->size[0] > 1) {
    if (muDoubleScalarIsNaN(av->data[0])) {
      e_st.site = &bd_emlrtRSI;
      overflow = (av->size[0] > 2147483646);
      if (overflow) {
        g_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      apnd = 2;
      exitg1 = false;
      while ((!exitg1) && (apnd <= cdiff)) {
        ak = apnd;
        if (!muDoubleScalarIsNaN(av->data[apnd - 1])) {
          lTotal = av->data[apnd - 1];
          absb = apnd - 1;
          exitg1 = true;
        } else {
          apnd++;
        }
      }
    }

    if (ak < av->size[0]) {
      e_st.site = &ad_emlrtRSI;
      if (ak + 1 > av->size[0]) {
        overflow = false;
      } else {
        overflow = (av->size[0] > 2147483646);
      }

      if (overflow) {
        g_st.site = &rb_emlrtRSI;
        check_forloop_overflow_error(&g_st);
      }

      while (ak + 1 <= cdiff) {
        if (av->data[ak] < lTotal) {
          lTotal = av->data[ak];
          absb = ak;
        }

        ak++;
      }
    }
  }

  emxFree_real_T(&av);
  if (lTotal > 2.5) {
    bestPoints_size[0] = 0;
    bestPoints_size[1] = 0;
  } else {
    /*  Return points, the index in boxes, and the homography (don't use homography anymore though) */
    k = points->size[0];
    ndbl = emlrtDynamicBoundsCheckFastR2012b(absb + 1, 1, k, &j_emlrtBCI, sp);
    for (k = 0; k < 10; k++) {
      dv5[k] = points->data[(ndbl + points->size[0] * k) - 1];
    }

    b_round(dv5);
    bestPoints_size[0] = 1;
    bestPoints_size[1] = 10;
    memcpy(&bestPoints_data[0], &dv5[0], 10U * sizeof(real_T));

    /*  Calculate the left and right corners of the mouth */
    k = idxMouth->size[0] * idxMouth->size[1];
    y = idxMouth->data[emlrtDynamicBoundsCheckFastR2012b(absb + 1, 1, k,
      &r_emlrtBCI, sp) - 1];
    k = mouthCenter->size[0];
    bk = (int32_T)emlrtIntegerCheckFastR2012b(y, &e_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(bk, 1, k, &k_emlrtBCI, sp);
    k = idxMouth->size[0] * idxMouth->size[1];
    y = idxMouth->data[emlrtDynamicBoundsCheckFastR2012b(absb + 1, 1, k,
      &s_emlrtBCI, sp) - 1];
    k = mouthBoxes->size[0];
    bk = (int32_T)emlrtIntegerCheckFastR2012b(y, &f_emlrtDCI, sp);
    emlrtDynamicBoundsCheckFastR2012b(bk, 1, k, &l_emlrtBCI, sp);
    for (k = 0; k < 2; k++) {
      iv48[k] = 1 + k;
    }

    emlrtMatrixMatrixIndexCheckR2012b(bestPoints_size, 2, iv48, 2, &k_emlrtECI,
      sp);
    for (k = 0; k < 2; k++) {
      iv48[k] = 1 + k;
    }

    emlrtMatrixMatrixIndexCheckR2012b(bestPoints_size, 2, iv48, 2, &l_emlrtECI,
      sp);
    lTotal = bestPoints_data[6] - bestPoints_data[8];
    ndbl = (int32_T)idxMouth->data[absb];
    y = mouthBoxes->data[(ndbl + (mouthBoxes->size[0] << 1)) - 1] / 2.0;
    ndbl = (int32_T)idxMouth->data[absb];
    for (k = 0; k < 2; k++) {
      sz[k] = mouthCenter->data[(ndbl + mouthCenter->size[0] * k) - 1] -
        (bestPoints_data[6 + k] - bestPoints_data[8 + k]) / lTotal * y;
    }

    lTotal = bestPoints_data[6] - bestPoints_data[8];
    ndbl = (int32_T)idxMouth->data[absb];
    y = mouthBoxes->data[(ndbl + (mouthBoxes->size[0] << 1)) - 1] / 2.0;
    ndbl = (int32_T)idxMouth->data[absb];
    for (k = 0; k < 2; k++) {
      b_mouthRight[k] = mouthCenter->data[(ndbl + mouthCenter->size[0] * k) - 1]
        + (bestPoints_data[6 + k] - bestPoints_data[8 + k]) / lTotal * y;
    }

    b_isfinite(sz, bv0);
    b_isfinite(b_mouthRight, bv1);
    for (k = 0; k < 2; k++) {
      bv2[k] = (bv0[k] && bv1[k]);
    }

    if (any(bv2)) {
      for (k = 0; k < 2; k++) {
        bestPoints_data[2 + k] = sz[k];
      }

      for (k = 0; k < 2; k++) {
        bestPoints_data[4 + k] = b_mouthRight[k];
      }
    }
  }

  emxFree_real_T(&points);
  emxFree_real_T(&idxMouth);
  emxFree_real_T(&mouthCenter);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (featSelectLive.c) */

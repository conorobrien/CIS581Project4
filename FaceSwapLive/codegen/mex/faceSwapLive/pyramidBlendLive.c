/*
 * pyramidBlendLive.c
 *
 * Code generation for function 'pyramidBlendLive'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "pyramidBlendLive.h"
#include "faceSwapLive_emxutil.h"
#include "imfilter.h"
#include "padarray.h"
#include "round.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo li_emlrtRSI = { 43, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRSInfo mi_emlrtRSI = { 44, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRSInfo ni_emlrtRSI = { 47, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRSInfo oi_emlrtRSI = { 54, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRSInfo gj_emlrtRSI = { 65, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 35, 46, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 43, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 44, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 47, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRTEInfo gc_emlrtRTEI = { 521, 5, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

static emlrtRTEInfo ic_emlrtRTEI = { 58, 25, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtDCInfo m_emlrtDCI = { 47, 32, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo v_emlrtBCI = { 1, 240, 47, 32, "image", "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo n_emlrtDCI = { 47, 50, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo w_emlrtBCI = { 1, 427, 47, 50, "image", "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 48, 44, "gaussTemp",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 48, 53, "gaussTemp",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtECInfo bb_emlrtECI = { -1, 48, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 51, 15, "gaussTemp",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 51, 24, "gaussTemp",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtECInfo cb_emlrtECI = { -1, 51, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtDCInfo o_emlrtDCI = { 53, 15, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo cb_emlrtBCI = { 1, 240, 53, 15, "image", "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 53, 33, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo db_emlrtBCI = { 1, 427, 53, 33, "image", "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 54, 28, "gaussTemp",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 54, 28, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 54, 46, "gaussTemp",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo r_emlrtDCI = { 54, 46, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtECInfo db_emlrtECI = { 3, 53, 9, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtDCInfo s_emlrtDCI = { 52, 15, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo gb_emlrtBCI = { 1, 240, 52, 15, "laplacian",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo t_emlrtDCI = { 52, 33, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo hb_emlrtBCI = { 1, 427, 52, 33, "laplacian",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtECInfo eb_emlrtECI = { -1, 52, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtBCInfo ib_emlrtBCI = { 1, 240, 48, 14, "gaussian",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo u_emlrtDCI = { 48, 14, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo jb_emlrtBCI = { 1, 427, 48, 22, "gaussian",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo v_emlrtDCI = { 48, 22, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtECInfo gb_emlrtECI = { 2, 53, 9, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtDCInfo x_emlrtDCI = { 64, 60, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo gc_emlrtBCI = { 1, 240, 64, 60, "image", "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo y_emlrtDCI = { 64, 75, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo hc_emlrtBCI = { 1, 427, 64, 75, "image", "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo ab_emlrtDCI = { 64, 16, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo ic_emlrtBCI = { 1, 240, 64, 16, "imageRecon",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo bb_emlrtDCI = { 64, 33, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo jc_emlrtBCI = { 1, 427, 64, 33, "imageRecon",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtECInfo hb_emlrtECI = { -1, 64, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtDCInfo cb_emlrtDCI = { 65, 70, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo kc_emlrtBCI = { 1, 240, 65, 70, "imageRecon",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo db_emlrtDCI = { 65, 85, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo lc_emlrtBCI = { 1, 427, 65, 85, "imageRecon",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo eb_emlrtDCI = { 65, 145, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo mc_emlrtBCI = { 1, 240, 65, 145, "laplacian",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo fb_emlrtDCI = { 65, 160, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo nc_emlrtBCI = { 1, 427, 65, 160, "laplacian",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtECInfo ib_emlrtECI = { 3, 65, 50, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtDCInfo gb_emlrtDCI = { 65, 16, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo oc_emlrtBCI = { 1, 240, 65, 16, "imageRecon",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtDCInfo hb_emlrtDCI = { 65, 31, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  1 };

static emlrtBCInfo pc_emlrtBCI = { 1, 427, 65, 31, "imageRecon",
  "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtECInfo jb_emlrtECI = { -1, 65, 5, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

/* Function Definitions */
void b_pyrBlendDown(const emlrtStack *sp, const boolean_T image[102480], const
                    real_T imStartSize[2], real_T gaussian[102480], real_T
                    laplacian[102480], real_T imStopSize[2])
{
  int32_T i39;
  real_T d;
  int32_T n;
  real_T anew;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  emxArray_real_T *mRange;
  int32_T nm1d2;
  int32_T k;
  emxArray_real_T *nRange;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_boolean_T *gaussTemp;
  int32_T i40;
  real_T finalSize[2];
  real_T pad[2];
  emxArray_boolean_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  static const real_T dv13[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  real_T padSize[2];
  boolean_T conn[25];
  real_T connDims[2];
  int32_T i41;
  emxArray_int32_T *r24;
  emxArray_int32_T *r25;
  emxArray_real_T *r26;
  int32_T b_image[2];
  int32_T b_tmp_data[240];
  int32_T c_tmp_data[427];
  emxArray_boolean_T *r27;
  int32_T varargin_1[2];
  emxArray_boolean_T *b_varargin_1;
  real_T b_finalSize[2];
  real_T b_pad[2];
  static const real_T dv14[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  emxArray_boolean_T *c_image;
  emxArray_boolean_T *d_image;
  int32_T iv128[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i39 = 0; i39 < 102480; i39++) {
    gaussian[i39] = 0.0;
    laplacian[i39] = 0.0;
  }

  d = muDoubleScalarRound(imStartSize[0] / 2.0);
  st.site = &li_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(d)) {
    n = 0;
    anew = rtNaN;
    apnd = d;
  } else if (d < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = d;
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((d - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - d;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * d) {
      ndbl++;
      apnd = d;
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&c_st, &mRange, 2, &wb_emlrtRTEI, true);
  d_st.site = &pb_emlrtRSI;
  i39 = mRange->size[0] * mRange->size[1];
  mRange->size[0] = 1;
  mRange->size[1] = n + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)mRange, i39, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (n + 1 > 0) {
    mRange->data[0] = anew;
    if (n + 1 > 1) {
      mRange->data[n] = apnd;
      i39 = n + (n < 0);
      if (i39 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i39 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i39 >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < nm1d2; k++) {
        mRange->data[k] = anew + (real_T)k;
        mRange->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        mRange->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        mRange->data[nm1d2] = anew + (real_T)nm1d2;
        mRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  d = muDoubleScalarRound(imStartSize[1] / 2.0);
  st.site = &mi_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(d)) {
    n = 0;
    anew = rtNaN;
    apnd = d;
  } else if (d < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = d;
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((d - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - d;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * d) {
      ndbl++;
      apnd = d;
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&c_st, &nRange, 2, &xb_emlrtRTEI, true);
  d_st.site = &pb_emlrtRSI;
  i39 = nRange->size[0] * nRange->size[1];
  nRange->size[0] = 1;
  nRange->size[1] = n + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)nRange, i39, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (n + 1 > 0) {
    nRange->data[0] = anew;
    if (n + 1 > 1) {
      nRange->data[n] = apnd;
      i39 = n + (n < 0);
      if (i39 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i39 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i39 >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < nm1d2; k++) {
        nRange->data[k] = anew + (real_T)k;
        nRange->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        nRange->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        nRange->data[nm1d2] = anew + (real_T)nm1d2;
        nRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  for (i39 = 0; i39 < 2; i39++) {
    imStopSize[i39] = imStartSize[i39] / 2.0;
  }

  c_round(imStopSize);
  if (1.0 > imStartSize[0]) {
    loop_ub = 0;
  } else {
    i39 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &m_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i39, 1, 240, &v_emlrtBCI, sp);
  }

  if (1.0 > imStartSize[1]) {
    b_loop_ub = 0;
  } else {
    i39 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &n_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i39, 1, 427, &w_emlrtBCI, sp);
  }

  emxInit_boolean_T(sp, &gaussTemp, 2, &yb_emlrtRTEI, true);
  st.site = &ni_emlrtRSI;
  i39 = gaussTemp->size[0] * gaussTemp->size[1];
  gaussTemp->size[0] = loop_ub;
  gaussTemp->size[1] = b_loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)gaussTemp, i39, (int32_T)sizeof
                    (boolean_T), &ub_emlrtRTEI);
  for (i39 = 0; i39 < b_loop_ub; i39++) {
    for (i40 = 0; i40 < loop_ub; i40++) {
      gaussTemp->data[i40 + gaussTemp->size[0] * i39] = image[i40 + 240 * i39];
    }
  }

  finalSize[0] = loop_ub;
  pad[0] = 2.0;
  finalSize[1] = b_loop_ub;
  pad[1] = 2.0;
  emxInit_boolean_T(&st, &a, 2, &ac_emlrtRTEI, true);
  if ((loop_ub == 0) || (b_loop_ub == 0)) {
  } else {
    b_st.site = &qi_emlrtRSI;
    e_padarray(&b_st, gaussTemp, pad, a);
    b_st.site = &pi_emlrtRSI;
    c_st.site = &yi_emlrtRSI;
    eml_li_find(&c_st, tmp_data, tmp_size);
    k = tmp_size[0];
    for (i39 = 0; i39 < k; i39++) {
      nonzero_h_data[i39] = dv13[tmp_data[i39] - 1];
    }

    c_st.site = &aj_emlrtRSI;
    d_st.site = &bj_emlrtRSI;
    i39 = gaussTemp->size[0] * gaussTemp->size[1];
    gaussTemp->size[0] = loop_ub;
    gaussTemp->size[1] = b_loop_ub;
    emxEnsureCapacity(&d_st, (emxArray__common *)gaussTemp, i39, (int32_T)sizeof
                      (boolean_T), &gc_emlrtRTEI);
    for (i39 = 0; i39 < 2; i39++) {
      padSize[i39] = a->size[i39];
    }

    for (i39 = 0; i39 < 25; i39++) {
      conn[i39] = true;
    }

    for (i39 = 0; i39 < 2; i39++) {
      connDims[i39] = 5.0;
    }

    imfilter_boolean(&a->data[0], &gaussTemp->data[0], 2.0, finalSize, 2.0,
                     padSize, &nonzero_h_data[0], (real_T)tmp_size[0], conn, 2.0,
                     connDims, pad, 2.0, true, true);
  }

  if (1 > gaussTemp->size[0]) {
    i39 = 1;
    i40 = -1;
  } else {
    i39 = 2;
    i40 = gaussTemp->size[0];
    k = gaussTemp->size[0];
    i40 = emlrtDynamicBoundsCheckFastR2012b(k, 1, i40, &x_emlrtBCI, sp) - 1;
  }

  if (1 > gaussTemp->size[1]) {
    k = 1;
    n = -1;
  } else {
    k = 2;
    n = gaussTemp->size[1];
    i41 = gaussTemp->size[1];
    n = emlrtDynamicBoundsCheckFastR2012b(i41, 1, n, &y_emlrtBCI, sp) - 1;
  }

  emxInit_int32_T(sp, &r24, 1, &ub_emlrtRTEI, true);
  i41 = r24->size[0];
  r24->size[0] = mRange->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r24, i41, (int32_T)sizeof(int32_T),
                    &ub_emlrtRTEI);
  loop_ub = mRange->size[1];
  for (i41 = 0; i41 < loop_ub; i41++) {
    d = mRange->data[mRange->size[0] * i41];
    nm1d2 = (int32_T)emlrtIntegerCheckFastR2012b(d, &u_emlrtDCI, sp);
    r24->data[i41] = emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, 240,
      &ib_emlrtBCI, sp) - 1;
  }

  emxInit_int32_T(sp, &r25, 1, &ub_emlrtRTEI, true);
  i41 = r25->size[0];
  r25->size[0] = nRange->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r25, i41, (int32_T)sizeof(int32_T),
                    &ub_emlrtRTEI);
  loop_ub = nRange->size[1];
  for (i41 = 0; i41 < loop_ub; i41++) {
    d = nRange->data[nRange->size[0] * i41];
    nm1d2 = (int32_T)emlrtIntegerCheckFastR2012b(d, &v_emlrtDCI, sp);
    r25->data[i41] = emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, 427,
      &jb_emlrtBCI, sp) - 1;
  }

  emxInit_real_T(sp, &r26, 2, &ub_emlrtRTEI, true);
  nm1d2 = gaussTemp->size[0];
  i41 = r26->size[0] * r26->size[1];
  r26->size[0] = div_s32_floor(sp, i40, i39) + 1;
  r26->size[1] = div_s32_floor(sp, n, k) + 1;
  emxEnsureCapacity(sp, (emxArray__common *)r26, i41, (int32_T)sizeof(real_T),
                    &ub_emlrtRTEI);
  loop_ub = div_s32_floor(sp, n, k);
  for (n = 0; n <= loop_ub; n++) {
    b_loop_ub = div_s32_floor(sp, i40, i39);
    for (i41 = 0; i41 <= b_loop_ub; i41++) {
      r26->data[i41 + r26->size[0] * n] = gaussTemp->data[i39 * i41 + nm1d2 * (k
        * n)];
    }
  }

  b_image[0] = r24->size[0];
  b_image[1] = r25->size[0];
  emlrtSubAssignSizeCheckR2012b(b_image, 2, *(int32_T (*)[2])r26->size, 2,
    &bb_emlrtECI, sp);
  loop_ub = r26->size[1];
  for (i39 = 0; i39 < loop_ub; i39++) {
    b_loop_ub = r26->size[0];
    for (i40 = 0; i40 < b_loop_ub; i40++) {
      gaussian[r24->data[i40] + 240 * r25->data[i39]] = r26->data[i40 +
        r26->size[0] * i39];
    }
  }

  emxFree_real_T(&r26);
  emxFree_int32_T(&r25);
  emxFree_int32_T(&r24);
  i39 = gaussTemp->size[0] * gaussTemp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)gaussTemp, i39, (int32_T)sizeof
                    (boolean_T), &ub_emlrtRTEI);
  loop_ub = gaussTemp->size[1];
  for (i39 = 0; i39 < loop_ub; i39++) {
    b_loop_ub = gaussTemp->size[0];
    for (i40 = 0; i40 < b_loop_ub; i40++) {
      gaussTemp->data[i40 + gaussTemp->size[0] * i39] = false;
    }
  }

  if (1 > gaussTemp->size[0]) {
    i39 = 1;
    i40 = -1;
  } else {
    i39 = 2;
    i40 = gaussTemp->size[0];
    k = gaussTemp->size[0];
    i40 = emlrtDynamicBoundsCheckFastR2012b(k, 1, i40, &ab_emlrtBCI, sp) - 1;
  }

  if (1 > gaussTemp->size[1]) {
    k = 1;
    n = -1;
  } else {
    k = 2;
    n = gaussTemp->size[1];
    i41 = gaussTemp->size[1];
    n = emlrtDynamicBoundsCheckFastR2012b(i41, 1, n, &bb_emlrtBCI, sp) - 1;
  }

  loop_ub = div_s32_floor(sp, i40, i39);
  for (i41 = 0; i41 <= loop_ub; i41++) {
    b_tmp_data[i41] = i39 * i41;
  }

  loop_ub = div_s32_floor(sp, n, k);
  for (i41 = 0; i41 <= loop_ub; i41++) {
    c_tmp_data[i41] = k * i41;
  }

  emxInit_boolean_T(sp, &r27, 2, &ub_emlrtRTEI, true);
  i41 = r27->size[0] * r27->size[1];
  r27->size[0] = mRange->size[1];
  r27->size[1] = nRange->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r27, i41, (int32_T)sizeof(boolean_T),
                    &ub_emlrtRTEI);
  loop_ub = nRange->size[1];
  for (i41 = 0; i41 < loop_ub; i41++) {
    b_loop_ub = mRange->size[1];
    for (nm1d2 = 0; nm1d2 < b_loop_ub; nm1d2++) {
      r27->data[nm1d2 + r27->size[0] * i41] = (gaussian[((int32_T)mRange->
        data[mRange->size[0] * nm1d2] + 240 * ((int32_T)nRange->data
        [nRange->size[0] * i41] - 1)) - 1] != 0.0);
    }
  }

  emxFree_real_T(&nRange);
  emxFree_real_T(&mRange);
  varargin_1[0] = div_s32_floor(sp, i40, i39) + 1;
  varargin_1[1] = div_s32_floor(sp, n, k) + 1;
  emlrtSubAssignSizeCheckR2012b(varargin_1, 2, *(int32_T (*)[2])r27->size, 2,
    &cb_emlrtECI, sp);
  nm1d2 = gaussTemp->size[0];
  loop_ub = r27->size[1];
  for (i39 = 0; i39 < loop_ub; i39++) {
    b_loop_ub = r27->size[0];
    for (i40 = 0; i40 < b_loop_ub; i40++) {
      gaussTemp->data[b_tmp_data[i40] + nm1d2 * c_tmp_data[i39]] = r27->data[i40
        + r27->size[0] * i39];
    }
  }

  emxFree_boolean_T(&r27);
  if (1.0 > imStartSize[0]) {
    loop_ub = -1;
  } else {
    i39 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &o_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i39, 1, 240, &cb_emlrtBCI, sp) -
      1;
  }

  if (1.0 > imStartSize[1]) {
    b_loop_ub = -1;
  } else {
    i39 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &p_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i39, 1, 427, &db_emlrtBCI, sp)
      - 1;
  }

  if (1.0 > imStartSize[0]) {
    k = 0;
  } else {
    i39 = gaussTemp->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i39, &eb_emlrtBCI, sp);
    i39 = gaussTemp->size[0];
    i40 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &q_emlrtDCI, sp);
    k = emlrtDynamicBoundsCheckFastR2012b(i40, 1, i39, &eb_emlrtBCI, sp);
  }

  if (1.0 > imStartSize[1]) {
    n = 0;
  } else {
    i39 = gaussTemp->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i39, &fb_emlrtBCI, sp);
    i39 = gaussTemp->size[1];
    i40 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &r_emlrtDCI, sp);
    n = emlrtDynamicBoundsCheckFastR2012b(i40, 1, i39, &fb_emlrtBCI, sp);
  }

  emxInit_boolean_T(sp, &b_varargin_1, 2, &ub_emlrtRTEI, true);
  st.site = &oi_emlrtRSI;
  nm1d2 = gaussTemp->size[0];
  i39 = b_varargin_1->size[0] * b_varargin_1->size[1];
  b_varargin_1->size[0] = k;
  b_varargin_1->size[1] = n;
  emxEnsureCapacity(&st, (emxArray__common *)b_varargin_1, i39, (int32_T)sizeof
                    (boolean_T), &ub_emlrtRTEI);
  for (i39 = 0; i39 < n; i39++) {
    for (i40 = 0; i40 < k; i40++) {
      b_varargin_1->data[i40 + b_varargin_1->size[0] * i39] = gaussTemp->
        data[i40 + nm1d2 * i39];
    }
  }

  emxFree_boolean_T(&gaussTemp);
  b_finalSize[0] = k;
  b_pad[0] = 2.0;
  b_finalSize[1] = n;
  b_pad[1] = 2.0;
  if ((k == 0) || (n == 0)) {
  } else {
    b_st.site = &qi_emlrtRSI;
    e_padarray(&b_st, b_varargin_1, b_pad, a);
    b_st.site = &pi_emlrtRSI;
    c_st.site = &yi_emlrtRSI;
    eml_li_find(&c_st, tmp_data, tmp_size);
    nm1d2 = tmp_size[0];
    for (i39 = 0; i39 < nm1d2; i39++) {
      nonzero_h_data[i39] = dv14[tmp_data[i39] - 1];
    }

    c_st.site = &aj_emlrtRSI;
    d_st.site = &bj_emlrtRSI;
    i39 = b_varargin_1->size[0] * b_varargin_1->size[1];
    b_varargin_1->size[0] = k;
    b_varargin_1->size[1] = n;
    emxEnsureCapacity(&d_st, (emxArray__common *)b_varargin_1, i39, (int32_T)
                      sizeof(boolean_T), &gc_emlrtRTEI);
    for (i39 = 0; i39 < 2; i39++) {
      padSize[i39] = a->size[i39];
    }

    for (i39 = 0; i39 < 25; i39++) {
      conn[i39] = true;
    }

    for (i39 = 0; i39 < 2; i39++) {
      connDims[i39] = 5.0;
    }

    imfilter_boolean(&a->data[0], &b_varargin_1->data[0], 2.0, b_finalSize, 2.0,
                     padSize, &nonzero_h_data[0], (real_T)tmp_size[0], conn, 2.0,
                     connDims, b_pad, 2.0, true, true);
  }

  emxFree_boolean_T(&a);
  emxInit_boolean_T(&st, &c_image, 2, &ub_emlrtRTEI, true);
  i39 = c_image->size[0] * c_image->size[1];
  c_image->size[0] = loop_ub + 1;
  c_image->size[1] = b_loop_ub + 1;
  emxEnsureCapacity(sp, (emxArray__common *)c_image, i39, (int32_T)sizeof
                    (boolean_T), &ub_emlrtRTEI);
  for (i39 = 0; i39 <= b_loop_ub; i39++) {
    for (i40 = 0; i40 <= loop_ub; i40++) {
      c_image->data[i40 + c_image->size[0] * i39] = image[i40 + 240 * i39];
    }
  }

  for (i39 = 0; i39 < 2; i39++) {
    b_image[i39] = c_image->size[i39];
  }

  emxFree_boolean_T(&c_image);
  for (i39 = 0; i39 < 2; i39++) {
    varargin_1[i39] = b_varargin_1->size[i39];
  }

  emlrtSizeEqCheck2DFastR2012b(b_image, varargin_1, &gb_emlrtECI, sp);
  if (1.0 > imStartSize[0]) {
    k = 0;
  } else {
    i39 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &s_emlrtDCI, sp);
    k = emlrtDynamicBoundsCheckFastR2012b(i39, 1, 240, &gb_emlrtBCI, sp);
  }

  if (1.0 > imStartSize[1]) {
    n = 0;
  } else {
    i39 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &t_emlrtDCI, sp);
    n = emlrtDynamicBoundsCheckFastR2012b(i39, 1, 427, &hb_emlrtBCI, sp);
  }

  for (i39 = 0; i39 < k; i39++) {
    b_tmp_data[i39] = i39;
  }

  for (i39 = 0; i39 < n; i39++) {
    c_tmp_data[i39] = i39;
  }

  emxInit_boolean_T(sp, &d_image, 2, &ub_emlrtRTEI, true);
  iv128[0] = k;
  iv128[1] = n;
  i39 = d_image->size[0] * d_image->size[1];
  d_image->size[0] = loop_ub + 1;
  d_image->size[1] = b_loop_ub + 1;
  emxEnsureCapacity(sp, (emxArray__common *)d_image, i39, (int32_T)sizeof
                    (boolean_T), &ub_emlrtRTEI);
  for (i39 = 0; i39 <= b_loop_ub; i39++) {
    for (i40 = 0; i40 <= loop_ub; i40++) {
      d_image->data[i40 + d_image->size[0] * i39] = image[i40 + 240 * i39];
    }
  }

  for (i39 = 0; i39 < 2; i39++) {
    b_image[i39] = d_image->size[i39];
  }

  emxFree_boolean_T(&d_image);
  emlrtSubAssignSizeCheckR2012b(iv128, 2, b_image, 2, &eb_emlrtECI, sp);
  for (i39 = 0; i39 <= b_loop_ub; i39++) {
    for (i40 = 0; i40 <= loop_ub; i40++) {
      laplacian[b_tmp_data[i40] + 240 * c_tmp_data[i39]] = (real_T)image[i40 +
        240 * i39] - (real_T)b_varargin_1->data[i40 + b_varargin_1->size[0] *
        i39];
    }
  }

  emxFree_boolean_T(&b_varargin_1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void pyrBlendDown(const emlrtStack *sp, const real_T image[307440], const real_T
                  imStartSize[2], real_T gaussian[307440], real_T laplacian
                  [307440], real_T imStopSize[2])
{
  int32_T i21;
  real_T d;
  int32_T n;
  real_T anew;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  emxArray_real_T *mRange;
  int32_T nm1d2;
  int32_T k;
  emxArray_real_T *nRange;
  int32_T loop_ub;
  int32_T b_loop_ub;
  emxArray_real_T *b_image;
  int32_T i22;
  int32_T i23;
  emxArray_real_T *gaussTemp;
  int32_T i24;
  emxArray_int32_T *r20;
  emxArray_int32_T *r21;
  emxArray_real_T *b_gaussTemp;
  int32_T b_gaussian[3];
  int32_T c_gaussTemp[3];
  emxArray_real_T *d_gaussTemp;
  int32_T tmp_data[240];
  int32_T b_tmp_data[427];
  emxArray_real_T *c_gaussian;
  int32_T iv113[3];
  emxArray_real_T *d_gaussian;
  emxArray_real_T *varargin_1;
  real_T finalSize[3];
  real_T pad[3];
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T c_tmp_data[25];
  static const real_T dv11[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.09375, 0.375, 0.5625, 0.375, 0.09375,
    0.0625, 0.25, 0.375, 0.25, 0.0625, 0.015625, 0.0625, 0.09375, 0.0625,
    0.015625 };

  boolean_T conn[25];
  emxArray_real_T *c_image;
  emxArray_real_T *d_image;
  int32_T iv114[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i21 = 0; i21 < 307440; i21++) {
    gaussian[i21] = 0.0;
    laplacian[i21] = 0.0;
  }

  d = muDoubleScalarRound(imStartSize[0] / 2.0);
  st.site = &li_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(d)) {
    n = 0;
    anew = rtNaN;
    apnd = d;
  } else if (d < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = d;
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((d - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - d;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * d) {
      ndbl++;
      apnd = d;
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&c_st, &mRange, 2, &wb_emlrtRTEI, true);
  d_st.site = &pb_emlrtRSI;
  i21 = mRange->size[0] * mRange->size[1];
  mRange->size[0] = 1;
  mRange->size[1] = n + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)mRange, i21, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (n + 1 > 0) {
    mRange->data[0] = anew;
    if (n + 1 > 1) {
      mRange->data[n] = apnd;
      i21 = n + (n < 0);
      if (i21 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i21 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i21 >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < nm1d2; k++) {
        mRange->data[k] = anew + (real_T)k;
        mRange->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        mRange->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        mRange->data[nm1d2] = anew + (real_T)nm1d2;
        mRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  d = muDoubleScalarRound(imStartSize[1] / 2.0);
  st.site = &mi_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(d)) {
    n = 0;
    anew = rtNaN;
    apnd = d;
  } else if (d < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = d;
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((d - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - d;
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * d) {
      ndbl++;
      apnd = d;
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&c_st, &nRange, 2, &xb_emlrtRTEI, true);
  d_st.site = &pb_emlrtRSI;
  i21 = nRange->size[0] * nRange->size[1];
  nRange->size[0] = 1;
  nRange->size[1] = n + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)nRange, i21, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (n + 1 > 0) {
    nRange->data[0] = anew;
    if (n + 1 > 1) {
      nRange->data[n] = apnd;
      i21 = n + (n < 0);
      if (i21 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i21 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i21 >> 1);
      }

      d_st.site = &qb_emlrtRSI;
      for (k = 1; k < nm1d2; k++) {
        nRange->data[k] = anew + (real_T)k;
        nRange->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        nRange->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        nRange->data[nm1d2] = anew + (real_T)nm1d2;
        nRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  for (i21 = 0; i21 < 2; i21++) {
    imStopSize[i21] = imStartSize[i21] / 2.0;
  }

  c_round(imStopSize);
  if (1.0 > imStartSize[0]) {
    loop_ub = 0;
  } else {
    i21 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &m_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i21, 1, 240, &v_emlrtBCI, sp);
  }

  if (1.0 > imStartSize[1]) {
    b_loop_ub = 0;
  } else {
    i21 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &n_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i21, 1, 427, &w_emlrtBCI, sp);
  }

  b_emxInit_real_T(sp, &b_image, 3, &ub_emlrtRTEI, true);
  i21 = b_image->size[0] * b_image->size[1] * b_image->size[2];
  b_image->size[0] = loop_ub;
  b_image->size[1] = b_loop_ub;
  b_image->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b_image, i21, (int32_T)sizeof(real_T),
                    &ub_emlrtRTEI);
  for (i21 = 0; i21 < 3; i21++) {
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      for (i23 = 0; i23 < loop_ub; i23++) {
        b_image->data[(i23 + b_image->size[0] * i22) + b_image->size[0] *
          b_image->size[1] * i21] = image[(i23 + 240 * i22) + 102480 * i21];
      }
    }
  }

  b_emxInit_real_T(sp, &gaussTemp, 3, &yb_emlrtRTEI, true);
  st.site = &ni_emlrtRSI;
  imfilter(&st, b_image, gaussTemp);
  emxFree_real_T(&b_image);
  if (1 > gaussTemp->size[0]) {
    i21 = 1;
    i22 = -1;
  } else {
    i21 = 2;
    i22 = gaussTemp->size[0];
    i23 = gaussTemp->size[0];
    i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &x_emlrtBCI, sp) - 1;
  }

  if (1 > gaussTemp->size[1]) {
    i23 = 1;
    i24 = -1;
  } else {
    i23 = 2;
    i24 = gaussTemp->size[1];
    nm1d2 = gaussTemp->size[1];
    i24 = emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, i24, &y_emlrtBCI, sp) - 1;
  }

  emxInit_int32_T(sp, &r20, 1, &ub_emlrtRTEI, true);
  nm1d2 = r20->size[0];
  r20->size[0] = mRange->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r20, nm1d2, (int32_T)sizeof(int32_T),
                    &ub_emlrtRTEI);
  loop_ub = mRange->size[1];
  for (nm1d2 = 0; nm1d2 < loop_ub; nm1d2++) {
    d = mRange->data[mRange->size[0] * nm1d2];
    k = (int32_T)emlrtIntegerCheckFastR2012b(d, &u_emlrtDCI, sp);
    r20->data[nm1d2] = emlrtDynamicBoundsCheckFastR2012b(k, 1, 240, &ib_emlrtBCI,
      sp) - 1;
  }

  emxInit_int32_T(sp, &r21, 1, &ub_emlrtRTEI, true);
  nm1d2 = r21->size[0];
  r21->size[0] = nRange->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r21, nm1d2, (int32_T)sizeof(int32_T),
                    &ub_emlrtRTEI);
  loop_ub = nRange->size[1];
  for (nm1d2 = 0; nm1d2 < loop_ub; nm1d2++) {
    d = nRange->data[nRange->size[0] * nm1d2];
    k = (int32_T)emlrtIntegerCheckFastR2012b(d, &v_emlrtDCI, sp);
    r21->data[nm1d2] = emlrtDynamicBoundsCheckFastR2012b(k, 1, 427, &jb_emlrtBCI,
      sp) - 1;
  }

  b_emxInit_real_T(sp, &b_gaussTemp, 3, &ub_emlrtRTEI, true);
  b_gaussian[0] = r20->size[0];
  b_gaussian[1] = r21->size[0];
  b_gaussian[2] = 3;
  nm1d2 = b_gaussTemp->size[0] * b_gaussTemp->size[1] * b_gaussTemp->size[2];
  b_gaussTemp->size[0] = div_s32_floor(sp, i22, i21) + 1;
  b_gaussTemp->size[1] = div_s32_floor(sp, i24, i23) + 1;
  b_gaussTemp->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b_gaussTemp, nm1d2, (int32_T)sizeof
                    (real_T), &ub_emlrtRTEI);
  for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
    loop_ub = div_s32_floor(sp, i24, i23);
    for (k = 0; k <= loop_ub; k++) {
      b_loop_ub = div_s32_floor(sp, i22, i21);
      for (n = 0; n <= b_loop_ub; n++) {
        b_gaussTemp->data[(n + b_gaussTemp->size[0] * k) + b_gaussTemp->size[0] *
          b_gaussTemp->size[1] * nm1d2] = gaussTemp->data[(i21 * n +
          gaussTemp->size[0] * (i23 * k)) + gaussTemp->size[0] * gaussTemp->
          size[1] * nm1d2];
      }
    }
  }

  for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
    c_gaussTemp[nm1d2] = b_gaussTemp->size[nm1d2];
  }

  emxFree_real_T(&b_gaussTemp);
  b_emxInit_real_T(sp, &d_gaussTemp, 3, &ub_emlrtRTEI, true);
  emlrtSubAssignSizeCheckR2012b(b_gaussian, 3, c_gaussTemp, 3, &bb_emlrtECI, sp);
  nm1d2 = d_gaussTemp->size[0] * d_gaussTemp->size[1] * d_gaussTemp->size[2];
  d_gaussTemp->size[0] = div_s32_floor(sp, i22, i21) + 1;
  d_gaussTemp->size[1] = div_s32_floor(sp, i24, i23) + 1;
  d_gaussTemp->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)d_gaussTemp, nm1d2, (int32_T)sizeof
                    (real_T), &ub_emlrtRTEI);
  for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
    loop_ub = div_s32_floor(sp, i24, i23);
    for (k = 0; k <= loop_ub; k++) {
      b_loop_ub = div_s32_floor(sp, i22, i21);
      for (n = 0; n <= b_loop_ub; n++) {
        d_gaussTemp->data[(n + d_gaussTemp->size[0] * k) + d_gaussTemp->size[0] *
          d_gaussTemp->size[1] * nm1d2] = gaussTemp->data[(i21 * n +
          gaussTemp->size[0] * (i23 * k)) + gaussTemp->size[0] * gaussTemp->
          size[1] * nm1d2];
      }
    }
  }

  nm1d2 = r20->size[0];
  k = r21->size[0];
  for (i21 = 0; i21 < 3; i21++) {
    for (i22 = 0; i22 < k; i22++) {
      for (i23 = 0; i23 < nm1d2; i23++) {
        gaussian[(r20->data[i23] + 240 * r21->data[i22]) + 102480 * i21] =
          d_gaussTemp->data[(i23 + nm1d2 * i22) + nm1d2 * k * i21];
      }
    }
  }

  emxFree_real_T(&d_gaussTemp);
  emxFree_int32_T(&r21);
  emxFree_int32_T(&r20);
  i21 = gaussTemp->size[0] * gaussTemp->size[1] * gaussTemp->size[2];
  gaussTemp->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)gaussTemp, i21, (int32_T)sizeof
                    (real_T), &ub_emlrtRTEI);
  for (i21 = 0; i21 < 3; i21++) {
    loop_ub = gaussTemp->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = gaussTemp->size[0];
      for (i23 = 0; i23 < b_loop_ub; i23++) {
        gaussTemp->data[(i23 + gaussTemp->size[0] * i22) + gaussTemp->size[0] *
          gaussTemp->size[1] * i21] = 0.0;
      }
    }
  }

  if (1 > gaussTemp->size[0]) {
    i21 = 1;
    i22 = -1;
  } else {
    i21 = 2;
    i22 = gaussTemp->size[0];
    i23 = gaussTemp->size[0];
    i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &ab_emlrtBCI, sp) - 1;
  }

  if (1 > gaussTemp->size[1]) {
    i23 = 1;
    i24 = -1;
  } else {
    i23 = 2;
    i24 = gaussTemp->size[1];
    nm1d2 = gaussTemp->size[1];
    i24 = emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, i24, &bb_emlrtBCI, sp) - 1;
  }

  nm1d2 = div_s32_floor(sp, i22, i21) + 1;
  loop_ub = div_s32_floor(sp, i22, i21);
  for (i22 = 0; i22 <= loop_ub; i22++) {
    tmp_data[i22] = i21 * i22;
  }

  k = div_s32_floor(sp, i24, i23) + 1;
  loop_ub = div_s32_floor(sp, i24, i23);
  for (i21 = 0; i21 <= loop_ub; i21++) {
    b_tmp_data[i21] = i23 * i21;
  }

  b_emxInit_real_T(sp, &c_gaussian, 3, &ub_emlrtRTEI, true);
  iv113[0] = nm1d2;
  iv113[1] = k;
  iv113[2] = 3;
  i21 = c_gaussian->size[0] * c_gaussian->size[1] * c_gaussian->size[2];
  c_gaussian->size[0] = mRange->size[1];
  c_gaussian->size[1] = nRange->size[1];
  c_gaussian->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)c_gaussian, i21, (int32_T)sizeof
                    (real_T), &ub_emlrtRTEI);
  for (i21 = 0; i21 < 3; i21++) {
    loop_ub = nRange->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = mRange->size[1];
      for (i23 = 0; i23 < b_loop_ub; i23++) {
        c_gaussian->data[(i23 + c_gaussian->size[0] * i22) + c_gaussian->size[0]
          * c_gaussian->size[1] * i21] = gaussian[(((int32_T)mRange->data
          [mRange->size[0] * i23] + 240 * ((int32_T)nRange->data[nRange->size[0]
          * i22] - 1)) + 102480 * i21) - 1];
      }
    }
  }

  for (i21 = 0; i21 < 3; i21++) {
    b_gaussian[i21] = c_gaussian->size[i21];
  }

  emxFree_real_T(&c_gaussian);
  b_emxInit_real_T(sp, &d_gaussian, 3, &ub_emlrtRTEI, true);
  emlrtSubAssignSizeCheckR2012b(iv113, 3, b_gaussian, 3, &cb_emlrtECI, sp);
  i21 = d_gaussian->size[0] * d_gaussian->size[1] * d_gaussian->size[2];
  d_gaussian->size[0] = mRange->size[1];
  d_gaussian->size[1] = nRange->size[1];
  d_gaussian->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)d_gaussian, i21, (int32_T)sizeof
                    (real_T), &ub_emlrtRTEI);
  for (i21 = 0; i21 < 3; i21++) {
    loop_ub = nRange->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = mRange->size[1];
      for (i23 = 0; i23 < b_loop_ub; i23++) {
        d_gaussian->data[(i23 + d_gaussian->size[0] * i22) + d_gaussian->size[0]
          * d_gaussian->size[1] * i21] = gaussian[(((int32_T)mRange->data
          [mRange->size[0] * i23] + 240 * ((int32_T)nRange->data[nRange->size[0]
          * i22] - 1)) + 102480 * i21) - 1];
      }
    }
  }

  emxFree_real_T(&nRange);
  emxFree_real_T(&mRange);
  for (i21 = 0; i21 < 3; i21++) {
    for (i22 = 0; i22 < k; i22++) {
      for (i23 = 0; i23 < nm1d2; i23++) {
        gaussTemp->data[(tmp_data[i23] + gaussTemp->size[0] * b_tmp_data[i22]) +
          gaussTemp->size[0] * gaussTemp->size[1] * i21] = d_gaussian->data[(i23
          + nm1d2 * i22) + nm1d2 * k * i21];
      }
    }
  }

  emxFree_real_T(&d_gaussian);
  if (1.0 > imStartSize[0]) {
    loop_ub = -1;
  } else {
    i21 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &o_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i21, 1, 240, &cb_emlrtBCI, sp) -
      1;
  }

  if (1.0 > imStartSize[1]) {
    b_loop_ub = -1;
  } else {
    i21 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &p_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i21, 1, 427, &db_emlrtBCI, sp)
      - 1;
  }

  if (1.0 > imStartSize[0]) {
    k = 0;
  } else {
    i21 = gaussTemp->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i21, &eb_emlrtBCI, sp);
    i21 = gaussTemp->size[0];
    i22 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &q_emlrtDCI, sp);
    k = emlrtDynamicBoundsCheckFastR2012b(i22, 1, i21, &eb_emlrtBCI, sp);
  }

  if (1.0 > imStartSize[1]) {
    n = 0;
  } else {
    i21 = gaussTemp->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i21, &fb_emlrtBCI, sp);
    i21 = gaussTemp->size[1];
    i22 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &r_emlrtDCI, sp);
    n = emlrtDynamicBoundsCheckFastR2012b(i22, 1, i21, &fb_emlrtBCI, sp);
  }

  b_emxInit_real_T(sp, &varargin_1, 3, &ub_emlrtRTEI, true);
  st.site = &oi_emlrtRSI;
  i21 = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
  varargin_1->size[0] = k;
  varargin_1->size[1] = n;
  varargin_1->size[2] = 3;
  emxEnsureCapacity(&st, (emxArray__common *)varargin_1, i21, (int32_T)sizeof
                    (real_T), &ub_emlrtRTEI);
  for (i21 = 0; i21 < 3; i21++) {
    for (i22 = 0; i22 < n; i22++) {
      for (i23 = 0; i23 < k; i23++) {
        varargin_1->data[(i23 + varargin_1->size[0] * i22) + varargin_1->size[0]
          * varargin_1->size[1] * i21] = gaussTemp->data[(i23 + gaussTemp->size
          [0] * i22) + gaussTemp->size[0] * gaussTemp->size[1] * i21];
      }
    }
  }

  emxFree_real_T(&gaussTemp);
  finalSize[0] = k;
  pad[0] = 2.0;
  finalSize[1] = n;
  pad[1] = 2.0;
  finalSize[2] = 3.0;
  pad[2] = 0.0;
  if ((k == 0) || (n == 0)) {
  } else {
    b_emxInit_real_T(&st, &a, 3, &ac_emlrtRTEI, true);
    b_st.site = &qi_emlrtRSI;
    d_padarray(&b_st, varargin_1, pad, a);
    b_st.site = &pi_emlrtRSI;
    c_st.site = &yi_emlrtRSI;
    eml_li_find(&c_st, c_tmp_data, tmp_size);
    nm1d2 = tmp_size[0];
    for (i21 = 0; i21 < nm1d2; i21++) {
      nonzero_h_data[i21] = dv11[c_tmp_data[i21] - 1];
    }

    c_st.site = &aj_emlrtRSI;
    densityFlag = false;
    if ((real_T)tmp_size[0] / 25.0 > 0.05) {
      densityFlag = true;
    }

    tooBig = true;
    i21 = eml_ndims_varsized(*(int32_T (*)[3])a->size);
    for (nm1d2 = 0; nm1d2 < i21; nm1d2++) {
      tooBig = false;
    }

    if (densityFlag && (!tooBig)) {
      densityFlag = true;
    } else {
      densityFlag = false;
    }

    d_st.site = &bj_emlrtRSI;
    i21 = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
    varargin_1->size[0] = k;
    varargin_1->size[1] = n;
    varargin_1->size[2] = 3;
    emxEnsureCapacity(&d_st, (emxArray__common *)varargin_1, i21, (int32_T)
                      sizeof(real_T), &vb_emlrtRTEI);
    if (densityFlag) {
      for (i21 = 0; i21 < 3; i21++) {
        padSize[i21] = a->size[i21];
      }

      for (i21 = 0; i21 < 2; i21++) {
        connDims[i21] = 5.0;
      }

      ippfilter_real64(&a->data[0], &varargin_1->data[0], finalSize, (real_T)
                       eml_ndims_varsized(*(int32_T (*)[3])a->size), padSize, h,
                       connDims, true, false);
    } else {
      for (i21 = 0; i21 < 3; i21++) {
        padSize[i21] = a->size[i21];
      }

      for (i21 = 0; i21 < 25; i21++) {
        conn[i21] = true;
      }

      for (i21 = 0; i21 < 2; i21++) {
        connDims[i21] = 5.0;
      }

      imfilter_real64(&a->data[0], &varargin_1->data[0], 3.0, finalSize, (real_T)
                      eml_ndims_varsized(*(int32_T (*)[3])a->size), padSize,
                      &nonzero_h_data[0], (real_T)tmp_size[0], conn, 2.0,
                      connDims, pad, 3.0, true, true);
    }

    emxFree_real_T(&a);
  }

  b_emxInit_real_T(&st, &c_image, 3, &ub_emlrtRTEI, true);
  i21 = c_image->size[0] * c_image->size[1] * c_image->size[2];
  c_image->size[0] = loop_ub + 1;
  c_image->size[1] = b_loop_ub + 1;
  c_image->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)c_image, i21, (int32_T)sizeof(real_T),
                    &ub_emlrtRTEI);
  for (i21 = 0; i21 < 3; i21++) {
    for (i22 = 0; i22 <= b_loop_ub; i22++) {
      for (i23 = 0; i23 <= loop_ub; i23++) {
        c_image->data[(i23 + c_image->size[0] * i22) + c_image->size[0] *
          c_image->size[1] * i21] = image[(i23 + 240 * i22) + 102480 * i21];
      }
    }
  }

  for (i21 = 0; i21 < 3; i21++) {
    b_gaussian[i21] = c_image->size[i21];
  }

  emxFree_real_T(&c_image);
  for (i21 = 0; i21 < 3; i21++) {
    c_gaussTemp[i21] = varargin_1->size[i21];
  }

  emlrtSizeEqCheckNDR2012b(b_gaussian, c_gaussTemp, &db_emlrtECI, sp);
  if (1.0 > imStartSize[0]) {
    k = 0;
  } else {
    i21 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[0], &s_emlrtDCI, sp);
    k = emlrtDynamicBoundsCheckFastR2012b(i21, 1, 240, &gb_emlrtBCI, sp);
  }

  if (1.0 > imStartSize[1]) {
    n = 0;
  } else {
    i21 = (int32_T)emlrtIntegerCheckFastR2012b(imStartSize[1], &t_emlrtDCI, sp);
    n = emlrtDynamicBoundsCheckFastR2012b(i21, 1, 427, &hb_emlrtBCI, sp);
  }

  for (i21 = 0; i21 < k; i21++) {
    tmp_data[i21] = i21;
  }

  for (i21 = 0; i21 < n; i21++) {
    b_tmp_data[i21] = i21;
  }

  b_emxInit_real_T(sp, &d_image, 3, &ub_emlrtRTEI, true);
  iv114[0] = k;
  iv114[1] = n;
  iv114[2] = 3;
  i21 = d_image->size[0] * d_image->size[1] * d_image->size[2];
  d_image->size[0] = loop_ub + 1;
  d_image->size[1] = b_loop_ub + 1;
  d_image->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)d_image, i21, (int32_T)sizeof(real_T),
                    &ub_emlrtRTEI);
  for (i21 = 0; i21 < 3; i21++) {
    for (i22 = 0; i22 <= b_loop_ub; i22++) {
      for (i23 = 0; i23 <= loop_ub; i23++) {
        d_image->data[(i23 + d_image->size[0] * i22) + d_image->size[0] *
          d_image->size[1] * i21] = image[(i23 + 240 * i22) + 102480 * i21];
      }
    }
  }

  for (i21 = 0; i21 < 3; i21++) {
    b_gaussian[i21] = d_image->size[i21];
  }

  emxFree_real_T(&d_image);
  emlrtSubAssignSizeCheckR2012b(iv114, 3, b_gaussian, 3, &eb_emlrtECI, sp);
  for (i21 = 0; i21 < 3; i21++) {
    for (i22 = 0; i22 <= b_loop_ub; i22++) {
      for (i23 = 0; i23 <= loop_ub; i23++) {
        laplacian[(tmp_data[i23] + 240 * b_tmp_data[i22]) + 102480 * i21] =
          image[(i23 + 240 * i22) + 102480 * i21] - varargin_1->data[(i23 +
          varargin_1->size[0] * i22) + varargin_1->size[0] * varargin_1->size[1]
          * i21];
      }
    }
  }

  emxFree_real_T(&varargin_1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void pyrBlendUp(const emlrtStack *sp, const real_T image[307440], const real_T
                imageSz1[2], const real_T imageSz2[2], const real_T laplacian
                [307440], real_T imageRecon[307440])
{
  int32_T loop_ub;
  int32_T i46;
  int32_T b_loop_ub;
  int32_T i47;
  int32_T i48;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i49;
  int32_T tmp_data[240];
  int32_T b_tmp_data[427];
  emxArray_real_T *b_image;
  int32_T iv132[3];
  int32_T c_image[3];
  emxArray_real_T *b_imageRecon;
  emxArray_real_T *r29;
  emxArray_real_T *b_laplacian;
  emxArray_real_T *c_laplacian;
  int32_T iv133[3];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  memset(&imageRecon[0], 0, 307440U * sizeof(real_T));
  if (1.0 > imageSz1[0]) {
    loop_ub = -1;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz1[0], &x_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 240, &gc_emlrtBCI, sp) -
      1;
  }

  if (1.0 > imageSz1[1]) {
    b_loop_ub = -1;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz1[1], &y_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 427, &hc_emlrtBCI, sp)
      - 1;
  }

  if (1.0 > imageSz2[0]) {
    i46 = 1;
    i47 = -1;
  } else {
    i46 = 2;
    i47 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[0], &ab_emlrtDCI, sp);
    i47 = emlrtDynamicBoundsCheckFastR2012b(i47, 1, 240, &ic_emlrtBCI, sp) - 1;
  }

  if (1.0 > imageSz2[1]) {
    i48 = 1;
    c_loop_ub = -1;
  } else {
    i48 = 2;
    c_loop_ub = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[1], &bb_emlrtDCI,
      sp);
    c_loop_ub = emlrtDynamicBoundsCheckFastR2012b(c_loop_ub, 1, 427,
      &jc_emlrtBCI, sp) - 1;
  }

  d_loop_ub = div_s32_floor(sp, i47, i46);
  for (i49 = 0; i49 <= d_loop_ub; i49++) {
    tmp_data[i49] = i46 * i49;
  }

  d_loop_ub = div_s32_floor(sp, c_loop_ub, i48);
  for (i49 = 0; i49 <= d_loop_ub; i49++) {
    b_tmp_data[i49] = i48 * i49;
  }

  b_emxInit_real_T(sp, &b_image, 3, &ic_emlrtRTEI, true);
  iv132[0] = div_s32_floor(sp, i47, i46) + 1;
  iv132[1] = div_s32_floor(sp, c_loop_ub, i48) + 1;
  iv132[2] = 3;
  i46 = b_image->size[0] * b_image->size[1] * b_image->size[2];
  b_image->size[0] = loop_ub + 1;
  b_image->size[1] = b_loop_ub + 1;
  b_image->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b_image, i46, (int32_T)sizeof(real_T),
                    &ic_emlrtRTEI);
  for (i46 = 0; i46 < 3; i46++) {
    for (i47 = 0; i47 <= b_loop_ub; i47++) {
      for (i48 = 0; i48 <= loop_ub; i48++) {
        b_image->data[(i48 + b_image->size[0] * i47) + b_image->size[0] *
          b_image->size[1] * i46] = image[(i48 + 240 * i47) + 102480 * i46];
      }
    }
  }

  for (i46 = 0; i46 < 3; i46++) {
    c_image[i46] = b_image->size[i46];
  }

  emxFree_real_T(&b_image);
  emlrtSubAssignSizeCheckR2012b(iv132, 3, c_image, 3, &hb_emlrtECI, sp);
  for (i46 = 0; i46 < 3; i46++) {
    for (i47 = 0; i47 <= b_loop_ub; i47++) {
      for (i48 = 0; i48 <= loop_ub; i48++) {
        imageRecon[(tmp_data[i48] + 240 * b_tmp_data[i47]) + 102480 * i46] =
          image[(i48 + 240 * i47) + 102480 * i46];
      }
    }
  }

  if (1.0 > imageSz2[0]) {
    loop_ub = 0;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[0], &cb_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 240, &kc_emlrtBCI, sp);
  }

  if (1.0 > imageSz2[1]) {
    b_loop_ub = 0;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[1], &db_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 427, &lc_emlrtBCI, sp);
  }

  if (1.0 > imageSz2[0]) {
    d_loop_ub = 0;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[0], &eb_emlrtDCI, sp);
    d_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 240, &mc_emlrtBCI, sp);
  }

  if (1.0 > imageSz2[1]) {
    c_loop_ub = 0;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[1], &fb_emlrtDCI, sp);
    c_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 427, &nc_emlrtBCI, sp);
  }

  b_emxInit_real_T(sp, &b_imageRecon, 3, &ic_emlrtRTEI, true);
  i46 = b_imageRecon->size[0] * b_imageRecon->size[1] * b_imageRecon->size[2];
  b_imageRecon->size[0] = loop_ub;
  b_imageRecon->size[1] = b_loop_ub;
  b_imageRecon->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b_imageRecon, i46, (int32_T)sizeof
                    (real_T), &ic_emlrtRTEI);
  for (i46 = 0; i46 < 3; i46++) {
    for (i47 = 0; i47 < b_loop_ub; i47++) {
      for (i48 = 0; i48 < loop_ub; i48++) {
        b_imageRecon->data[(i48 + b_imageRecon->size[0] * i47) +
          b_imageRecon->size[0] * b_imageRecon->size[1] * i46] = imageRecon[(i48
          + 240 * i47) + 102480 * i46];
      }
    }
  }

  b_emxInit_real_T(sp, &r29, 3, &ic_emlrtRTEI, true);
  st.site = &gj_emlrtRSI;
  b_imfilter(&st, b_imageRecon, r29);
  emxFree_real_T(&b_imageRecon);
  for (i46 = 0; i46 < 3; i46++) {
    iv132[i46] = r29->size[i46];
  }

  b_emxInit_real_T(sp, &b_laplacian, 3, &ic_emlrtRTEI, true);
  i46 = b_laplacian->size[0] * b_laplacian->size[1] * b_laplacian->size[2];
  b_laplacian->size[0] = d_loop_ub;
  b_laplacian->size[1] = c_loop_ub;
  b_laplacian->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)b_laplacian, i46, (int32_T)sizeof
                    (real_T), &ic_emlrtRTEI);
  for (i46 = 0; i46 < 3; i46++) {
    for (i47 = 0; i47 < c_loop_ub; i47++) {
      for (i48 = 0; i48 < d_loop_ub; i48++) {
        b_laplacian->data[(i48 + b_laplacian->size[0] * i47) + b_laplacian->
          size[0] * b_laplacian->size[1] * i46] = laplacian[(i48 + 240 * i47) +
          102480 * i46];
      }
    }
  }

  for (i46 = 0; i46 < 3; i46++) {
    c_image[i46] = b_laplacian->size[i46];
  }

  emxFree_real_T(&b_laplacian);
  emlrtSizeEqCheckNDR2012b(iv132, c_image, &ib_emlrtECI, sp);
  if (1.0 > imageSz2[0]) {
    loop_ub = 0;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[0], &gb_emlrtDCI, sp);
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 240, &oc_emlrtBCI, sp);
  }

  if (1.0 > imageSz2[1]) {
    b_loop_ub = 0;
  } else {
    i46 = (int32_T)emlrtIntegerCheckFastR2012b(imageSz2[1], &hb_emlrtDCI, sp);
    b_loop_ub = emlrtDynamicBoundsCheckFastR2012b(i46, 1, 427, &pc_emlrtBCI, sp);
  }

  for (i46 = 0; i46 < loop_ub; i46++) {
    tmp_data[i46] = i46;
  }

  for (i46 = 0; i46 < b_loop_ub; i46++) {
    b_tmp_data[i46] = i46;
  }

  b_emxInit_real_T(sp, &c_laplacian, 3, &ic_emlrtRTEI, true);
  iv133[0] = loop_ub;
  iv133[1] = b_loop_ub;
  iv133[2] = 3;
  i46 = c_laplacian->size[0] * c_laplacian->size[1] * c_laplacian->size[2];
  c_laplacian->size[0] = d_loop_ub;
  c_laplacian->size[1] = c_loop_ub;
  c_laplacian->size[2] = 3;
  emxEnsureCapacity(sp, (emxArray__common *)c_laplacian, i46, (int32_T)sizeof
                    (real_T), &ic_emlrtRTEI);
  for (i46 = 0; i46 < 3; i46++) {
    for (i47 = 0; i47 < c_loop_ub; i47++) {
      for (i48 = 0; i48 < d_loop_ub; i48++) {
        c_laplacian->data[(i48 + c_laplacian->size[0] * i47) + c_laplacian->
          size[0] * c_laplacian->size[1] * i46] = laplacian[(i48 + 240 * i47) +
          102480 * i46];
      }
    }
  }

  for (i46 = 0; i46 < 3; i46++) {
    c_image[i46] = c_laplacian->size[i46];
  }

  emxFree_real_T(&c_laplacian);
  emlrtSubAssignSizeCheckR2012b(iv133, 3, c_image, 3, &jb_emlrtECI, sp);
  for (i46 = 0; i46 < 3; i46++) {
    loop_ub = r29->size[1];
    for (i47 = 0; i47 < loop_ub; i47++) {
      b_loop_ub = r29->size[0];
      for (i48 = 0; i48 < b_loop_ub; i48++) {
        imageRecon[(tmp_data[i48] + 240 * b_tmp_data[i47]) + 102480 * i46] =
          r29->data[(i48 + r29->size[0] * i47) + r29->size[0] * r29->size[1] *
          i46] + laplacian[(i48 + 240 * i47) + 102480 * i46];
      }
    }
  }

  emxFree_real_T(&r29);

  /*  function blurred = blur(im1, im2, mask, levelsLeft) */
  /*          %% if levelsLeft == 1, go down another step */
  /*      if levelsLeft == 1 || numel(im1) < 27 */
  /*          blurred = bsxfun(@times, im1,mask) + bsxfun(@times, im2, ~mask); */
  /*      else */
  /*          %% blur with gaussian, subsample */
  /*          k = [1 4 6 4 1]/16; */
  /*          kernel = conv2(k, k'); */
  /*  %         kernel = fspecial('gaussian',5,1.5); */
  /*          blurmask = imfilter(mask, kernel, 'circular'); */
  /*          blurmask = blurmask(1:2:end, 1:2:end); */
  /*          gaussLarge = imfilter(im1, kernel, 'circular'); */
  /*          gaussian1 = gaussLarge(1:2:end, 1:2:end,:); */
  /*          gaussLarge = imfilter(im2, kernel, 'circular'); */
  /*          gaussian2 = gaussLarge(1:2:end, 1:2:end,:); */
  /*          %% subtract to get laplace */
  /*          gaussRecon = zeros(size(im1)); */
  /*          gaussRecon(1:2:end, 1:2:end,:) = gaussian1; */
  /*          laplacian1 = im1 - imfilter(gaussRecon, 4*kernel, 'circular'); */
  /*          gaussRecon(1:2:end, 1:2:end,:) = gaussian2; */
  /*          laplacian2 = im2 - imfilter(gaussRecon, 4*kernel, 'circular'); */
  /*          maskRecon = zeros(size(mask)); */
  /*          maskRecon(1:2:end, 1:2:end,:) = double(blurmask); */
  /*          maskRecon = imfilter(maskRecon, 4*kernel, 'circular'); */
  /*          blurredTemp = blur(gaussian1, gaussian2, blurmask, levelsLeft-1); */
  /*          blurred = zeros(size(im1)); */
  /*          blurred(1:2:end, 1:2:end,:) = blurredTemp; */
  /*          blurred = imfilter(blurred, 4*kernel, 'circular') + bsxfun(@times, laplacian1,maskRecon)  + bsxfun(@times, laplacian2,(1-maskRecon)); */
  /*      end */
  /*  end */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (pyramidBlendLive.c) */

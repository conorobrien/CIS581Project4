/*
 * faceSwapLive.c
 *
 * Code generation for function 'faceSwapLive'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "faceSwapLive_emxutil.h"
#include "SystemCore.h"
#include "pyramidBlendLive.h"
#include "bsxfun.h"
#include "isequal.h"
#include "imwarp.h"
#include "imref2d.h"
#include "fitgeotrans.h"
#include "reshapePoints.h"
#include "featSelectLive.h"
#include "rgb2gray.h"
#include "CascadeObjectDetector.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static vision_CascadeObjectDetector_10 faceDetector;
static boolean_T faceDetector_not_empty;
static vision_CascadeObjectDetector_11 rEyeDetector;
static vision_CascadeObjectDetector_12 lEyeDetector;
static vision_CascadeObjectDetector_13 mouthDetector;
static vision_CascadeObjectDetector_14 noseDetector;
static emlrtRSInfo emlrtRSI = { 6, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo b_emlrtRSI = { 7, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo c_emlrtRSI = { 8, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo d_emlrtRSI = { 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo e_emlrtRSI = { 10, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo f_emlrtRSI = { 13, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo g_emlrtRSI = { 19, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo h_emlrtRSI = { 20, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo i_emlrtRSI = { 24, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo j_emlrtRSI = { 26, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo k_emlrtRSI = { 27, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo l_emlrtRSI = { 28, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo m_emlrtRSI = { 29, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo n_emlrtRSI = { 36, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo o_emlrtRSI = { 45, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo p_emlrtRSI = { 47, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo q_emlrtRSI = { 48, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo r_emlrtRSI = { 49, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo s_emlrtRSI = { 56, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo t_emlrtRSI = { 58, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRSInfo eh_emlrtRSI = { 94, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo fh_emlrtRSI = { 119, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo gh_emlrtRSI = { 194, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo ei_emlrtRSI = { 16, "mean",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtRSInfo fi_emlrtRSI = { 19, "mean",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtRSInfo gi_emlrtRSI = { 28, "mean",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/datafun/mean.m" };

static emlrtRSInfo hi_emlrtRSI = { 17, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRSInfo ii_emlrtRSI = { 18, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRSInfo ji_emlrtRSI = { 19, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRSInfo ki_emlrtRSI = { 30, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 1, 25, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 20, 9, "eml_li_find",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo d_emlrtRTEI = { 13, 5, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 19, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 20, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 23, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 26, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 27, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 28, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 29, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 49, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 1, 11, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtBCInfo emlrtBCI = { 1, 5, 29, 49, "laplacian1", "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m",
  0 };

static emlrtRTEInfo jc_emlrtRTEI = { 28, 1, "pyramidBlendLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/pyramidBlendLive.m"
};

static emlrtECInfo emlrtECI = { -1, 52, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtECInfo b_emlrtECI = { -1, 55, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtECInfo c_emlrtECI = { 2, 24, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtECInfo d_emlrtECI = { 1, 24, 9, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m"
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 20, 31, "faceBoxes", "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 19, 31, "faceBoxes", "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 19, 49, "faceBoxes", "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 20, 49, "faceBoxes", "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { 1, 240, 23, 33, "targetImage", "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 23, 33, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { 1, 427, 23, 41, "targetImage", "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 23, 41, "faceSwapLive",
  "/Users/conor/Documents/MATLAB/CIS581/CIS581Project4/FaceSwapLive/faceSwapLive.m",
  1 };

/* Function Declarations */
static int32_T b_compute_nones(const boolean_T x[307440]);
static int32_T compute_nones(const boolean_T x[11025]);

/* Function Definitions */
static int32_T b_compute_nones(const boolean_T x[307440])
{
  int32_T k;
  int32_T i;
  k = 0;
  for (i = 0; i < 307440; i++) {
    if (x[i]) {
      k++;
    }
  }

  return k;
}

static int32_T compute_nones(const boolean_T x[11025])
{
  int32_T k;
  int32_T i;
  k = 0;
  for (i = 0; i < 11025; i++) {
    if (x[i]) {
      k++;
    }
  }

  return k;
}

void faceDetector_not_empty_init(void)
{
  faceDetector_not_empty = false;
}

void faceSwapLive(faceSwapLiveStackData *SD, const emlrtStack *sp, uint8_T
                  targetImage[307440], const uint8_T swapImage[33075], const
                  boolean_T swapMask[11025], uint8_T swappedImage[307440])
{
  emxArray_real_T *faceBoxes;
  int32_T j;
  emxArray_real_T *xRange;
  emxArray_real_T *yRange;
  emxArray_uint8_T *faceImage;
  emxArray_real_T *rEyeBoxes;
  emxArray_real_T *lEyeBoxes;
  emxArray_real_T *mouthBoxes;
  emxArray_real_T *noseBoxes;
  emxArray_boolean_T *warpedMask;
  emxArray_uint8_T *r0;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_real_T *outputImage;
  emxArray_real_T *b_outputImage;
  emxArray_uint8_T *b_targetImage;
  emxArray_uint8_T *c_targetImage;
  int32_T i0;
  int32_T i1;
  int32_T levels;
  real_T anew;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  real_T absb;
  int32_T nm1d2;
  int32_T k;
  int32_T i2;
  int32_T i;
  int32_T bestPoints_size[2];
  real_T bestPoints_data[10];
  int32_T targetPts_size[2];
  real_T targetPts_data[20];
  real_T tform_T[9];
  real_T d_targetImage[3];
  real_T varargin_4_ImageSize[2];
  real_T expl_temp[2];
  real_T b_expl_temp[2];
  uint8_T u0;
  int32_T iv0[2];
  int32_T iv1[3];
  const mxArray *y;
  const mxArray *m0;
  const mxArray *b_y;
  int16_T y_data[11025];
  int32_T x_size[1];
  boolean_T cond;
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 36 };

  char_T cv0[36];
  static const char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 37 };

  char_T cv2[37];
  static const char_T cv3[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 37 };

  real_T imsize[12];
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (!faceDetector_not_empty) {
    st.site = &emlrtRSI;
    c_CascadeObjectDetector_Cascade(&st, &faceDetector);
    faceDetector_not_empty = true;
    st.site = &b_emlrtRSI;
    d_CascadeObjectDetector_Cascade(&st, &lEyeDetector);
    st.site = &c_emlrtRSI;
    e_CascadeObjectDetector_Cascade(&st, &rEyeDetector);
    st.site = &d_emlrtRSI;
    f_CascadeObjectDetector_Cascade(&st, &mouthDetector);
    st.site = &e_emlrtRSI;
    g_CascadeObjectDetector_Cascade(&st, &noseDetector);
  }

  emxInit_real_T(sp, &faceBoxes, 2, &d_emlrtRTEI, true);
  st.site = &f_emlrtRSI;
  SystemCore_step(SD, &st, &faceDetector, targetImage, faceBoxes);
  memcpy(&swappedImage[0], &targetImage[0], 307440U * sizeof(uint8_T));
  j = 0;
  emxInit_real_T(sp, &xRange, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &yRange, 2, &f_emlrtRTEI, true);
  emxInit_uint8_T(sp, &faceImage, 3, &g_emlrtRTEI, true);
  emxInit_real_T(sp, &rEyeBoxes, 2, &h_emlrtRTEI, true);
  emxInit_real_T(sp, &lEyeBoxes, 2, &i_emlrtRTEI, true);
  emxInit_real_T(sp, &mouthBoxes, 2, &j_emlrtRTEI, true);
  emxInit_real_T(sp, &noseBoxes, 2, &k_emlrtRTEI, true);
  emxInit_boolean_T(sp, &warpedMask, 2, &l_emlrtRTEI, true);
  b_emxInit_uint8_T(sp, &r0, 2, &b_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &b_emlrtRTEI, true);
  emxInit_int32_T(sp, &r2, 1, &b_emlrtRTEI, true);
  emxInit_int32_T(sp, &r3, 1, &b_emlrtRTEI, true);
  b_emxInit_real_T(sp, &outputImage, 3, &m_emlrtRTEI, true);
  emxInit_real_T(sp, &b_outputImage, 2, &m_emlrtRTEI, true);
  emxInit_uint8_T(sp, &b_targetImage, 3, &b_emlrtRTEI, true);
  emxInit_uint8_T(sp, &c_targetImage, 3, &b_emlrtRTEI, true);
  while (j <= faceBoxes->size[0] - 1) {
    st.site = &g_emlrtRSI;
    i0 = faceBoxes->size[0];
    i1 = j + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI, &st);
    b_st.site = &nb_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    if (muDoubleScalarIsNaN(faceBoxes->data[j + faceBoxes->size[0] * 3])) {
      levels = 0;
      anew = rtNaN;
      apnd = faceBoxes->data[j + faceBoxes->size[0] * 3];
    } else if (faceBoxes->data[j + faceBoxes->size[0] * 3] < 1.0) {
      levels = -1;
      anew = 1.0;
      apnd = faceBoxes->data[j + faceBoxes->size[0] * 3];
    } else {
      anew = 1.0;
      ndbl = muDoubleScalarFloor((faceBoxes->data[j + faceBoxes->size[0] * 3] -
        1.0) + 0.5);
      apnd = 1.0 + ndbl;
      cdiff = (1.0 + ndbl) - faceBoxes->data[j + faceBoxes->size[0] * 3];
      absb = muDoubleScalarAbs(faceBoxes->data[j + faceBoxes->size[0] * 3]);
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
          (1.0, absb)) {
        ndbl++;
        apnd = faceBoxes->data[j + faceBoxes->size[0] * 3];
      } else if (cdiff > 0.0) {
        apnd = 1.0 + (ndbl - 1.0);
      } else {
        ndbl++;
      }

      levels = (int32_T)ndbl - 1;
    }

    i0 = xRange->size[0] * xRange->size[1];
    xRange->size[0] = 1;
    xRange->size[1] = levels + 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)xRange, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    if (levels + 1 > 0) {
      xRange->data[0] = anew;
      if (levels + 1 > 1) {
        xRange->data[levels] = apnd;
        i0 = levels + (levels < 0);
        if (i0 >= 0) {
          nm1d2 = (int32_T)((uint32_T)i0 >> 1);
        } else {
          nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
        }

        for (k = 1; k < nm1d2; k++) {
          xRange->data[k] = anew + (real_T)k;
          xRange->data[levels - k] = apnd - (real_T)k;
        }

        if (nm1d2 << 1 == levels) {
          xRange->data[nm1d2] = (anew + apnd) / 2.0;
        } else {
          xRange->data[nm1d2] = anew + (real_T)nm1d2;
          xRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
        }
      }
    }

    i0 = xRange->size[0] * xRange->size[1];
    xRange->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)xRange, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    nm1d2 = xRange->size[0];
    levels = xRange->size[1];
    i0 = faceBoxes->size[0];
    i1 = 1 + j;
    anew = faceBoxes->data[(emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
      &d_emlrtBCI, sp) + faceBoxes->size[0]) - 1];
    nm1d2 *= levels;
    for (i0 = 0; i0 < nm1d2; i0++) {
      xRange->data[i0] += anew;
    }

    st.site = &h_emlrtRSI;
    i0 = faceBoxes->size[0];
    i1 = j + 1;
    emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, &st);
    b_st.site = &nb_emlrtRSI;
    c_st.site = &ob_emlrtRSI;
    if (muDoubleScalarIsNaN(faceBoxes->data[j + (faceBoxes->size[0] << 1)])) {
      levels = 0;
      anew = rtNaN;
      apnd = faceBoxes->data[j + (faceBoxes->size[0] << 1)];
    } else if (faceBoxes->data[j + (faceBoxes->size[0] << 1)] < 1.0) {
      levels = -1;
      anew = 1.0;
      apnd = faceBoxes->data[j + (faceBoxes->size[0] << 1)];
    } else {
      anew = 1.0;
      ndbl = muDoubleScalarFloor((faceBoxes->data[j + (faceBoxes->size[0] << 1)]
        - 1.0) + 0.5);
      apnd = 1.0 + ndbl;
      cdiff = (1.0 + ndbl) - faceBoxes->data[j + (faceBoxes->size[0] << 1)];
      absb = muDoubleScalarAbs(faceBoxes->data[j + (faceBoxes->size[0] << 1)]);
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
          (1.0, absb)) {
        ndbl++;
        apnd = faceBoxes->data[j + (faceBoxes->size[0] << 1)];
      } else if (cdiff > 0.0) {
        apnd = 1.0 + (ndbl - 1.0);
      } else {
        ndbl++;
      }

      levels = (int32_T)ndbl - 1;
    }

    i0 = yRange->size[0] * yRange->size[1];
    yRange->size[0] = 1;
    yRange->size[1] = levels + 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)yRange, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    if (levels + 1 > 0) {
      yRange->data[0] = anew;
      if (levels + 1 > 1) {
        yRange->data[levels] = apnd;
        i0 = levels + (levels < 0);
        if (i0 >= 0) {
          nm1d2 = (int32_T)((uint32_T)i0 >> 1);
        } else {
          nm1d2 = (int32_T)~(~(uint32_T)i0 >> 1);
        }

        for (k = 1; k < nm1d2; k++) {
          yRange->data[k] = anew + (real_T)k;
          yRange->data[levels - k] = apnd - (real_T)k;
        }

        if (nm1d2 << 1 == levels) {
          yRange->data[nm1d2] = (anew + apnd) / 2.0;
        } else {
          yRange->data[nm1d2] = anew + (real_T)nm1d2;
          yRange->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
        }
      }
    }

    i0 = yRange->size[0] * yRange->size[1];
    yRange->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)yRange, i0, (int32_T)sizeof(real_T),
                      &b_emlrtRTEI);
    nm1d2 = yRange->size[0];
    levels = yRange->size[1];
    i0 = faceBoxes->size[0];
    i1 = 1 + j;
    anew = faceBoxes->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0,
      &e_emlrtBCI, sp) - 1];
    nm1d2 *= levels;
    for (i0 = 0; i0 < nm1d2; i0++) {
      yRange->data[i0] += anew;
    }

    i0 = faceImage->size[0] * faceImage->size[1] * faceImage->size[2];
    faceImage->size[0] = xRange->size[1];
    faceImage->size[1] = yRange->size[1];
    faceImage->size[2] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)faceImage, i0, (int32_T)sizeof
                      (uint8_T), &b_emlrtRTEI);
    for (i0 = 0; i0 < 3; i0++) {
      nm1d2 = yRange->size[1];
      for (i1 = 0; i1 < nm1d2; i1++) {
        levels = xRange->size[1];
        for (i2 = 0; i2 < levels; i2++) {
          anew = xRange->data[xRange->size[0] * i2];
          k = (int32_T)emlrtIntegerCheckFastR2012b(anew, &b_emlrtDCI, sp);
          anew = yRange->data[yRange->size[0] * i1];
          i = (int32_T)emlrtIntegerCheckFastR2012b(anew, &c_emlrtDCI, sp);
          faceImage->data[(i2 + faceImage->size[0] * i1) + faceImage->size[0] *
            faceImage->size[1] * i0] = targetImage
            [((emlrtDynamicBoundsCheckFastR2012b(k, 1, 240, &f_emlrtBCI, sp) +
               240 * (emlrtDynamicBoundsCheckFastR2012b(i, 1, 427, &g_emlrtBCI,
                 sp) - 1)) + 102480 * i0) - 1];
        }
      }
    }

    st.site = &i_emlrtRSI;
    rgb2gray(&st, faceImage, r0);
    i0 = r0->size[0];
    emlrtDimSizeGeqCheckFastR2012b(200, i0, &d_emlrtECI, sp);
    i0 = r0->size[1];
    emlrtDimSizeGeqCheckFastR2012b(200, i0, &c_emlrtECI, sp);
    st.site = &j_emlrtRSI;
    b_SystemCore_step(&st, &rEyeDetector, r0->data, r0->size, rEyeBoxes);
    st.site = &k_emlrtRSI;
    c_SystemCore_step(&st, &lEyeDetector, r0->data, r0->size, lEyeBoxes);
    st.site = &l_emlrtRSI;
    d_SystemCore_step(&st, &mouthDetector, r0->data, r0->size, mouthBoxes);
    st.site = &m_emlrtRSI;
    e_SystemCore_step(&st, &noseDetector, r0->data, r0->size, noseBoxes);
    if ((rEyeBoxes->size[0] == 0) || (lEyeBoxes->size[0] == 0) ||
        (mouthBoxes->size[0] == 0) || (noseBoxes->size[0] == 0)) {
    } else {
      /*  Determine the best features using pictoral structure k-fan */
      st.site = &n_emlrtRSI;
      featSelectLive(&st, noseBoxes, mouthBoxes, lEyeBoxes, rEyeBoxes,
                     bestPoints_data, bestPoints_size);
      if ((bestPoints_size[0] == 0) || (bestPoints_size[1] == 0)) {
      } else {
        /*  Pick control points for warping */
        st.site = &o_emlrtRSI;
        reshapePoints(&st, bestPoints_data, bestPoints_size, targetPts_data,
                      targetPts_size);
        st.site = &p_emlrtRSI;
        fitgeotrans(&st, targetPts_data, targetPts_size, &anew, tform_T);
        i0 = b_targetImage->size[0] * b_targetImage->size[1] *
          b_targetImage->size[2];
        b_targetImage->size[0] = xRange->size[1];
        b_targetImage->size[1] = yRange->size[1];
        b_targetImage->size[2] = 3;
        emxEnsureCapacity(sp, (emxArray__common *)b_targetImage, i0, (int32_T)
                          sizeof(uint8_T), &b_emlrtRTEI);
        for (i0 = 0; i0 < 3; i0++) {
          nm1d2 = yRange->size[1];
          for (i1 = 0; i1 < nm1d2; i1++) {
            levels = xRange->size[1];
            for (i2 = 0; i2 < levels; i2++) {
              b_targetImage->data[(i2 + b_targetImage->size[0] * i1) +
                b_targetImage->size[0] * b_targetImage->size[1] * i0] =
                targetImage[(((int32_T)xRange->data[xRange->size[0] * i2] + 240 *
                              ((int32_T)yRange->data[yRange->size[0] * i1] - 1))
                             + 102480 * i0) - 1];
            }
          }
        }

        for (i0 = 0; i0 < 3; i0++) {
          d_targetImage[i0] = b_targetImage->size[i0];
        }

        st.site = &q_emlrtRSI;
        imref2d_imref2d(&st, d_targetImage, b_expl_temp, expl_temp,
                        varargin_4_ImageSize, &anew, &ndbl);
        st.site = &q_emlrtRSI;
        b_st.site = &eh_emlrtRSI;
        c_st.site = &gh_emlrtRSI;
        b_st.site = &fh_emlrtRSI;
        remapPointsAndResample(&b_st, swapImage, tform_T, varargin_4_ImageSize,
          outputImage);
        i0 = faceImage->size[0] * faceImage->size[1] * faceImage->size[2];
        faceImage->size[0] = outputImage->size[0];
        faceImage->size[1] = outputImage->size[1];
        faceImage->size[2] = 3;
        emxEnsureCapacity(&st, (emxArray__common *)faceImage, i0, (int32_T)
                          sizeof(uint8_T), &b_emlrtRTEI);
        nm1d2 = outputImage->size[0] * outputImage->size[1] * outputImage->size
          [2];
        for (i0 = 0; i0 < nm1d2; i0++) {
          anew = muDoubleScalarRound(outputImage->data[i0]);
          if (anew < 256.0) {
            if (anew >= 0.0) {
              u0 = (uint8_T)anew;
            } else {
              u0 = 0;
            }
          } else if (anew >= 256.0) {
            u0 = MAX_uint8_T;
          } else {
            u0 = 0;
          }

          faceImage->data[i0] = u0;
        }

        i0 = c_targetImage->size[0] * c_targetImage->size[1] *
          c_targetImage->size[2];
        c_targetImage->size[0] = xRange->size[1];
        c_targetImage->size[1] = yRange->size[1];
        c_targetImage->size[2] = 3;
        emxEnsureCapacity(sp, (emxArray__common *)c_targetImage, i0, (int32_T)
                          sizeof(uint8_T), &b_emlrtRTEI);
        for (i0 = 0; i0 < 3; i0++) {
          nm1d2 = yRange->size[1];
          for (i1 = 0; i1 < nm1d2; i1++) {
            levels = xRange->size[1];
            for (i2 = 0; i2 < levels; i2++) {
              c_targetImage->data[(i2 + c_targetImage->size[0] * i1) +
                c_targetImage->size[0] * c_targetImage->size[1] * i0] =
                targetImage[(((int32_T)xRange->data[xRange->size[0] * i2] + 240 *
                              ((int32_T)yRange->data[yRange->size[0] * i1] - 1))
                             + 102480 * i0) - 1];
            }
          }
        }

        for (i0 = 0; i0 < 3; i0++) {
          d_targetImage[i0] = c_targetImage->size[i0];
        }

        st.site = &r_emlrtRSI;
        imref2d_imref2d(&st, d_targetImage, b_expl_temp, expl_temp,
                        varargin_4_ImageSize, &anew, &ndbl);
        st.site = &r_emlrtRSI;
        b_st.site = &eh_emlrtRSI;
        c_st.site = &gh_emlrtRSI;
        b_st.site = &fh_emlrtRSI;
        b_remapPointsAndResample(&b_st, swapMask, tform_T, varargin_4_ImageSize,
          b_outputImage);
        i0 = warpedMask->size[0] * warpedMask->size[1];
        warpedMask->size[0] = b_outputImage->size[0];
        warpedMask->size[1] = b_outputImage->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)warpedMask, i0, (int32_T)
                          sizeof(boolean_T), &b_emlrtRTEI);
        nm1d2 = b_outputImage->size[0] * b_outputImage->size[1];
        for (i0 = 0; i0 < nm1d2; i0++) {
          warpedMask->data[i0] = (b_outputImage->data[i0] != 0.0);
        }

        memset(&SD->f1.imageMask[0], 0, 102480U * sizeof(boolean_T));
        i0 = r2->size[0];
        r2->size[0] = xRange->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof
                          (int32_T), &b_emlrtRTEI);
        nm1d2 = xRange->size[1];
        for (i0 = 0; i0 < nm1d2; i0++) {
          r2->data[i0] = (int32_T)xRange->data[xRange->size[0] * i0] - 1;
        }

        i0 = r3->size[0];
        r3->size[0] = yRange->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r3, i0, (int32_T)sizeof
                          (int32_T), &b_emlrtRTEI);
        nm1d2 = yRange->size[1];
        for (i0 = 0; i0 < nm1d2; i0++) {
          r3->data[i0] = (int32_T)yRange->data[yRange->size[0] * i0] - 1;
        }

        iv0[0] = r2->size[0];
        iv0[1] = r3->size[0];
        emlrtSubAssignSizeCheckR2012b(iv0, 2, *(int32_T (*)[2])warpedMask->size,
          2, &emlrtECI, sp);
        nm1d2 = warpedMask->size[1];
        for (i0 = 0; i0 < nm1d2; i0++) {
          levels = warpedMask->size[0];
          for (i1 = 0; i1 < levels; i1++) {
            SD->f1.imageMask[r2->data[i1] + 240 * r3->data[i0]] =
              warpedMask->data[i1 + warpedMask->size[0] * i0];
          }
        }

        memset(&SD->f1.morphedBlend[0], 0, 307440U * sizeof(real_T));
        i0 = r2->size[0];
        r2->size[0] = xRange->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof
                          (int32_T), &b_emlrtRTEI);
        nm1d2 = xRange->size[1];
        for (i0 = 0; i0 < nm1d2; i0++) {
          r2->data[i0] = (int32_T)xRange->data[xRange->size[0] * i0] - 1;
        }

        i0 = r3->size[0];
        r3->size[0] = yRange->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r3, i0, (int32_T)sizeof
                          (int32_T), &b_emlrtRTEI);
        nm1d2 = yRange->size[1];
        for (i0 = 0; i0 < nm1d2; i0++) {
          r3->data[i0] = (int32_T)yRange->data[yRange->size[0] * i0] - 1;
        }

        iv1[0] = r2->size[0];
        iv1[1] = r3->size[0];
        iv1[2] = 3;
        emlrtSubAssignSizeCheckR2012b(iv1, 3, *(int32_T (*)[3])faceImage->size,
          3, &b_emlrtECI, sp);
        for (i0 = 0; i0 < 3; i0++) {
          nm1d2 = faceImage->size[1];
          for (i1 = 0; i1 < nm1d2; i1++) {
            levels = faceImage->size[0];
            for (i2 = 0; i2 < levels; i2++) {
              SD->f1.morphedBlend[(r2->data[i2] + 240 * r3->data[i1]) + 102480 *
                i0] = faceImage->data[(i2 + faceImage->size[0] * i1) +
                faceImage->size[0] * faceImage->size[1] * i0];
            }
          }
        }

        st.site = &s_emlrtRSI;
        for (i0 = 0; i0 < 307440; i0++) {
          SD->f1.x[i0] = (SD->f1.morphedBlend[i0] == 0.0);
        }

        k = b_compute_nones(SD->f1.x);
        if (k <= 307440) {
        } else {
          y = NULL;
          m0 = emlrtCreateString("Assertion failed.");
          emlrtAssign(&y, m0);
          b_st.site = &jj_emlrtRSI;
          error(&b_st, y, &hb_emlrtMCI);
        }

        emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, &st);
        i0 = r1->size[0];
        r1->size[0] = k;
        emxEnsureCapacity(&st, (emxArray__common *)r1, i0, (int32_T)sizeof
                          (int32_T), &c_emlrtRTEI);
        nm1d2 = 0;
        for (i = 0; i < 307440; i++) {
          if (SD->f1.x[i]) {
            r1->data[nm1d2] = i + 1;
            nm1d2++;
          }
        }

        st.site = &s_emlrtRSI;
        k = compute_nones(swapMask);
        if (k <= 11025) {
        } else {
          b_y = NULL;
          m0 = emlrtCreateString("Assertion failed.");
          emlrtAssign(&b_y, m0);
          b_st.site = &jj_emlrtRSI;
          error(&b_st, b_y, &hb_emlrtMCI);
        }

        emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, &st);
        nm1d2 = 0;
        for (i = 0; i < 11025; i++) {
          if (swapMask[i]) {
            y_data[nm1d2] = (int16_T)(i + 1);
            nm1d2++;
          }
        }

        st.site = &s_emlrtRSI;
        x_size[0] = k;
        if ((k == 1) || (k != 1)) {
          cond = true;
        } else {
          cond = false;
        }

        b_st.site = &ei_emlrtRSI;
        if (cond) {
        } else {
          c_y = NULL;
          m0 = emlrtCreateCharArray(2, iv2);
          for (i = 0; i < 36; i++) {
            cv0[i] = cv1[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 36, m0, cv0);
          emlrtAssign(&c_y, m0);
          c_st.site = &pj_emlrtRSI;
          error(&c_st, b_message(&c_st, c_y, &w_emlrtMCI), &w_emlrtMCI);
        }

        cond = !isequal(x_size);
        b_st.site = &fi_emlrtRSI;
        if (cond) {
        } else {
          d_y = NULL;
          m0 = emlrtCreateCharArray(2, iv3);
          for (i = 0; i < 37; i++) {
            cv2[i] = cv3[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 37, m0, cv2);
          emlrtAssign(&d_y, m0);
          c_st.site = &pj_emlrtRSI;
          error(&c_st, b_message(&c_st, d_y, &w_emlrtMCI), &w_emlrtMCI);
        }

        cond = !isequal(x_size);
        b_st.site = &gi_emlrtRSI;
        if (cond) {
        } else {
          e_y = NULL;
          m0 = emlrtCreateCharArray(2, iv4);
          for (i = 0; i < 37; i++) {
            cv2[i] = cv3[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 37, m0, cv2);
          emlrtAssign(&e_y, m0);
          c_st.site = &pj_emlrtRSI;
          error(&c_st, b_message(&c_st, e_y, &w_emlrtMCI), &w_emlrtMCI);
        }

        b_st.site = &gd_emlrtRSI;
        if (k == 0) {
          anew = 0.0;
        } else {
          anew = swapImage[y_data[0] - 1];
          c_st.site = &wd_emlrtRSI;
          for (nm1d2 = 2; nm1d2 <= k; nm1d2++) {
            anew += (real_T)swapImage[y_data[nm1d2 - 1] - 1];
          }
        }

        anew /= (real_T)k;
        nm1d2 = r1->size[0];
        for (i0 = 0; i0 < nm1d2; i0++) {
          SD->f1.morphedBlend[r1->data[i0] - 1] = anew;
        }

        st.site = &t_emlrtRSI;
        levels = 5;

        /* PYRAMIDBLUR pyramid blur two pyramid objects using a binary mask */
        for (i0 = 0; i0 < 1844640; i0++) {
          SD->f1.gaussian1[i0] = 0.0;
          SD->f1.gaussian2[i0] = 0.0;
        }

        for (i0 = 0; i0 < 1537200; i0++) {
          SD->f1.laplacian1[i0] = 0.0;
          SD->f1.laplacian2[i0] = 0.0;
        }

        memset(&imsize[0], 0, 12U * sizeof(real_T));
        memset(&SD->f1.gaussMask[0], 0, 614880U * sizeof(boolean_T));
        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 427; i1++) {
            memcpy(&SD->f1.gaussian1[240 * i1 + 102480 * i0],
                   &SD->f1.morphedBlend[240 * i1 + 102480 * i0], 240U * sizeof
                   (real_T));
          }
        }

        for (i0 = 0; i0 < 2; i0++) {
          imsize[6 * i0] = 240.0 + 187.0 * (real_T)i0;
        }

        for (i0 = 0; i0 < 3; i0++) {
          for (i1 = 0; i1 < 427; i1++) {
            for (i2 = 0; i2 < 240; i2++) {
              SD->f1.gaussian2[(i2 + 240 * i1) + 102480 * i0] = targetImage[(i2
                + 240 * i1) + 102480 * i0];
            }
          }
        }

        for (i0 = 0; i0 < 427; i0++) {
          memcpy(&SD->f1.gaussMask[240 * i0], &SD->f1.imageMask[240 * i0], 240U *
                 sizeof(boolean_T));
        }

        i = 0;
        exitg1 = false;
        while ((!exitg1) && (i < 5)) {
          for (i0 = 0; i0 < 2; i0++) {
            expl_temp[i0] = imsize[i + 6 * i0];
          }

          for (i0 = 0; i0 < 3; i0++) {
            for (i1 = 0; i1 < 427; i1++) {
              for (i2 = 0; i2 < 240; i2++) {
                SD->f1.imageRecon[(i2 + 240 * i1) + 102480 * i0] = (*(real_T (*)
                  [307440])&SD->f1.gaussian1[307440 * i])[(i2 + 240 * i1) +
                  102480 * i0];
              }
            }
          }

          b_st.site = &hi_emlrtRSI;
          pyrBlendDown(&b_st, SD->f1.imageRecon, expl_temp, *(real_T (*)[307440])
                       &SD->f1.gaussian1[307440 * (i + 1)], *(real_T (*)[307440])
                       &SD->f1.laplacian1[307440 * i], b_expl_temp);
          for (i0 = 0; i0 < 2; i0++) {
            imsize[(i + 6 * i0) + 1] = b_expl_temp[i0];
            expl_temp[i0] = imsize[i + 6 * i0];
          }

          for (i0 = 0; i0 < 3; i0++) {
            for (i1 = 0; i1 < 427; i1++) {
              for (i2 = 0; i2 < 240; i2++) {
                SD->f1.imageRecon[(i2 + 240 * i1) + 102480 * i0] = (*(real_T (*)
                  [307440])&SD->f1.gaussian2[307440 * i])[(i2 + 240 * i1) +
                  102480 * i0];
              }
            }
          }

          b_st.site = &ii_emlrtRSI;
          pyrBlendDown(&b_st, SD->f1.imageRecon, expl_temp, *(real_T (*)[307440])
                       &SD->f1.gaussian2[307440 * (i + 1)], *(real_T (*)[307440])
                       &SD->f1.laplacian2[307440 * i], b_expl_temp);
          for (i0 = 0; i0 < 2; i0++) {
            expl_temp[i0] = imsize[i + 6 * i0];
          }

          b_st.site = &ji_emlrtRSI;
          b_pyrBlendDown(&b_st, *(boolean_T (*)[102480])&SD->f1.gaussMask[102480
                         * i], expl_temp, SD->f1.dv0, SD->f1.unusedU1,
                         b_expl_temp);
          for (i0 = 0; i0 < 427; i0++) {
            for (i1 = 0; i1 < 240; i1++) {
              SD->f1.gaussMask[(i1 + 240 * i0) + 102480 * (i + 1)] = (SD->
                f1.dv0[i1 + 240 * i0] != 0.0);
            }
          }

          if (imsize[i + 1] + imsize[i + 7] < 12.0) {
            levels = 1 + i;
            exitg1 = true;
          } else {
            i++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
          }
        }

        b_bsxfun(*(real_T (*)[307440])&SD->f1.gaussian1[307440 * levels],
                 *(boolean_T (*)[102480])&SD->f1.gaussMask[102480 * levels],
                 SD->f1.imageRecon);
        for (i0 = 0; i0 < 427; i0++) {
          for (i1 = 0; i1 < 240; i1++) {
            SD->f1.b_gaussMask[i1 + 240 * i0] = !SD->f1.gaussMask[(i1 + 240 * i0)
              + 102480 * levels];
          }
        }

        b_bsxfun(*(real_T (*)[307440])&SD->f1.gaussian2[307440 * levels],
                 SD->f1.b_gaussMask, SD->f1.morphedBlend);
        for (i0 = 0; i0 < 307440; i0++) {
          SD->f1.imageRecon[i0] += SD->f1.morphedBlend[i0];
        }

        emlrtForLoopVectorCheckR2012b(((real_T)levels + 1.0) - 1.0, -1.0, 1.0,
          mxDOUBLE_CLASS, levels, &jc_emlrtRTEI, &st);
        i = 0;
        while (i <= levels - 1) {
          nm1d2 = (levels - i) - 1;
          i0 = nm1d2 + 1;
          emlrtDynamicBoundsCheckFastR2012b(i0, 1, 5, &emlrtBCI, &st);
          b_bsxfun(*(real_T (*)[307440])&SD->f1.laplacian1[307440 * nm1d2],
                   *(boolean_T (*)[102480])&SD->f1.gaussMask[102480 * nm1d2],
                   SD->f1.morphedBlend);
          for (i0 = 0; i0 < 427; i0++) {
            for (i1 = 0; i1 < 240; i1++) {
              SD->f1.b_gaussMask[i1 + 240 * i0] = !SD->f1.gaussMask[(i1 + 240 *
                i0) + 102480 * nm1d2];
            }
          }

          b_bsxfun(*(real_T (*)[307440])&SD->f1.laplacian2[307440 * nm1d2],
                   SD->f1.b_gaussMask, SD->f1.dv1);
          for (i0 = 0; i0 < 2; i0++) {
            b_expl_temp[i0] = imsize[(nm1d2 + 6 * i0) + 1];
            expl_temp[i0] = imsize[nm1d2 + 6 * i0];
          }

          for (i0 = 0; i0 < 307440; i0++) {
            SD->f1.b_morphedBlend[i0] = SD->f1.morphedBlend[i0] + SD->f1.dv1[i0];
            SD->f1.b_imageRecon[i0] = SD->f1.imageRecon[i0];
          }

          b_st.site = &ki_emlrtRSI;
          pyrBlendUp(&b_st, SD->f1.b_imageRecon, b_expl_temp, expl_temp,
                     SD->f1.b_morphedBlend, SD->f1.imageRecon);
          i++;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
        }

        for (i0 = 0; i0 < 307440; i0++) {
          anew = muDoubleScalarRound(SD->f1.imageRecon[i0]);
          if (anew < 256.0) {
            if (anew >= 0.0) {
              u0 = (uint8_T)anew;
            } else {
              u0 = 0;
            }
          } else if (anew >= 256.0) {
            u0 = MAX_uint8_T;
          } else {
            u0 = 0;
          }

          swappedImage[i0] = u0;
        }

        if (faceBoxes->size[0] > 1) {
          memcpy(&targetImage[0], &swappedImage[0], 307440U * sizeof(uint8_T));
        }
      }
    }

    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_uint8_T(&c_targetImage);
  emxFree_uint8_T(&b_targetImage);
  emxFree_real_T(&b_outputImage);
  emxFree_real_T(&outputImage);
  emxFree_int32_T(&r3);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_uint8_T(&r0);
  emxFree_boolean_T(&warpedMask);
  emxFree_real_T(&noseBoxes);
  emxFree_real_T(&mouthBoxes);
  emxFree_real_T(&lEyeBoxes);
  emxFree_real_T(&rEyeBoxes);
  emxFree_uint8_T(&faceImage);
  emxFree_real_T(&yRange);
  emxFree_real_T(&xRange);
  emxFree_real_T(&faceBoxes);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void lEyeDetector_not_empty_init(void)
{
}

void mouthDetector_not_empty_init(void)
{
}

void noseDetector_not_empty_init(void)
{
}

void rEyeDetector_not_empty_init(void)
{
}

/* End of code generation (faceSwapLive.c) */

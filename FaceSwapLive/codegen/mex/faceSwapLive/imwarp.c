/*
 * imwarp.c
 *
 * Code generation for function 'imwarp'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "imwarp.h"
#include "padarray.h"
#include "faceSwapLive_emxutil.h"
#include "validateattributes.h"
#include "imref2d.h"
#include "projective2d.h"
#include "meshgrid.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo hh_emlrtRSI = { 139, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo ih_emlrtRSI = { 156, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo jh_emlrtRSI = { 160, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo kh_emlrtRSI = { 166, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo lh_emlrtRSI = { 173, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo mh_emlrtRSI = { 177, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRSInfo xh_emlrtRSI = { 17, "interp2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/interp2d.m"
};

static emlrtRSInfo yh_emlrtRSI = { 19, "interp2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/interp2d.m"
};

static emlrtRSInfo ai_emlrtRSI = { 29, "interp2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/interp2d.m"
};

static emlrtRSInfo bi_emlrtRSI = { 82, "interp2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/interp2d.m"
};

static emlrtRSInfo ci_emlrtRSI = { 90, "interp2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/interp2d.m"
};

static emlrtRSInfo di_emlrtRSI = { 41, "remapmex",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/remapmex.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 124, 24, "imwarp",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imwarp.m" };

static emlrtRTEInfo mb_emlrtRTEI = { 16, 1, "remapmex",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/remapmex.m"
};

static emlrtECInfo w_emlrtECI = { -1, 153, 9, "interp2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/interp2d.m"
};

/* Function Definitions */
void b_remapPointsAndResample(const emlrtStack *sp, const boolean_T inputImage
  [11025], const real_T tform_T[9], const real_T outputRef_ImageSize[2],
  emxArray_real_T *outputImage)
{
  int32_T n;
  real_T anew;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  emxArray_real_T *r18;
  int32_T k;
  int32_T nm1d2;
  emxArray_real_T *r19;
  emxArray_real_T *dstXIntrinsic;
  emxArray_real_T *dstYIntrinsic;
  emxArray_real_T *dstXWorld;
  emxArray_real_T *dstYWorld;
  emxArray_real_T *srcXWorld;
  emxArray_real_T *srcYWorld;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv112[2] = { 1, 34 };

  const mxArray *m33;
  char_T cv165[34];
  static const char_T cv166[34] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'n',
    't', 'e', 'r', 'p', '2', 'd', ':', 'i', 'n', 'c', 'o', 'n', 's', 'i', 's',
    't', 'e', 'n', 't', 'X', 'Y', 'S', 'i', 'z', 'e' };

  real_T b_inputImage[11025];
  emxArray_real_T *c_inputImage;
  real_T d_inputImage[2];
  real_T b_outputImage[2];
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
  st.site = &hh_emlrtRSI;
  b_st.site = &ih_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(outputRef_ImageSize[1])) {
    n = 0;
    anew = rtNaN;
    apnd = outputRef_ImageSize[1];
  } else if (outputRef_ImageSize[1] < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = outputRef_ImageSize[1];
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[1] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [1]) {
      ndbl++;
      apnd = outputRef_ImageSize[1];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&d_st, &r18, 2, &lb_emlrtRTEI, true);
  k = r18->size[0] * r18->size[1];
  r18->size[0] = 1;
  r18->size[1] = n + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)r18, k, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n + 1 > 0) {
    r18->data[0] = anew;
    if (n + 1 > 1) {
      r18->data[n] = apnd;
      k = n + (n < 0);
      if (k >= 0) {
        nm1d2 = (int32_T)((uint32_T)k >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)k >> 1);
      }

      for (k = 1; k < nm1d2; k++) {
        r18->data[k] = anew + (real_T)k;
        r18->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        r18->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        r18->data[nm1d2] = anew + (real_T)nm1d2;
        r18->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  b_st.site = &ih_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(outputRef_ImageSize[0])) {
    n = 0;
    anew = rtNaN;
    apnd = outputRef_ImageSize[0];
  } else if (outputRef_ImageSize[0] < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = outputRef_ImageSize[0];
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[0] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [0]) {
      ndbl++;
      apnd = outputRef_ImageSize[0];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&d_st, &r19, 2, &lb_emlrtRTEI, true);
  k = r19->size[0] * r19->size[1];
  r19->size[0] = 1;
  r19->size[1] = n + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)r19, k, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n + 1 > 0) {
    r19->data[0] = anew;
    if (n + 1 > 1) {
      r19->data[n] = apnd;
      k = n + (n < 0);
      if (k >= 0) {
        nm1d2 = (int32_T)((uint32_T)k >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)k >> 1);
      }

      for (k = 1; k < nm1d2; k++) {
        r19->data[k] = anew + (real_T)k;
        r19->data[n - k] = apnd - (real_T)k;
      }

      if (nm1d2 << 1 == n) {
        r19->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        r19->data[nm1d2] = anew + (real_T)nm1d2;
        r19->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  emxInit_real_T(&d_st, &dstXIntrinsic, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &dstYIntrinsic, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &dstXWorld, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &dstYWorld, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &srcXWorld, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &srcYWorld, 2, &lb_emlrtRTEI, true);
  b_st.site = &ih_emlrtRSI;
  meshgrid(&b_st, r18, r19, dstXIntrinsic, dstYIntrinsic);
  b_st.site = &jh_emlrtRSI;
  imref2d_intrinsicToWorld(&b_st, dstXIntrinsic, dstYIntrinsic, dstXWorld,
    dstYWorld);
  b_st.site = &kh_emlrtRSI;
  c_projective2d_transformPointsI(&b_st, tform_T, dstXWorld, dstYWorld,
    srcXWorld, srcYWorld);
  b_st.site = &lh_emlrtRSI;
  imref2d_worldToIntrinsic(&b_st, srcXWorld, srcYWorld, dstXIntrinsic,
    dstYIntrinsic);
  b_st.site = &mh_emlrtRSI;
  c_st.site = &xh_emlrtRSI;
  validateattributes(&c_st, dstXIntrinsic);
  c_st.site = &yh_emlrtRSI;
  b_validateattributes(&c_st, dstYIntrinsic);
  emxFree_real_T(&r19);
  emxFree_real_T(&r18);
  emxFree_real_T(&srcYWorld);
  emxFree_real_T(&srcXWorld);
  emxFree_real_T(&dstYWorld);
  emxFree_real_T(&dstXWorld);
  for (k = 0; k < 2; k++) {
    varargin_1[k] = (uint32_T)dstXIntrinsic->size[k];
  }

  for (k = 0; k < 2; k++) {
    varargin_2[k] = (uint32_T)dstYIntrinsic->size[k];
  }

  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  c_st.site = &ai_emlrtRSI;
  if (!!p) {
  } else {
    y = NULL;
    m33 = emlrtCreateCharArray(2, iv112);
    for (nm1d2 = 0; nm1d2 < 34; nm1d2++) {
      cv165[nm1d2] = cv166[nm1d2];
    }

    emlrtInitCharArrayR2013a(&c_st, 34, m33, cv165);
    emlrtAssign(&y, m33);
    d_st.site = &mj_emlrtRSI;
    error(&d_st, b_message(&d_st, y, &u_emlrtMCI), &u_emlrtMCI);
  }

  for (k = 0; k < 11025; k++) {
    b_inputImage[k] = inputImage[k];
  }

  emxInit_real_T(&b_st, &c_inputImage, 2, &lb_emlrtRTEI, true);
  b_padarray(&b_st, b_inputImage, c_inputImage);
  k = dstXIntrinsic->size[0] * dstXIntrinsic->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)dstXIntrinsic, k, (int32_T)sizeof
                    (real_T), &lb_emlrtRTEI);
  nm1d2 = dstXIntrinsic->size[0];
  k = dstXIntrinsic->size[1];
  nm1d2 *= k;
  for (k = 0; k < nm1d2; k++) {
    dstXIntrinsic->data[k] = (dstXIntrinsic->data[k] + 3.0) - 1.0;
  }

  c_st.site = &ci_emlrtRSI;
  k = outputImage->size[0] * outputImage->size[1];
  outputImage->size[0] = dstXIntrinsic->size[0];
  outputImage->size[1] = dstXIntrinsic->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)outputImage, k, (int32_T)sizeof
                    (real_T), &mb_emlrtRTEI);
  d_st.site = &di_emlrtRSI;
  k = dstYIntrinsic->size[0] * dstYIntrinsic->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)dstYIntrinsic, k, (int32_T)sizeof
                    (real_T), &lb_emlrtRTEI);
  nm1d2 = dstYIntrinsic->size[0];
  k = dstYIntrinsic->size[1];
  nm1d2 *= k;
  for (k = 0; k < nm1d2; k++) {
    dstYIntrinsic->data[k] = (dstYIntrinsic->data[k] + 3.0) - 1.0;
  }

  anew = 0.0;
  for (k = 0; k < 2; k++) {
    d_inputImage[k] = c_inputImage->size[k];
  }

  for (k = 0; k < 2; k++) {
    b_outputImage[k] = outputImage->size[k];
  }

  remaptbb_real64(&c_inputImage->data[0], d_inputImage, 2.0,
                  &dstYIntrinsic->data[0], &dstXIntrinsic->data[0], 2, &anew,
                  &outputImage->data[0], b_outputImage, (real_T)
                  (outputImage->size[0] * outputImage->size[1]));
  emxFree_real_T(&c_inputImage);
  emxFree_real_T(&dstYIntrinsic);
  emxFree_real_T(&dstXIntrinsic);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void remapPointsAndResample(const emlrtStack *sp, const uint8_T inputImage[33075],
  const real_T tform_T[9], const real_T outputRef_ImageSize[2], emxArray_real_T *
  outputImage)
{
  boolean_T b9;
  uint8_T b_inputImage[33075];
  int32_T n;
  real_T anew;
  real_T apnd;
  real_T ndbl;
  real_T cdiff;
  emxArray_real_T *r8;
  int32_T i20;
  int32_T nm1d2;
  int32_T i;
  emxArray_real_T *r9;
  emxArray_real_T *dstXIntrinsic;
  emxArray_real_T *dstYIntrinsic;
  emxArray_real_T *dstXWorld;
  emxArray_real_T *dstYWorld;
  emxArray_real_T *srcXWorld;
  emxArray_real_T *srcYWorld;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv90[2] = { 1, 34 };

  const mxArray *m24;
  char_T cv133[34];
  static const char_T cv134[34] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'n',
    't', 'e', 'r', 'p', '2', 'd', ':', 'i', 'n', 'c', 'o', 'n', 's', 'i', 's',
    't', 'e', 'n', 't', 'X', 'Y', 'S', 'i', 'z', 'e' };

  emxArray_real_T *c_inputImage;
  emxArray_real_T *r10;
  real_T d_inputImage[11025];
  int32_T iv91[2];
  real_T fillValues[3];
  real_T e_inputImage[3];
  real_T b_outputImage[3];
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
  b9 = false;
  st.site = &hh_emlrtRSI;
  memcpy(&b_inputImage[0], &inputImage[0], 33075U * sizeof(uint8_T));
  b_st.site = &ih_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(outputRef_ImageSize[1])) {
    n = 0;
    anew = rtNaN;
    apnd = outputRef_ImageSize[1];
  } else if (outputRef_ImageSize[1] < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = outputRef_ImageSize[1];
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[1] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [1]) {
      ndbl++;
      apnd = outputRef_ImageSize[1];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&d_st, &r8, 2, &lb_emlrtRTEI, true);
  i20 = r8->size[0] * r8->size[1];
  r8->size[0] = 1;
  r8->size[1] = n + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)r8, i20, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n + 1 > 0) {
    r8->data[0] = anew;
    if (n + 1 > 1) {
      r8->data[n] = apnd;
      i20 = n + (n < 0);
      if (i20 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i20 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i20 >> 1);
      }

      for (i = 1; i < nm1d2; i++) {
        r8->data[i] = anew + (real_T)i;
        r8->data[n - i] = apnd - (real_T)i;
      }

      if (nm1d2 << 1 == n) {
        r8->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        r8->data[nm1d2] = anew + (real_T)nm1d2;
        r8->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  b_st.site = &ih_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
  d_st.site = &ob_emlrtRSI;
  if (muDoubleScalarIsNaN(outputRef_ImageSize[0])) {
    n = 0;
    anew = rtNaN;
    apnd = outputRef_ImageSize[0];
  } else if (outputRef_ImageSize[0] < 1.0) {
    n = -1;
    anew = 1.0;
    apnd = outputRef_ImageSize[0];
  } else {
    anew = 1.0;
    ndbl = muDoubleScalarFloor((outputRef_ImageSize[0] - 1.0) + 0.5);
    apnd = 1.0 + ndbl;
    cdiff = (1.0 + ndbl) - outputRef_ImageSize[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * outputRef_ImageSize
        [0]) {
      ndbl++;
      apnd = outputRef_ImageSize[0];
    } else if (cdiff > 0.0) {
      apnd = 1.0 + (ndbl - 1.0);
    } else {
      ndbl++;
    }

    n = (int32_T)ndbl - 1;
  }

  emxInit_real_T(&d_st, &r9, 2, &lb_emlrtRTEI, true);
  i20 = r9->size[0] * r9->size[1];
  r9->size[0] = 1;
  r9->size[1] = n + 1;
  emxEnsureCapacity(&d_st, (emxArray__common *)r9, i20, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n + 1 > 0) {
    r9->data[0] = anew;
    if (n + 1 > 1) {
      r9->data[n] = apnd;
      i20 = n + (n < 0);
      if (i20 >= 0) {
        nm1d2 = (int32_T)((uint32_T)i20 >> 1);
      } else {
        nm1d2 = (int32_T)~(~(uint32_T)i20 >> 1);
      }

      for (i = 1; i < nm1d2; i++) {
        r9->data[i] = anew + (real_T)i;
        r9->data[n - i] = apnd - (real_T)i;
      }

      if (nm1d2 << 1 == n) {
        r9->data[nm1d2] = (anew + apnd) / 2.0;
      } else {
        r9->data[nm1d2] = anew + (real_T)nm1d2;
        r9->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
      }
    }
  }

  emxInit_real_T(&d_st, &dstXIntrinsic, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &dstYIntrinsic, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &dstXWorld, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &dstYWorld, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &srcXWorld, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &srcYWorld, 2, &lb_emlrtRTEI, true);
  b_st.site = &ih_emlrtRSI;
  meshgrid(&b_st, r8, r9, dstXIntrinsic, dstYIntrinsic);
  b_st.site = &jh_emlrtRSI;
  imref2d_intrinsicToWorld(&b_st, dstXIntrinsic, dstYIntrinsic, dstXWorld,
    dstYWorld);
  b_st.site = &kh_emlrtRSI;
  c_projective2d_transformPointsI(&b_st, tform_T, dstXWorld, dstYWorld,
    srcXWorld, srcYWorld);
  b_st.site = &lh_emlrtRSI;
  imref2d_worldToIntrinsic(&b_st, srcXWorld, srcYWorld, dstXIntrinsic,
    dstYIntrinsic);
  b_st.site = &mh_emlrtRSI;
  c_st.site = &xh_emlrtRSI;
  validateattributes(&c_st, dstXIntrinsic);
  c_st.site = &yh_emlrtRSI;
  b_validateattributes(&c_st, dstYIntrinsic);
  emxFree_real_T(&r9);
  emxFree_real_T(&r8);
  emxFree_real_T(&srcYWorld);
  emxFree_real_T(&srcXWorld);
  emxFree_real_T(&dstYWorld);
  emxFree_real_T(&dstXWorld);
  for (i20 = 0; i20 < 2; i20++) {
    varargin_1[i20] = (uint32_T)dstXIntrinsic->size[i20];
  }

  for (i20 = 0; i20 < 2; i20++) {
    varargin_2[i20] = (uint32_T)dstYIntrinsic->size[i20];
  }

  p = false;
  b_p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(varargin_1[i] == varargin_2[i])) {
      b_p = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  c_st.site = &ai_emlrtRSI;
  if (!!p) {
  } else {
    y = NULL;
    m24 = emlrtCreateCharArray(2, iv90);
    for (nm1d2 = 0; nm1d2 < 34; nm1d2++) {
      cv133[nm1d2] = cv134[nm1d2];
    }

    emlrtInitCharArrayR2013a(&c_st, 34, m24, cv133);
    emlrtAssign(&y, m24);
    d_st.site = &mj_emlrtRSI;
    error(&d_st, b_message(&d_st, y, &u_emlrtMCI), &u_emlrtMCI);
  }

  b_emxInit_real_T(&c_st, &c_inputImage, 3, &lb_emlrtRTEI, true);
  c_st.site = &bi_emlrtRSI;
  i20 = c_inputImage->size[0] * c_inputImage->size[1] * c_inputImage->size[2];
  c_inputImage->size[0] = 111;
  c_inputImage->size[1] = 111;
  c_inputImage->size[2] = 3;
  emxEnsureCapacity(&c_st, (emxArray__common *)c_inputImage, i20, (int32_T)
                    sizeof(real_T), &lb_emlrtRTEI);
  for (i20 = 0; i20 < 36963; i20++) {
    c_inputImage->data[i20] = 0.0;
  }

  emxInit_real_T(&c_st, &r10, 2, &lb_emlrtRTEI, true);
  for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
    for (i20 = 0; i20 < 105; i20++) {
      for (i = 0; i < 105; i++) {
        d_inputImage[i + 105 * i20] = b_inputImage[(i + 105 * i20) + 11025 *
          nm1d2];
      }
    }

    padarray(&c_st, d_inputImage, r10);
    if (!b9) {
      for (i = 0; i < 2; i++) {
        iv91[i] = 111;
      }

      b9 = true;
    }

    emlrtSubAssignSizeCheckR2012b(iv91, 2, *(int32_T (*)[2])r10->size, 2,
      &w_emlrtECI, &c_st);
    for (i20 = 0; i20 < 111; i20++) {
      for (i = 0; i < 111; i++) {
        c_inputImage->data[(i + c_inputImage->size[0] * i20) +
          c_inputImage->size[0] * c_inputImage->size[1] * nm1d2] = r10->data[i +
          111 * i20];
      }
    }
  }

  emxFree_real_T(&r10);
  i20 = dstXIntrinsic->size[0] * dstXIntrinsic->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)dstXIntrinsic, i20, (int32_T)
                    sizeof(real_T), &lb_emlrtRTEI);
  i = dstXIntrinsic->size[0];
  nm1d2 = dstXIntrinsic->size[1];
  i *= nm1d2;
  for (i20 = 0; i20 < i; i20++) {
    dstXIntrinsic->data[i20] = (dstXIntrinsic->data[i20] + 3.0) - 1.0;
  }

  c_st.site = &ci_emlrtRSI;
  i20 = outputImage->size[0] * outputImage->size[1] * outputImage->size[2];
  outputImage->size[0] = dstXIntrinsic->size[0];
  outputImage->size[1] = dstXIntrinsic->size[1];
  outputImage->size[2] = 3;
  emxEnsureCapacity(&c_st, (emxArray__common *)outputImage, i20, (int32_T)sizeof
                    (real_T), &mb_emlrtRTEI);
  d_st.site = &di_emlrtRSI;
  i20 = dstYIntrinsic->size[0] * dstYIntrinsic->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)dstYIntrinsic, i20, (int32_T)
                    sizeof(real_T), &lb_emlrtRTEI);
  i = dstYIntrinsic->size[0];
  nm1d2 = dstYIntrinsic->size[1];
  i *= nm1d2;
  for (i20 = 0; i20 < i; i20++) {
    dstYIntrinsic->data[i20] = (dstYIntrinsic->data[i20] + 3.0) - 1.0;
  }

  for (nm1d2 = 0; nm1d2 < 3; nm1d2++) {
    fillValues[nm1d2] = 0.0;
  }

  for (i20 = 0; i20 < 3; i20++) {
    e_inputImage[i20] = c_inputImage->size[i20];
  }

  for (i20 = 0; i20 < 3; i20++) {
    b_outputImage[i20] = outputImage->size[i20];
  }

  remaptbb_real64(&c_inputImage->data[0], e_inputImage, 3.0,
                  &dstYIntrinsic->data[0], &dstXIntrinsic->data[0], 2,
                  fillValues, &outputImage->data[0], b_outputImage, (real_T)
                  (outputImage->size[0] * outputImage->size[1] * 3));
  emxFree_real_T(&c_inputImage);
  emxFree_real_T(&dstYIntrinsic);
  emxFree_real_T(&dstXIntrinsic);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (imwarp.c) */

/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "SystemCore.h"
#include "faceSwapLive_emxutil.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo ib_emlrtRSI = { 364, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo jb_emlrtRSI = { 1, "ColorSpaceConverter",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+visioncodegen/ColorSpaceConverter.p"
};

static emlrtRSInfo lb_emlrtRSI = { 335, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo mb_emlrtRSI = { 353, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtMCInfo b_emlrtMCI = { 1, 1, "SystemCore",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtRTEInfo n_emlrtRTEI = { 84, 13, "cascadeClassifierBuildable",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/+internal/+buildable/cascadeClassifierBuildable.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 1, 13, "SystemCore",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"
};

static emlrtDCInfo d_emlrtDCI = { 84, 44, "cascadeClassifierBuildable",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/+internal/+buildable/cascadeClassifierBuildable.m",
  4 };

/* Function Definitions */
void SystemCore_step(faceSwapLiveStackData *SD, const emlrtStack *sp,
                     vision_CascadeObjectDetector_10 *obj, const uint8_T
                     varargin_1[307440], emxArray_real_T *varargout_1)
{
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 45 };

  const mxArray *m6;
  char_T cv14[45];
  int32_T i;
  static const char_T cv15[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 4 };

  char_T cv16[4];
  static const char_T cv17[4] = { 's', 't', 'e', 'p' };

  vision_CascadeObjectDetector_10 *b_obj;
  const mxArray *c_y;
  static const int32_T iv17[2] = { 1, 51 };

  char_T cv18[51];
  static const char_T cv19[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv18[2] = { 1, 5 };

  char_T cv20[5];
  static const char_T cv21[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i3;
  static const int16_T inputSize[8] = { 240, 427, 3, 1, 1, 1, 1, 1 };

  c_visioncodegen_ColorSpaceConve *c_obj;
  static const uint16_T uv0[3] = { 19595U, 38470U, 7471U };

  boolean_T exitg1;
  static const int16_T iv19[8] = { 240, 427, 3, 1, 1, 1, 1, 1 };

  const mxArray *e_y;
  static const int32_T iv20[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv21[2] = { 1, 4 };

  const mxArray *g_y;
  static const int32_T iv22[2] = { 1, 51 };

  const mxArray *h_y;
  static const int32_T iv23[2] = { 1, 5 };

  vision_ColorSpaceConverter_0 *d_obj;
  uint32_T MergeThreshold;
  void * ptrObj;
  real_T ScaleFactor;
  real_T d0;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  uint8_T Iu8_gray[102480];
  emxArray_int32_T *bboxes_;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv15);
    for (i = 0; i < 45; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m6, cv14);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv16);
    for (i = 0; i < 4; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m6, cv16);
    emlrtAssign(&b_y, m6);
    st.site = &cb_emlrtRSI;
    error(&st, message(&st, y, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    b_st.site = &cb_emlrtRSI;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m6 = emlrtCreateCharArray(2, iv17);
      for (i = 0; i < 51; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m6, cv18);
      emlrtAssign(&c_y, m6);
      d_y = NULL;
      m6 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 5; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m6, cv20);
      emlrtAssign(&d_y, m6);
      c_st.site = &cb_emlrtRSI;
      error(&c_st, message(&c_st, c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    b_obj->isInitialized = true;
    c_st.site = &cb_emlrtRSI;
    for (i3 = 0; i3 < 8; i3++) {
      b_obj->inputVarSize1[i3] = (uint32_T)inputSize[i3];
    }

    c_st.site = &cb_emlrtRSI;
    d_st.site = &ib_emlrtRSI;
    c_obj = &b_obj->pColorSpaceConverterCG;
    e_st.site = &jb_emlrtRSI;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.isInitialized = false;
    b_obj->pColorSpaceConverterCG.isReleased = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    e_st.site = &jb_emlrtRSI;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    e_st.site = &jb_emlrtRSI;

    /* System object Constructor function: vision.ColorSpaceConverter */
    c_obj->cSFunObject.S0_isInitialized = false;
    c_obj->cSFunObject.S1_isReleased = false;
    for (i = 0; i < 3; i++) {
      c_obj->cSFunObject.P0_COEFF_RTP[i] = uv0[i];
    }

    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv19[i]) {
      for (i3 = 0; i3 < 8; i3++) {
        b_obj->inputVarSize1[i3] = (uint32_T)inputSize[i3];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  b_st.site = &lb_emlrtRSI;
  if (!b_obj->pColorSpaceConverterCG.isReleased) {
  } else {
    e_y = NULL;
    m6 = emlrtCreateCharArray(2, iv20);
    for (i = 0; i < 45; i++) {
      cv14[i] = cv15[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 45, m6, cv14);
    emlrtAssign(&e_y, m6);
    f_y = NULL;
    m6 = emlrtCreateCharArray(2, iv21);
    for (i = 0; i < 4; i++) {
      cv16[i] = cv17[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 4, m6, cv16);
    emlrtAssign(&f_y, m6);
    c_st.site = &cb_emlrtRSI;
    error(&c_st, message(&c_st, e_y, f_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  if (!b_obj->pColorSpaceConverterCG.isInitialized) {
    c_st.site = &cb_emlrtRSI;
    d_st.site = &cb_emlrtRSI;
    if (!b_obj->pColorSpaceConverterCG.isInitialized) {
    } else {
      g_y = NULL;
      m6 = emlrtCreateCharArray(2, iv22);
      for (i = 0; i < 51; i++) {
        cv18[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&d_st, 51, m6, cv18);
      emlrtAssign(&g_y, m6);
      h_y = NULL;
      m6 = emlrtCreateCharArray(2, iv23);
      for (i = 0; i < 5; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(&d_st, 5, m6, cv20);
      emlrtAssign(&h_y, m6);
      e_st.site = &cb_emlrtRSI;
      error(&e_st, message(&e_st, g_y, h_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    b_obj->pColorSpaceConverterCG.isInitialized = true;
  }

  d_obj = &b_obj->pColorSpaceConverterCG.cSFunObject;

  /* System object Outputs function: vision.ColorSpaceConverter */
  for (i = 0; i < 102480; i++) {
    MergeThreshold = ((uint32_T)varargin_1[i] * d_obj->P0_COEFF_RTP[0U] +
                      (uint32_T)varargin_1[102480 + i] * d_obj->P0_COEFF_RTP[1U])
      + (uint32_T)varargin_1[204960 + i] * d_obj->P0_COEFF_RTP[2U];
    MergeThreshold = (MergeThreshold + 32768U) >> 16;
    SD->f0.Iu8_gray[i] = (uint8_T)MergeThreshold;
  }

  b_st.site = &mb_emlrtRSI;
  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  d0 = muDoubleScalarRound(b_obj->MergeThreshold);
  if (d0 < 4.294967296E+9) {
    if (d0 >= 0.0) {
      MergeThreshold = (uint32_T)d0;
    } else {
      MergeThreshold = 0U;
    }
  } else if (d0 >= 4.294967296E+9) {
    MergeThreshold = MAX_uint32_T;
  } else {
    MergeThreshold = 0U;
  }

  for (i3 = 0; i3 < 2; i3++) {
    MinSize_[i3] = 0;
    MaxSize_[i3] = 0;
  }

  ptrDetectedObj = NULL;
  for (i3 = 0; i3 < 240; i3++) {
    for (i = 0; i < 427; i++) {
      Iu8_gray[i + 427 * i3] = SD->f0.Iu8_gray[i3 + 240 * i];
    }
  }

  b_emxInit_int32_T(&b_st, &bboxes_, 2, &n_emlrtRTEI, true);
  i = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj, Iu8_gray, 240,
    427, ScaleFactor, MergeThreshold, MinSize_, MaxSize_);
  emlrtNonNegativeCheckFastR2012b(i, &d_emlrtDCI, &b_st);
  i3 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = i;
  bboxes_->size[1] = 4;
  emxEnsureCapacity(&b_st, (emxArray__common *)bboxes_, i3, (int32_T)sizeof
                    (int32_T), &n_emlrtRTEI);
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i3 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)varargout_1, i3, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  i = bboxes_->size[0] * bboxes_->size[1];
  for (i3 = 0; i3 < i; i3++) {
    varargout_1->data[i3] = bboxes_->data[i3];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_SystemCore_step(const emlrtStack *sp, vision_CascadeObjectDetector_11
  *obj, const uint8_T varargin_1_data[], const int32_T varargin_1_size[2],
  emxArray_real_T *varargout_1)
{
  const mxArray *y;
  static const int32_T iv30[2] = { 1, 45 };

  const mxArray *m11;
  char_T cv33[45];
  int32_T i;
  static const char_T cv34[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv31[2] = { 1, 4 };

  char_T cv35[4];
  static const char_T cv36[4] = { 's', 't', 'e', 'p' };

  vision_CascadeObjectDetector_11 *b_obj;
  const mxArray *c_y;
  static const int32_T iv32[2] = { 1, 51 };

  char_T cv37[51];
  static const char_T cv38[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv33[2] = { 1, 5 };

  char_T cv39[5];
  static const char_T cv40[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i4;
  uint8_T inputSize[8];
  boolean_T exitg1;
  int32_T loop_ub;
  int32_T i5;
  uint8_T Iu8_grayT_data[40000];
  void * ptrObj;
  real_T ScaleFactor;
  real_T d1;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  uint8_T I_data[40000];
  emxArray_int32_T *bboxes_;
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
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m11 = emlrtCreateCharArray(2, iv30);
    for (i = 0; i < 45; i++) {
      cv33[i] = cv34[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m11, cv33);
    emlrtAssign(&y, m11);
    b_y = NULL;
    m11 = emlrtCreateCharArray(2, iv31);
    for (i = 0; i < 4; i++) {
      cv35[i] = cv36[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m11, cv35);
    emlrtAssign(&b_y, m11);
    st.site = &cb_emlrtRSI;
    error(&st, message(&st, y, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    b_st.site = &cb_emlrtRSI;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m11 = emlrtCreateCharArray(2, iv32);
      for (i = 0; i < 51; i++) {
        cv37[i] = cv38[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m11, cv37);
      emlrtAssign(&c_y, m11);
      d_y = NULL;
      m11 = emlrtCreateCharArray(2, iv33);
      for (i = 0; i < 5; i++) {
        cv39[i] = cv40[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m11, cv39);
      emlrtAssign(&d_y, m11);
      c_st.site = &cb_emlrtRSI;
      error(&c_st, message(&c_st, c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    b_obj->isInitialized = true;
    c_st.site = &cb_emlrtRSI;
    for (i4 = 0; i4 < 2; i4++) {
      b_obj->inputVarSize1[i4] = (uint32_T)varargin_1_size[i4];
    }

    for (i4 = 0; i4 < 6; i4++) {
      b_obj->inputVarSize1[i4 + 2] = 1U;
    }

    c_st.site = &cb_emlrtRSI;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  for (i4 = 0; i4 < 2; i4++) {
    inputSize[i4] = (uint8_T)varargin_1_size[i4];
  }

  for (i4 = 0; i4 < 6; i4++) {
    inputSize[i4 + 2] = 1;
  }

  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != inputSize[i]) {
      for (i4 = 0; i4 < 8; i4++) {
        b_obj->inputVarSize1[i4] = inputSize[i4];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  i = varargin_1_size[0];
  for (i4 = 0; i4 < i; i4++) {
    loop_ub = varargin_1_size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      Iu8_grayT_data[i5 + varargin_1_size[1] * i4] = varargin_1_data[i4 +
        varargin_1_size[0] * i5];
    }
  }

  b_st.site = &mb_emlrtRSI;
  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  d1 = muDoubleScalarRound(b_obj->MergeThreshold);
  if (d1 < 4.294967296E+9) {
    if (d1 >= 0.0) {
      MergeThreshold = (uint32_T)d1;
    } else {
      MergeThreshold = 0U;
    }
  } else if (d1 >= 4.294967296E+9) {
    MergeThreshold = MAX_uint32_T;
  } else {
    MergeThreshold = 0U;
  }

  for (i4 = 0; i4 < 2; i4++) {
    MinSize_[i4] = 0;
    MaxSize_[i4] = 0;
  }

  ptrDetectedObj = NULL;
  i = varargin_1_size[1] * varargin_1_size[0];
  for (i4 = 0; i4 < i; i4++) {
    I_data[i4] = Iu8_grayT_data[i4];
  }

  b_emxInit_int32_T(&b_st, &bboxes_, 2, &n_emlrtRTEI, true);
  i = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj, &I_data[0],
    varargin_1_size[0], varargin_1_size[1], ScaleFactor, MergeThreshold,
    MinSize_, MaxSize_);
  emlrtNonNegativeCheckFastR2012b(i, &d_emlrtDCI, &b_st);
  i4 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = i;
  bboxes_->size[1] = 4;
  emxEnsureCapacity(&b_st, (emxArray__common *)bboxes_, i4, (int32_T)sizeof
                    (int32_T), &n_emlrtRTEI);
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i4 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)varargout_1, i4, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  i = bboxes_->size[0] * bboxes_->size[1];
  for (i4 = 0; i4 < i; i4++) {
    varargout_1->data[i4] = bboxes_->data[i4];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_SystemCore_step(const emlrtStack *sp, vision_CascadeObjectDetector_12
  *obj, const uint8_T varargin_1_data[], const int32_T varargin_1_size[2],
  emxArray_real_T *varargout_1)
{
  const mxArray *y;
  static const int32_T iv34[2] = { 1, 45 };

  const mxArray *m12;
  char_T cv41[45];
  int32_T i;
  static const char_T cv42[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv35[2] = { 1, 4 };

  char_T cv43[4];
  static const char_T cv44[4] = { 's', 't', 'e', 'p' };

  vision_CascadeObjectDetector_12 *b_obj;
  const mxArray *c_y;
  static const int32_T iv36[2] = { 1, 51 };

  char_T cv45[51];
  static const char_T cv46[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv37[2] = { 1, 5 };

  char_T cv47[5];
  static const char_T cv48[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i6;
  uint8_T inputSize[8];
  boolean_T exitg1;
  int32_T loop_ub;
  int32_T i7;
  uint8_T Iu8_grayT_data[40000];
  void * ptrObj;
  real_T ScaleFactor;
  real_T d2;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  uint8_T I_data[40000];
  emxArray_int32_T *bboxes_;
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
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m12 = emlrtCreateCharArray(2, iv34);
    for (i = 0; i < 45; i++) {
      cv41[i] = cv42[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m12, cv41);
    emlrtAssign(&y, m12);
    b_y = NULL;
    m12 = emlrtCreateCharArray(2, iv35);
    for (i = 0; i < 4; i++) {
      cv43[i] = cv44[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m12, cv43);
    emlrtAssign(&b_y, m12);
    st.site = &cb_emlrtRSI;
    error(&st, message(&st, y, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    b_st.site = &cb_emlrtRSI;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m12 = emlrtCreateCharArray(2, iv36);
      for (i = 0; i < 51; i++) {
        cv45[i] = cv46[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m12, cv45);
      emlrtAssign(&c_y, m12);
      d_y = NULL;
      m12 = emlrtCreateCharArray(2, iv37);
      for (i = 0; i < 5; i++) {
        cv47[i] = cv48[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m12, cv47);
      emlrtAssign(&d_y, m12);
      c_st.site = &cb_emlrtRSI;
      error(&c_st, message(&c_st, c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    b_obj->isInitialized = true;
    c_st.site = &cb_emlrtRSI;
    for (i6 = 0; i6 < 2; i6++) {
      b_obj->inputVarSize1[i6] = (uint32_T)varargin_1_size[i6];
    }

    for (i6 = 0; i6 < 6; i6++) {
      b_obj->inputVarSize1[i6 + 2] = 1U;
    }

    c_st.site = &cb_emlrtRSI;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  for (i6 = 0; i6 < 2; i6++) {
    inputSize[i6] = (uint8_T)varargin_1_size[i6];
  }

  for (i6 = 0; i6 < 6; i6++) {
    inputSize[i6 + 2] = 1;
  }

  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != inputSize[i]) {
      for (i6 = 0; i6 < 8; i6++) {
        b_obj->inputVarSize1[i6] = inputSize[i6];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  i = varargin_1_size[0];
  for (i6 = 0; i6 < i; i6++) {
    loop_ub = varargin_1_size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      Iu8_grayT_data[i7 + varargin_1_size[1] * i6] = varargin_1_data[i6 +
        varargin_1_size[0] * i7];
    }
  }

  b_st.site = &mb_emlrtRSI;
  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  d2 = muDoubleScalarRound(b_obj->MergeThreshold);
  if (d2 < 4.294967296E+9) {
    if (d2 >= 0.0) {
      MergeThreshold = (uint32_T)d2;
    } else {
      MergeThreshold = 0U;
    }
  } else if (d2 >= 4.294967296E+9) {
    MergeThreshold = MAX_uint32_T;
  } else {
    MergeThreshold = 0U;
  }

  for (i6 = 0; i6 < 2; i6++) {
    MinSize_[i6] = 0;
    MaxSize_[i6] = 0;
  }

  ptrDetectedObj = NULL;
  i = varargin_1_size[1] * varargin_1_size[0];
  for (i6 = 0; i6 < i; i6++) {
    I_data[i6] = Iu8_grayT_data[i6];
  }

  b_emxInit_int32_T(&b_st, &bboxes_, 2, &n_emlrtRTEI, true);
  i = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj, &I_data[0],
    varargin_1_size[0], varargin_1_size[1], ScaleFactor, MergeThreshold,
    MinSize_, MaxSize_);
  emlrtNonNegativeCheckFastR2012b(i, &d_emlrtDCI, &b_st);
  i6 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = i;
  bboxes_->size[1] = 4;
  emxEnsureCapacity(&b_st, (emxArray__common *)bboxes_, i6, (int32_T)sizeof
                    (int32_T), &n_emlrtRTEI);
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i6 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)varargout_1, i6, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  i = bboxes_->size[0] * bboxes_->size[1];
  for (i6 = 0; i6 < i; i6++) {
    varargout_1->data[i6] = bboxes_->data[i6];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_SystemCore_step(const emlrtStack *sp, vision_CascadeObjectDetector_13
  *obj, const uint8_T varargin_1_data[], const int32_T varargin_1_size[2],
  emxArray_real_T *varargout_1)
{
  const mxArray *y;
  static const int32_T iv38[2] = { 1, 45 };

  const mxArray *m13;
  char_T cv49[45];
  int32_T i;
  static const char_T cv50[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv39[2] = { 1, 4 };

  char_T cv51[4];
  static const char_T cv52[4] = { 's', 't', 'e', 'p' };

  vision_CascadeObjectDetector_13 *b_obj;
  const mxArray *c_y;
  static const int32_T iv40[2] = { 1, 51 };

  char_T cv53[51];
  static const char_T cv54[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv41[2] = { 1, 5 };

  char_T cv55[5];
  static const char_T cv56[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i8;
  uint8_T inputSize[8];
  boolean_T exitg1;
  int32_T loop_ub;
  int32_T i9;
  uint8_T Iu8_grayT_data[40000];
  void * ptrObj;
  real_T ScaleFactor;
  real_T d3;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  uint8_T I_data[40000];
  emxArray_int32_T *bboxes_;
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
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m13 = emlrtCreateCharArray(2, iv38);
    for (i = 0; i < 45; i++) {
      cv49[i] = cv50[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m13, cv49);
    emlrtAssign(&y, m13);
    b_y = NULL;
    m13 = emlrtCreateCharArray(2, iv39);
    for (i = 0; i < 4; i++) {
      cv51[i] = cv52[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m13, cv51);
    emlrtAssign(&b_y, m13);
    st.site = &cb_emlrtRSI;
    error(&st, message(&st, y, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    b_st.site = &cb_emlrtRSI;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m13 = emlrtCreateCharArray(2, iv40);
      for (i = 0; i < 51; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m13, cv53);
      emlrtAssign(&c_y, m13);
      d_y = NULL;
      m13 = emlrtCreateCharArray(2, iv41);
      for (i = 0; i < 5; i++) {
        cv55[i] = cv56[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m13, cv55);
      emlrtAssign(&d_y, m13);
      c_st.site = &cb_emlrtRSI;
      error(&c_st, message(&c_st, c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    b_obj->isInitialized = true;
    c_st.site = &cb_emlrtRSI;
    for (i8 = 0; i8 < 2; i8++) {
      b_obj->inputVarSize1[i8] = (uint32_T)varargin_1_size[i8];
    }

    for (i8 = 0; i8 < 6; i8++) {
      b_obj->inputVarSize1[i8 + 2] = 1U;
    }

    c_st.site = &cb_emlrtRSI;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  for (i8 = 0; i8 < 2; i8++) {
    inputSize[i8] = (uint8_T)varargin_1_size[i8];
  }

  for (i8 = 0; i8 < 6; i8++) {
    inputSize[i8 + 2] = 1;
  }

  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != inputSize[i]) {
      for (i8 = 0; i8 < 8; i8++) {
        b_obj->inputVarSize1[i8] = inputSize[i8];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  i = varargin_1_size[0];
  for (i8 = 0; i8 < i; i8++) {
    loop_ub = varargin_1_size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      Iu8_grayT_data[i9 + varargin_1_size[1] * i8] = varargin_1_data[i8 +
        varargin_1_size[0] * i9];
    }
  }

  b_st.site = &mb_emlrtRSI;
  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  d3 = muDoubleScalarRound(b_obj->MergeThreshold);
  if (d3 < 4.294967296E+9) {
    if (d3 >= 0.0) {
      MergeThreshold = (uint32_T)d3;
    } else {
      MergeThreshold = 0U;
    }
  } else if (d3 >= 4.294967296E+9) {
    MergeThreshold = MAX_uint32_T;
  } else {
    MergeThreshold = 0U;
  }

  for (i8 = 0; i8 < 2; i8++) {
    MinSize_[i8] = 0;
    MaxSize_[i8] = 0;
  }

  ptrDetectedObj = NULL;
  i = varargin_1_size[1] * varargin_1_size[0];
  for (i8 = 0; i8 < i; i8++) {
    I_data[i8] = Iu8_grayT_data[i8];
  }

  b_emxInit_int32_T(&b_st, &bboxes_, 2, &n_emlrtRTEI, true);
  i = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj, &I_data[0],
    varargin_1_size[0], varargin_1_size[1], ScaleFactor, MergeThreshold,
    MinSize_, MaxSize_);
  emlrtNonNegativeCheckFastR2012b(i, &d_emlrtDCI, &b_st);
  i8 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = i;
  bboxes_->size[1] = 4;
  emxEnsureCapacity(&b_st, (emxArray__common *)bboxes_, i8, (int32_T)sizeof
                    (int32_T), &n_emlrtRTEI);
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i8 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)varargout_1, i8, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  i = bboxes_->size[0] * bboxes_->size[1];
  for (i8 = 0; i8 < i; i8++) {
    varargout_1->data[i8] = bboxes_->data[i8];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_SystemCore_step(const emlrtStack *sp, vision_CascadeObjectDetector_14
  *obj, const uint8_T varargin_1_data[], const int32_T varargin_1_size[2],
  emxArray_real_T *varargout_1)
{
  const mxArray *y;
  static const int32_T iv42[2] = { 1, 45 };

  const mxArray *m14;
  char_T cv57[45];
  int32_T i;
  static const char_T cv58[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv43[2] = { 1, 4 };

  char_T cv59[4];
  static const char_T cv60[4] = { 's', 't', 'e', 'p' };

  vision_CascadeObjectDetector_14 *b_obj;
  const mxArray *c_y;
  static const int32_T iv44[2] = { 1, 51 };

  char_T cv61[51];
  static const char_T cv62[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv45[2] = { 1, 5 };

  char_T cv63[5];
  static const char_T cv64[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T i10;
  uint8_T inputSize[8];
  boolean_T exitg1;
  int32_T loop_ub;
  int32_T i11;
  uint8_T Iu8_grayT_data[40000];
  void * ptrObj;
  real_T ScaleFactor;
  real_T d4;
  uint32_T MergeThreshold;
  int32_T MinSize_[2];
  int32_T MaxSize_[2];
  void * ptrDetectedObj;
  uint8_T I_data[40000];
  emxArray_int32_T *bboxes_;
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
  if (!obj->isReleased) {
  } else {
    y = NULL;
    m14 = emlrtCreateCharArray(2, iv42);
    for (i = 0; i < 45; i++) {
      cv57[i] = cv58[i];
    }

    emlrtInitCharArrayR2013a(sp, 45, m14, cv57);
    emlrtAssign(&y, m14);
    b_y = NULL;
    m14 = emlrtCreateCharArray(2, iv43);
    for (i = 0; i < 4; i++) {
      cv59[i] = cv60[i];
    }

    emlrtInitCharArrayR2013a(sp, 4, m14, cv59);
    emlrtAssign(&b_y, m14);
    st.site = &cb_emlrtRSI;
    error(&st, message(&st, y, b_y, &b_emlrtMCI), &b_emlrtMCI);
  }

  if (!obj->isInitialized) {
    st.site = &cb_emlrtRSI;
    b_obj = obj;
    b_st.site = &cb_emlrtRSI;
    if (!b_obj->isInitialized) {
    } else {
      c_y = NULL;
      m14 = emlrtCreateCharArray(2, iv44);
      for (i = 0; i < 51; i++) {
        cv61[i] = cv62[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 51, m14, cv61);
      emlrtAssign(&c_y, m14);
      d_y = NULL;
      m14 = emlrtCreateCharArray(2, iv45);
      for (i = 0; i < 5; i++) {
        cv63[i] = cv64[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 5, m14, cv63);
      emlrtAssign(&d_y, m14);
      c_st.site = &cb_emlrtRSI;
      error(&c_st, message(&c_st, c_y, d_y, &b_emlrtMCI), &b_emlrtMCI);
    }

    b_obj->isInitialized = true;
    c_st.site = &cb_emlrtRSI;
    for (i10 = 0; i10 < 2; i10++) {
      b_obj->inputVarSize1[i10] = (uint32_T)varargin_1_size[i10];
    }

    for (i10 = 0; i10 < 6; i10++) {
      b_obj->inputVarSize1[i10 + 2] = 1U;
    }

    c_st.site = &cb_emlrtRSI;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->pColorSpaceConverterCG.matlabCodegenIsDeleted = false;
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = false;
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  for (i10 = 0; i10 < 2; i10++) {
    inputSize[i10] = (uint8_T)varargin_1_size[i10];
  }

  for (i10 = 0; i10 < 6; i10++) {
    inputSize[i10 + 2] = 1;
  }

  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != inputSize[i]) {
      for (i10 = 0; i10 < 8; i10++) {
        b_obj->inputVarSize1[i10] = inputSize[i10];
      }

      exitg1 = true;
    } else {
      i++;
    }
  }

  st.site = &cb_emlrtRSI;
  b_obj = obj;
  i = varargin_1_size[0];
  for (i10 = 0; i10 < i; i10++) {
    loop_ub = varargin_1_size[1];
    for (i11 = 0; i11 < loop_ub; i11++) {
      Iu8_grayT_data[i11 + varargin_1_size[1] * i10] = varargin_1_data[i10 +
        varargin_1_size[0] * i11];
    }
  }

  b_st.site = &mb_emlrtRSI;
  ptrObj = b_obj->pCascadeClassifier;
  ScaleFactor = b_obj->ScaleFactor;
  d4 = muDoubleScalarRound(b_obj->MergeThreshold);
  if (d4 < 4.294967296E+9) {
    if (d4 >= 0.0) {
      MergeThreshold = (uint32_T)d4;
    } else {
      MergeThreshold = 0U;
    }
  } else if (d4 >= 4.294967296E+9) {
    MergeThreshold = MAX_uint32_T;
  } else {
    MergeThreshold = 0U;
  }

  for (i10 = 0; i10 < 2; i10++) {
    MinSize_[i10] = 0;
    MaxSize_[i10] = 0;
  }

  ptrDetectedObj = NULL;
  i = varargin_1_size[1] * varargin_1_size[0];
  for (i10 = 0; i10 < i; i10++) {
    I_data[i10] = Iu8_grayT_data[i10];
  }

  b_emxInit_int32_T(&b_st, &bboxes_, 2, &n_emlrtRTEI, true);
  i = cascadeClassifier_detectMultiScale(ptrObj, &ptrDetectedObj, &I_data[0],
    varargin_1_size[0], varargin_1_size[1], ScaleFactor, MergeThreshold,
    MinSize_, MaxSize_);
  emlrtNonNegativeCheckFastR2012b(i, &d_emlrtDCI, &b_st);
  i10 = bboxes_->size[0] * bboxes_->size[1];
  bboxes_->size[0] = i;
  bboxes_->size[1] = 4;
  emxEnsureCapacity(&b_st, (emxArray__common *)bboxes_, i10, (int32_T)sizeof
                    (int32_T), &n_emlrtRTEI);
  cascadeClassifier_assignOutputDeleteBbox(ptrDetectedObj, &bboxes_->data[0]);
  i10 = varargout_1->size[0] * varargout_1->size[1];
  varargout_1->size[0] = bboxes_->size[0];
  varargout_1->size[1] = bboxes_->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)varargout_1, i10, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  i = bboxes_->size[0] * bboxes_->size[1];
  for (i10 = 0; i10 < i; i10++) {
    varargout_1->data[i10] = bboxes_->data[i10];
  }

  emxFree_int32_T(&bboxes_);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SystemCore.c) */

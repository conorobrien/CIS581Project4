/*
 * imfilter.c
 *
 * Code generation for function 'imfilter'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "imfilter.h"
#include "faceSwapLive_emxutil.h"
#include "padarray.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRTEInfo bc_emlrtRTEI = { 1, 14, "imfilter",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/eml/imfilter.m" };

/* Function Definitions */
void b_imfilter(const emlrtStack *sp, const emxArray_real_T *varargin_1,
                emxArray_real_T *b)
{
  real_T finalSize[3];
  real_T pad[3];
  int32_T i50;
  int32_T loop_ub;
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  static const real_T dv15[25] = { 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
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
  finalSize[0] = varargin_1->size[0];
  pad[0] = 2.0;
  finalSize[1] = varargin_1->size[1];
  pad[1] = 2.0;
  finalSize[2] = 3.0;
  pad[2] = 0.0;
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    i50 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = varargin_1->size[0];
    b->size[1] = varargin_1->size[1];
    b->size[2] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b, i50, (int32_T)sizeof(real_T),
                      &bc_emlrtRTEI);
    loop_ub = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
    for (i50 = 0; i50 < loop_ub; i50++) {
      b->data[i50] = varargin_1->data[i50];
    }
  } else {
    b_emxInit_real_T(sp, &a, 3, &ac_emlrtRTEI, true);
    st.site = &qi_emlrtRSI;
    c_padarray(&st, varargin_1, pad, a);
    st.site = &pi_emlrtRSI;
    b_st.site = &yi_emlrtRSI;
    eml_li_find(&b_st, tmp_data, tmp_size);
    loop_ub = tmp_size[0];
    for (i50 = 0; i50 < loop_ub; i50++) {
      nonzero_h_data[i50] = dv15[tmp_data[i50] - 1];
    }

    b_st.site = &aj_emlrtRSI;
    densityFlag = false;
    if ((real_T)tmp_size[0] / 25.0 > 0.05) {
      densityFlag = true;
    }

    tooBig = true;
    i50 = eml_ndims_varsized(*(int32_T (*)[3])a->size);
    for (loop_ub = 0; loop_ub < i50; loop_ub++) {
      tooBig = false;
    }

    if (densityFlag && (!tooBig)) {
      densityFlag = true;
    } else {
      densityFlag = false;
    }

    c_st.site = &bj_emlrtRSI;
    i50 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = varargin_1->size[0];
    b->size[1] = varargin_1->size[1];
    b->size[2] = 3;
    emxEnsureCapacity(&c_st, (emxArray__common *)b, i50, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    if (densityFlag) {
      for (i50 = 0; i50 < 3; i50++) {
        padSize[i50] = a->size[i50];
      }

      for (i50 = 0; i50 < 2; i50++) {
        connDims[i50] = 5.0;
      }

      ippfilter_real64(&a->data[0], &b->data[0], finalSize, (real_T)
                       eml_ndims_varsized(*(int32_T (*)[3])a->size), padSize, h,
                       connDims, true, false);
    } else {
      for (i50 = 0; i50 < 3; i50++) {
        padSize[i50] = a->size[i50];
      }

      for (i50 = 0; i50 < 25; i50++) {
        conn[i50] = true;
      }

      for (i50 = 0; i50 < 2; i50++) {
        connDims[i50] = 5.0;
      }

      imfilter_real64(&a->data[0], &b->data[0], 3.0, finalSize, (real_T)
                      eml_ndims_varsized(*(int32_T (*)[3])a->size), padSize,
                      &nonzero_h_data[0], (real_T)tmp_size[0], conn, 2.0,
                      connDims, pad, 3.0, true, true);
    }

    emxFree_real_T(&a);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eml_li_find(const emlrtStack *sp, int32_T y_data[], int32_T y_size[1])
{
  int32_T k;
  int32_T i;
  const mxArray *y;
  const mxArray *m38;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  k = 0;
  for (i = 0; i < 25; i++) {
    k++;
  }

  if (k <= 25) {
  } else {
    y = NULL;
    m38 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&y, m38);
    st.site = &jj_emlrtRSI;
    error(&st, y, &hb_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  y_size[0] = k;
  k = 0;
  for (i = 0; i < 25; i++) {
    y_data[k] = i + 1;
    k++;
  }
}

int32_T eml_ndims_varsized(const int32_T sz[3])
{
  int32_T n;
  n = 3;
  while ((n > 2) && (sz[2] == 1)) {
    n = 2;
  }

  return n;
}

void imfilter(const emlrtStack *sp, const emxArray_real_T *varargin_1,
              emxArray_real_T *b)
{
  real_T finalSize[3];
  real_T pad[3];
  int32_T i25;
  int32_T loop_ub;
  emxArray_real_T *a;
  int32_T tmp_size[1];
  int32_T tmp_data[25];
  static const real_T dv12[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  real_T nonzero_h_data[25];
  boolean_T densityFlag;
  boolean_T tooBig;
  real_T padSize[3];
  real_T connDims[2];
  static const real_T h[25] = { 0.00390625, 0.015625, 0.0234375, 0.015625,
    0.00390625, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625, 0.0234375, 0.09375,
    0.140625, 0.09375, 0.0234375, 0.015625, 0.0625, 0.09375, 0.0625, 0.015625,
    0.00390625, 0.015625, 0.0234375, 0.015625, 0.00390625 };

  boolean_T conn[25];
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
  finalSize[0] = varargin_1->size[0];
  pad[0] = 2.0;
  finalSize[1] = varargin_1->size[1];
  pad[1] = 2.0;
  finalSize[2] = 3.0;
  pad[2] = 0.0;
  if ((varargin_1->size[0] == 0) || (varargin_1->size[1] == 0)) {
    i25 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = varargin_1->size[0];
    b->size[1] = varargin_1->size[1];
    b->size[2] = 3;
    emxEnsureCapacity(sp, (emxArray__common *)b, i25, (int32_T)sizeof(real_T),
                      &bc_emlrtRTEI);
    loop_ub = varargin_1->size[0] * varargin_1->size[1] * varargin_1->size[2];
    for (i25 = 0; i25 < loop_ub; i25++) {
      b->data[i25] = varargin_1->data[i25];
    }
  } else {
    b_emxInit_real_T(sp, &a, 3, &ac_emlrtRTEI, true);
    st.site = &qi_emlrtRSI;
    c_padarray(&st, varargin_1, pad, a);
    st.site = &pi_emlrtRSI;
    b_st.site = &yi_emlrtRSI;
    eml_li_find(&b_st, tmp_data, tmp_size);
    loop_ub = tmp_size[0];
    for (i25 = 0; i25 < loop_ub; i25++) {
      nonzero_h_data[i25] = dv12[tmp_data[i25] - 1];
    }

    b_st.site = &aj_emlrtRSI;
    densityFlag = false;
    if ((real_T)tmp_size[0] / 25.0 > 0.05) {
      densityFlag = true;
    }

    tooBig = true;
    i25 = eml_ndims_varsized(*(int32_T (*)[3])a->size);
    for (loop_ub = 0; loop_ub < i25; loop_ub++) {
      tooBig = false;
    }

    if (densityFlag && (!tooBig)) {
      densityFlag = true;
    } else {
      densityFlag = false;
    }

    c_st.site = &bj_emlrtRSI;
    i25 = b->size[0] * b->size[1] * b->size[2];
    b->size[0] = varargin_1->size[0];
    b->size[1] = varargin_1->size[1];
    b->size[2] = 3;
    emxEnsureCapacity(&c_st, (emxArray__common *)b, i25, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    if (densityFlag) {
      for (i25 = 0; i25 < 3; i25++) {
        padSize[i25] = a->size[i25];
      }

      for (i25 = 0; i25 < 2; i25++) {
        connDims[i25] = 5.0;
      }

      ippfilter_real64(&a->data[0], &b->data[0], finalSize, (real_T)
                       eml_ndims_varsized(*(int32_T (*)[3])a->size), padSize, h,
                       connDims, true, false);
    } else {
      for (i25 = 0; i25 < 3; i25++) {
        padSize[i25] = a->size[i25];
      }

      for (i25 = 0; i25 < 25; i25++) {
        conn[i25] = true;
      }

      for (i25 = 0; i25 < 2; i25++) {
        connDims[i25] = 5.0;
      }

      imfilter_real64(&a->data[0], &b->data[0], 3.0, finalSize, (real_T)
                      eml_ndims_varsized(*(int32_T (*)[3])a->size), padSize,
                      &nonzero_h_data[0], (real_T)tmp_size[0], conn, 2.0,
                      connDims, pad, 3.0, true, true);
    }

    emxFree_real_T(&a);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (imfilter.c) */

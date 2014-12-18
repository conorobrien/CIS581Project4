/*
 * projective2d.c
 *
 * Code generation for function 'projective2d'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "projective2d.h"
#include "faceSwapLive_emxutil.h"
#include "rdivide.h"
#include "inv.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo rh_emlrtRSI = { 208, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRSInfo sh_emlrtRSI = { 215, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRSInfo th_emlrtRSI = { 221, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRSInfo uh_emlrtRSI = { 222, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRSInfo vh_emlrtRSI = { 287, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 170, 30, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 219, 17, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtECInfo x_emlrtECI = { 2, 217, 21, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtECInfo y_emlrtECI = { 2, 218, 21, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

static emlrtECInfo ab_emlrtECI = { 2, 219, 21, "projective2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/projective2d.m" };

/* Function Declarations */
static const mxArray *d_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *d_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m48;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m48, 4, pArrays, "message", true,
    location);
}

void c_projective2d_transformPointsI(const emlrtStack *sp, const real_T self_T[9],
  const emxArray_real_T *varargin_1, const emxArray_real_T *varargin_2,
  emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  uint32_T b_varargin_1[2];
  int32_T i;
  uint32_T b_varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv101[2] = { 1, 43 };

  const mxArray *m28;
  char_T cv146[43];
  static const char_T cv147[43] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'g', 'e',
    'o', 't', 'r', 'a', 'n', 's', ':', 't', 'r', 'a', 'n', 's', 'f', 'o', 'r',
    'm', 'P', 'o', 'i', 'n', 't', 's', 'S', 'i', 'z', 'e', 'M', 'i', 's', 'm',
    'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv102[2] = { 1, 22 };

  char_T cv148[22];
  static const char_T cv149[22] = { 't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm',
    'P', 'o', 'i', 'n', 't', 's', 'I', 'n', 'v', 'e', 'r', 's', 'e' };

  const mxArray *c_y;
  const mxArray *d_y;
  emxArray_real_T *r11;
  real_T M[9];
  int32_T loop_ub;
  emxArray_real_T *r12;
  int32_T iv103[2];
  int32_T w[2];
  emxArray_real_T *r13;
  emxArray_real_T *r14;
  emxArray_real_T *b_w;
  emxArray_real_T *r15;
  emxArray_real_T *r16;
  emxArray_real_T *r17;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 2; i++) {
    b_varargin_1[i] = (uint32_T)varargin_1->size[i];
  }

  for (i = 0; i < 2; i++) {
    b_varargin_2[i] = (uint32_T)varargin_2->size[i];
  }

  p = false;
  b_p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(b_varargin_1[i] == b_varargin_2[i])) {
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

  st.site = &rh_emlrtRSI;
  if (!!p) {
  } else {
    y = NULL;
    m28 = emlrtCreateCharArray(2, iv101);
    for (i = 0; i < 43; i++) {
      cv146[i] = cv147[i];
    }

    emlrtInitCharArrayR2013a(&st, 43, m28, cv146);
    emlrtAssign(&y, m28);
    b_y = NULL;
    m28 = emlrtCreateCharArray(2, iv102);
    for (i = 0; i < 22; i++) {
      cv148[i] = cv149[i];
    }

    emlrtInitCharArrayR2013a(&st, 22, m28, cv148);
    emlrtAssign(&b_y, m28);
    c_y = NULL;
    m28 = emlrtCreateString1('X');
    emlrtAssign(&c_y, m28);
    d_y = NULL;
    m28 = emlrtCreateString1('Y');
    emlrtAssign(&d_y, m28);
    b_st.site = &mj_emlrtRSI;
    error(&b_st, d_message(&b_st, y, b_y, c_y, d_y, &u_emlrtMCI), &u_emlrtMCI);
  }

  emxInit_real_T(&st, &r11, 2, &pb_emlrtRTEI, true);
  st.site = &sh_emlrtRSI;
  b_st.site = &vh_emlrtRSI;
  inv(&b_st, self_T, M);
  i = r11->size[0] * r11->size[1];
  r11->size[0] = varargin_1->size[0];
  r11->size[1] = varargin_1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r11, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r11->data[i] = M[0] * varargin_1->data[i];
  }

  emxInit_real_T(sp, &r12, 2, &pb_emlrtRTEI, true);
  i = r12->size[0] * r12->size[1];
  r12->size[0] = varargin_2->size[0];
  r12->size[1] = varargin_2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r12, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = varargin_2->size[0] * varargin_2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r12->data[i] = M[1] * varargin_2->data[i];
  }

  for (i = 0; i < 2; i++) {
    iv103[i] = r11->size[i];
  }

  for (i = 0; i < 2; i++) {
    w[i] = r12->size[i];
  }

  emxInit_real_T(sp, &r13, 2, &pb_emlrtRTEI, true);
  emlrtSizeEqCheck2DFastR2012b(iv103, w, &x_emlrtECI, sp);
  i = r13->size[0] * r13->size[1];
  r13->size[0] = varargin_1->size[0];
  r13->size[1] = varargin_1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r13, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    r13->data[i] = M[3] * varargin_1->data[i];
  }

  emxInit_real_T(sp, &r14, 2, &pb_emlrtRTEI, true);
  i = r14->size[0] * r14->size[1];
  r14->size[0] = varargin_2->size[0];
  r14->size[1] = varargin_2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r14, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = varargin_2->size[0] * varargin_2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r14->data[i] = M[4] * varargin_2->data[i];
  }

  for (i = 0; i < 2; i++) {
    iv103[i] = r13->size[i];
  }

  for (i = 0; i < 2; i++) {
    w[i] = r14->size[i];
  }

  emxInit_real_T(sp, &b_w, 2, &qb_emlrtRTEI, true);
  emlrtSizeEqCheck2DFastR2012b(iv103, w, &y_emlrtECI, sp);
  i = b_w->size[0] * b_w->size[1];
  b_w->size[0] = varargin_1->size[0];
  b_w->size[1] = varargin_1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_w, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_w->data[i] = M[6] * varargin_1->data[i];
  }

  emxInit_real_T(sp, &r15, 2, &pb_emlrtRTEI, true);
  i = r15->size[0] * r15->size[1];
  r15->size[0] = varargin_2->size[0];
  r15->size[1] = varargin_2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r15, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = varargin_2->size[0] * varargin_2->size[1];
  for (i = 0; i < loop_ub; i++) {
    r15->data[i] = M[7] * varargin_2->data[i];
  }

  for (i = 0; i < 2; i++) {
    w[i] = b_w->size[i];
  }

  for (i = 0; i < 2; i++) {
    iv103[i] = r15->size[i];
  }

  emlrtSizeEqCheck2DFastR2012b(w, iv103, &ab_emlrtECI, sp);
  i = b_w->size[0] * b_w->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_w, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  i = b_w->size[0];
  loop_ub = b_w->size[1];
  loop_ub *= i;
  for (i = 0; i < loop_ub; i++) {
    b_w->data[i] = (b_w->data[i] + r15->data[i]) + M[8];
  }

  emxFree_real_T(&r15);
  emxInit_real_T(sp, &r16, 2, &pb_emlrtRTEI, true);
  i = r16->size[0] * r16->size[1];
  r16->size[0] = r11->size[0];
  r16->size[1] = r11->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r16, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = r11->size[0] * r11->size[1];
  for (i = 0; i < loop_ub; i++) {
    r16->data[i] = (r11->data[i] + r12->data[i]) + M[2];
  }

  emxFree_real_T(&r12);
  emxFree_real_T(&r11);
  emxInit_real_T(sp, &r17, 2, &pb_emlrtRTEI, true);
  st.site = &th_emlrtRSI;
  rdivide(&st, r16, b_w, varargout_1);
  i = r17->size[0] * r17->size[1];
  r17->size[0] = r13->size[0];
  r17->size[1] = r13->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r17, i, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = r13->size[0] * r13->size[1];
  emxFree_real_T(&r16);
  for (i = 0; i < loop_ub; i++) {
    r17->data[i] = (r13->data[i] + r14->data[i]) + M[5];
  }

  emxFree_real_T(&r14);
  emxFree_real_T(&r13);
  st.site = &uh_emlrtRSI;
  rdivide(&st, r17, b_w, varargout_2);
  emxFree_real_T(&r17);
  emxFree_real_T(&b_w);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (projective2d.c) */

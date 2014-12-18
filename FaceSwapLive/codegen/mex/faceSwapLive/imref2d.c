/*
 * imref2d.c
 *
 * Code generation for function 'imref2d'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "imref2d.h"
#include "repmat.h"
#include "faceSwapLive_emxutil.h"
#include "validateattributes.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo dh_emlrtRSI = { 88, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtRSInfo qh_emlrtRSI = { 207, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtRSInfo wh_emlrtRSI = { 227, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtMCInfo y_emlrtMCI = { 152, 28, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

static emlrtMCInfo db_emlrtMCI = { 324, 5, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtMCInfo eb_emlrtMCI = { 323, 15, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 193, 28, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtRTEInfo sb_emlrtRTEI = { 214, 28, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtRSInfo nj_emlrtRSI = { 323, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtRSInfo ek_emlrtRSI = { 324, "imref2d",
  "/Applications/MATLAB_R2014b.app/toolbox/images/images/+images/+internal/+coder/imref2d.m"
};

static emlrtRSInfo jk_emlrtRSI = { 152, "validateattributes",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/lang/validateattributes.m"
};

/* Function Definitions */
void imref2d_imref2d(const emlrtStack *sp, const real_T imageSizeIn[3], real_T
                     obj_XWorldLimits[2], real_T obj_YWorldLimits[2], real_T
                     obj_ImageSize[2], real_T *obj_PixelExtentInWorldX, real_T
                     *obj_PixelExtentInWorldY)
{
  boolean_T p;
  int32_T i;
  boolean_T exitg2;
  const mxArray *y;
  static const int32_T iv84[2] = { 1, 31 };

  const mxArray *m23;
  char_T cv121[31];
  static const char_T cv122[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm',
    'r', 'e', 'f', '2', 'd', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'P',
    'o', 's', 'i', 't', 'i', 'v', 'e' };

  const mxArray *b_y;
  static const int32_T iv85[2] = { 1, 34 };

  char_T cv123[34];
  static const char_T cv124[34] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'I', 'm', 'a', 'g', 'e', 'S', 'i', 'z', 'e', ' ', 't', 'o', ' ', 'b', 'e',
    ' ', 'p', 'o', 's', 'i', 't', 'i', 'v', 'e', '.' };

  const mxArray *c_y;
  static const int32_T iv86[2] = { 1, 30 };

  char_T cv125[30];
  static const char_T cv126[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm',
    'r', 'e', 'f', '2', 'd', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I',
    'n', 't', 'e', 'g', 'e', 'r' };

  const mxArray *d_y;
  static const int32_T iv87[2] = { 1, 40 };

  char_T cv127[40];
  static const char_T cv128[40] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'I', 'm', 'a', 'g', 'e', 'S', 'i', 'z', 'e', ' ', 't', 'o', ' ', 'b', 'e',
    ' ', 'i', 'n', 't', 'e', 'g', 'e', 'r', '-', 'v', 'a', 'l', 'u', 'e', 'd',
    '.' };

  boolean_T exitg1;
  const mxArray *e_y;
  static const int32_T iv88[2] = { 1, 29 };

  char_T cv129[29];
  static const char_T cv130[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'm',
    'r', 'e', 'f', '2', 'd', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F',
    'i', 'n', 'i', 't', 'e' };

  const mxArray *f_y;
  static const int32_T iv89[2] = { 1, 32 };

  char_T cv131[32];
  static const char_T cv132[32] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'I', 'm', 'a', 'g', 'e', 'S', 'i', 'z', 'e', ' ', 't', 'o', ' ', 'b', 'e',
    ' ', 'f', 'i', 'n', 'i', 't', 'e', '.' };

  real_T dv9[2];
  real_T dv10[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  p = true;
  i = 0;
  exitg2 = false;
  while ((!exitg2) && (i < 3)) {
    if (!(imageSizeIn[i] <= 0.0)) {
      i++;
    } else {
      p = false;
      exitg2 = true;
    }
  }

  if (p) {
  } else {
    y = NULL;
    m23 = emlrtCreateCharArray(2, iv84);
    for (i = 0; i < 31; i++) {
      cv121[i] = cv122[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m23, cv121);
    emlrtAssign(&y, m23);
    b_y = NULL;
    m23 = emlrtCreateCharArray(2, iv85);
    for (i = 0; i < 34; i++) {
      cv123[i] = cv124[i];
    }

    emlrtInitCharArrayR2013a(&st, 34, m23, cv123);
    emlrtAssign(&b_y, m23);
    b_st.site = &jk_emlrtRSI;
    b_error(&b_st, y, b_y, &y_emlrtMCI);
  }

  if (all(imageSizeIn)) {
  } else {
    c_y = NULL;
    m23 = emlrtCreateCharArray(2, iv86);
    for (i = 0; i < 30; i++) {
      cv125[i] = cv126[i];
    }

    emlrtInitCharArrayR2013a(&st, 30, m23, cv125);
    emlrtAssign(&c_y, m23);
    d_y = NULL;
    m23 = emlrtCreateCharArray(2, iv87);
    for (i = 0; i < 40; i++) {
      cv127[i] = cv128[i];
    }

    emlrtInitCharArrayR2013a(&st, 40, m23, cv127);
    emlrtAssign(&d_y, m23);
    b_st.site = &gk_emlrtRSI;
    b_error(&b_st, c_y, d_y, &ab_emlrtMCI);
  }

  p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 3)) {
    if ((!muDoubleScalarIsInf(imageSizeIn[i])) && (!muDoubleScalarIsNaN
         (imageSizeIn[i]))) {
      i++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
  } else {
    e_y = NULL;
    m23 = emlrtCreateCharArray(2, iv88);
    for (i = 0; i < 29; i++) {
      cv129[i] = cv130[i];
    }

    emlrtInitCharArrayR2013a(&st, 29, m23, cv129);
    emlrtAssign(&e_y, m23);
    f_y = NULL;
    m23 = emlrtCreateCharArray(2, iv89);
    for (i = 0; i < 32; i++) {
      cv131[i] = cv132[i];
    }

    emlrtInitCharArrayR2013a(&st, 32, m23, cv131);
    emlrtAssign(&f_y, m23);
    b_st.site = &ik_emlrtRSI;
    b_error(&b_st, e_y, f_y, &t_emlrtMCI);
  }

  obj_ImageSize[0] = imageSizeIn[0];
  obj_ImageSize[1] = imageSizeIn[1];
  dv9[0] = 0.0;
  dv9[1] = imageSizeIn[1];
  dv10[0] = 0.0;
  dv10[1] = imageSizeIn[0];
  for (i = 0; i < 2; i++) {
    obj_XWorldLimits[i] = 0.5 + dv9[i];
    obj_YWorldLimits[i] = 0.5 + dv10[i];
  }

  *obj_PixelExtentInWorldX = 1.0;
  *obj_PixelExtentInWorldY = 1.0;
}

void imref2d_intrinsicToWorld(const emlrtStack *sp, const emxArray_real_T
  *xIntrinsic, const emxArray_real_T *yIntrinsic, emxArray_real_T *xw,
  emxArray_real_T *yw)
{
  uint32_T varargin_1[2];
  int32_T i;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv98[2] = { 1, 32 };

  const mxArray *m27;
  char_T cv141[32];
  static const char_T cv142[32] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 's', 'p',
    'a', 't', 'i', 'a', 'l', 'r', 'e', 'f', ':', 'i', 'n', 'v', 'a', 'l', 'i',
    'd', 'X', 'Y', 'P', 'o', 'i', 'n', 't' };

  const mxArray *b_y;
  static const int32_T iv99[2] = { 1, 10 };

  char_T cv143[10];
  static const char_T cv144[10] = { 'x', 'I', 'n', 't', 'r', 'i', 'n', 's', 'i',
    'c' };

  const mxArray *c_y;
  static const int32_T iv100[2] = { 1, 10 };

  static const char_T cv145[10] = { 'y', 'I', 'n', 't', 'r', 'i', 'n', 's', 'i',
    'c' };

  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  for (i = 0; i < 2; i++) {
    varargin_1[i] = (uint32_T)xIntrinsic->size[i];
  }

  for (i = 0; i < 2; i++) {
    varargin_2[i] = (uint32_T)yIntrinsic->size[i];
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

  if (p) {
  } else {
    y = NULL;
    m27 = emlrtCreateCharArray(2, iv98);
    for (i = 0; i < 32; i++) {
      cv141[i] = cv142[i];
    }

    emlrtInitCharArrayR2013a(&st, 32, m27, cv141);
    emlrtAssign(&y, m27);
    b_y = NULL;
    m27 = emlrtCreateCharArray(2, iv99);
    for (i = 0; i < 10; i++) {
      cv143[i] = cv144[i];
    }

    emlrtInitCharArrayR2013a(&st, 10, m27, cv143);
    emlrtAssign(&b_y, m27);
    c_y = NULL;
    m27 = emlrtCreateCharArray(2, iv100);
    for (i = 0; i < 10; i++) {
      cv143[i] = cv145[i];
    }

    emlrtInitCharArrayR2013a(&st, 10, m27, cv143);
    emlrtAssign(&c_y, m27);
    b_st.site = &nj_emlrtRSI;
    c_st.site = &ek_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  i = xw->size[0] * xw->size[1];
  xw->size[0] = xIntrinsic->size[0];
  xw->size[1] = xIntrinsic->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)xw, i, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
  loop_ub = xIntrinsic->size[0] * xIntrinsic->size[1];
  for (i = 0; i < loop_ub; i++) {
    xw->data[i] = 0.5 + (xIntrinsic->data[i] - 0.5);
  }

  i = yw->size[0] * yw->size[1];
  yw->size[0] = yIntrinsic->size[0];
  yw->size[1] = yIntrinsic->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)yw, i, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
  loop_ub = yIntrinsic->size[0] * yIntrinsic->size[1];
  for (i = 0; i < loop_ub; i++) {
    yw->data[i] = 0.5 + (yIntrinsic->data[i] - 0.5);
  }
}

void imref2d_worldToIntrinsic(const emlrtStack *sp, const emxArray_real_T
  *xWorld, const emxArray_real_T *yWorld, emxArray_real_T *xi, emxArray_real_T
  *yi)
{
  uint32_T varargin_1[2];
  int32_T i;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv105[2] = { 1, 32 };

  const mxArray *m30;
  char_T cv152[32];
  static const char_T cv153[32] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 's', 'p',
    'a', 't', 'i', 'a', 'l', 'r', 'e', 'f', ':', 'i', 'n', 'v', 'a', 'l', 'i',
    'd', 'X', 'Y', 'P', 'o', 'i', 'n', 't' };

  const mxArray *b_y;
  static const int32_T iv106[2] = { 1, 6 };

  char_T cv154[6];
  static const char_T cv155[6] = { 'x', 'W', 'o', 'r', 'l', 'd' };

  const mxArray *c_y;
  static const int32_T iv107[2] = { 1, 6 };

  static const char_T cv156[6] = { 'y', 'W', 'o', 'r', 'l', 'd' };

  int32_T loop_ub;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  for (i = 0; i < 2; i++) {
    varargin_1[i] = (uint32_T)xWorld->size[i];
  }

  for (i = 0; i < 2; i++) {
    varargin_2[i] = (uint32_T)yWorld->size[i];
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

  if (p) {
  } else {
    y = NULL;
    m30 = emlrtCreateCharArray(2, iv105);
    for (i = 0; i < 32; i++) {
      cv152[i] = cv153[i];
    }

    emlrtInitCharArrayR2013a(&st, 32, m30, cv152);
    emlrtAssign(&y, m30);
    b_y = NULL;
    m30 = emlrtCreateCharArray(2, iv106);
    for (i = 0; i < 6; i++) {
      cv154[i] = cv155[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m30, cv154);
    emlrtAssign(&b_y, m30);
    c_y = NULL;
    m30 = emlrtCreateCharArray(2, iv107);
    for (i = 0; i < 6; i++) {
      cv154[i] = cv156[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m30, cv154);
    emlrtAssign(&c_y, m30);
    b_st.site = &nj_emlrtRSI;
    c_st.site = &ek_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  i = xi->size[0] * xi->size[1];
  xi->size[0] = xWorld->size[0];
  xi->size[1] = xWorld->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)xi, i, (int32_T)sizeof(real_T),
                    &sb_emlrtRTEI);
  loop_ub = xWorld->size[0] * xWorld->size[1];
  for (i = 0; i < loop_ub; i++) {
    xi->data[i] = 0.5 + (xWorld->data[i] - 0.5);
  }

  i = yi->size[0] * yi->size[1];
  yi->size[0] = yWorld->size[0];
  yi->size[1] = yWorld->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)yi, i, (int32_T)sizeof(real_T),
                    &sb_emlrtRTEI);
  loop_ub = yWorld->size[0] * yWorld->size[1];
  for (i = 0; i < loop_ub; i++) {
    yi->data[i] = 0.5 + (yWorld->data[i] - 0.5);
  }
}

/* End of code generation (imref2d.c) */

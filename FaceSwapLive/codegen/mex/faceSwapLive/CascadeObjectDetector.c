/*
 * CascadeObjectDetector.c
 *
 * Code generation for function 'CascadeObjectDetector'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "CascadeObjectDetector.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 185, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo v_emlrtRSI = { 190, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo w_emlrtRSI = { 192, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo x_emlrtRSI = { 195, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo y_emlrtRSI = { 1, "System",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"
};

static emlrtRSInfo ab_emlrtRSI = { 1, "SystemProp",
  "/Applications/MATLAB_R2014b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

static emlrtRSInfo bb_emlrtRSI = { 1, "matlabCodegenHandle",
  "/Applications/MATLAB_R2014b.app/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"
};

static emlrtRSInfo db_emlrtRSI = { 1, "setProp",
  "/Applications/MATLAB_R2014b.app/toolbox/matlab/system/+matlab/+system/setProp.p"
};

static emlrtRSInfo eb_emlrtRSI = { 214, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo fb_emlrtRSI = { 423, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo gb_emlrtRSI = { 424, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtRSInfo hb_emlrtRSI = { 459, "CascadeObjectDetector",
  "/Applications/MATLAB_R2014b.app/toolbox/vision/vision/+vision/CascadeObjectDetector.m"
};

static emlrtMCInfo emlrtMCI = { 13, 9, "isdeployed",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/general/isdeployed.m"
};

static emlrtRSInfo lk_emlrtRSI = { 13, "isdeployed",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/general/isdeployed.m"
};

/* Function Declarations */
static boolean_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static boolean_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_feval,
  const char_T *identifier);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *
  location);
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static boolean_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_feval,
  const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(b_feval), &thisId);
  emlrtDestroyArray(&b_feval);
  return y;
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *
  location)
{
  const mxArray *pArray;
  const mxArray *m42;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m42, 1, &pArray, "feval", true, location);
}

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, 0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

vision_CascadeObjectDetector_10 *c_CascadeObjectDetector_Cascade(const
  emlrtStack *sp, vision_CascadeObjectDetector_10 *obj)
{
  vision_CascadeObjectDetector_10 *b_obj;
  vision_CascadeObjectDetector_10 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv5[2] = { 1, 10 };

  const mxArray *m1;
  char_T cv4[10];
  int32_T i;
  static const char_T cv5[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[124];
  static const char_T b_ClassificationModel[124] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'f', 'r', 'o', 'n', 't', 'a', 'l',
    'f', 'a', 'c', 'e', '_', 'a', 'l', 't', '2', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv6[2] = { 1, 10 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  st.site = &u_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  b_st.site = &y_emlrtRSI;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_st.site = &cb_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  st.site = &v_emlrtRSI;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  st.site = &w_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  f_st.site = &eb_emlrtRSI;
  g_st.site = &fb_emlrtRSI;
  h_st.site = &hb_emlrtRSI;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv5);
  for (i = 0; i < 10; i++) {
    cv4[i] = cv5[i];
  }

  emlrtInitCharArrayR2013a(&h_st, 10, m1, cv4);
  emlrtAssign(&y, m1);
  i_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&i_st, feval(&i_st, y, &emlrtMCI), "feval");
  g_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 124U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  st.site = &x_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv6);
  for (i = 0; i < 10; i++) {
    cv4[i] = cv5[i];
  }

  emlrtInitCharArrayR2013a(&c_st, 10, m1, cv4);
  emlrtAssign(&b_y, m1);
  d_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&d_st, feval(&d_st, b_y, &emlrtMCI), "feval");
  b_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 124U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

vision_CascadeObjectDetector_12 *d_CascadeObjectDetector_Cascade(const
  emlrtStack *sp, vision_CascadeObjectDetector_12 *obj)
{
  vision_CascadeObjectDetector_12 *b_obj;
  vision_CascadeObjectDetector_12 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv7[2] = { 1, 10 };

  const mxArray *m2;
  char_T cv6[10];
  int32_T i;
  static const char_T cv7[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[119];
  static const char_T b_ClassificationModel[119] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'l', 'e', 'f',
    't', 'e', 'y', 'e', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv8[2] = { 1, 10 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  st.site = &u_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  b_st.site = &y_emlrtRSI;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_st.site = &cb_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  st.site = &v_emlrtRSI;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  st.site = &w_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  f_st.site = &eb_emlrtRSI;
  g_st.site = &fb_emlrtRSI;
  h_st.site = &hb_emlrtRSI;
  y = NULL;
  m2 = emlrtCreateCharArray(2, iv7);
  for (i = 0; i < 10; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(&h_st, 10, m2, cv6);
  emlrtAssign(&y, m2);
  i_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&i_st, feval(&i_st, y, &emlrtMCI), "feval");
  g_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 119U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  st.site = &x_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_y = NULL;
  m2 = emlrtCreateCharArray(2, iv8);
  for (i = 0; i < 10; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(&c_st, 10, m2, cv6);
  emlrtAssign(&b_y, m2);
  d_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&d_st, feval(&d_st, b_y, &emlrtMCI), "feval");
  b_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 119U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

vision_CascadeObjectDetector_11 *e_CascadeObjectDetector_Cascade(const
  emlrtStack *sp, vision_CascadeObjectDetector_11 *obj)
{
  vision_CascadeObjectDetector_11 *b_obj;
  vision_CascadeObjectDetector_11 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 10 };

  const mxArray *m3;
  char_T cv8[10];
  int32_T i;
  static const char_T cv9[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[120];
  static const char_T b_ClassificationModel[120] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'r', 'i', 'g',
    'h', 't', 'e', 'y', 'e', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv10[2] = { 1, 10 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  st.site = &u_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  b_st.site = &y_emlrtRSI;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_st.site = &cb_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  st.site = &v_emlrtRSI;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  st.site = &w_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  f_st.site = &eb_emlrtRSI;
  g_st.site = &fb_emlrtRSI;
  h_st.site = &hb_emlrtRSI;
  y = NULL;
  m3 = emlrtCreateCharArray(2, iv9);
  for (i = 0; i < 10; i++) {
    cv8[i] = cv9[i];
  }

  emlrtInitCharArrayR2013a(&h_st, 10, m3, cv8);
  emlrtAssign(&y, m3);
  i_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&i_st, feval(&i_st, y, &emlrtMCI), "feval");
  g_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 120U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  st.site = &x_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv10);
  for (i = 0; i < 10; i++) {
    cv8[i] = cv9[i];
  }

  emlrtInitCharArrayR2013a(&c_st, 10, m3, cv8);
  emlrtAssign(&b_y, m3);
  d_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&d_st, feval(&d_st, b_y, &emlrtMCI), "feval");
  b_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 120U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

vision_CascadeObjectDetector_13 *f_CascadeObjectDetector_Cascade(const
  emlrtStack *sp, vision_CascadeObjectDetector_13 *obj)
{
  vision_CascadeObjectDetector_13 *b_obj;
  vision_CascadeObjectDetector_13 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv11[2] = { 1, 10 };

  const mxArray *m4;
  char_T cv10[10];
  int32_T i;
  static const char_T cv11[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[117];
  static const char_T b_ClassificationModel[117] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'm', 'o', 'u',
    't', 'h', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv12[2] = { 1, 10 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  st.site = &u_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  b_st.site = &y_emlrtRSI;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_st.site = &cb_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  st.site = &v_emlrtRSI;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  st.site = &w_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  f_st.site = &eb_emlrtRSI;
  g_st.site = &fb_emlrtRSI;
  h_st.site = &hb_emlrtRSI;
  y = NULL;
  m4 = emlrtCreateCharArray(2, iv11);
  for (i = 0; i < 10; i++) {
    cv10[i] = cv11[i];
  }

  emlrtInitCharArrayR2013a(&h_st, 10, m4, cv10);
  emlrtAssign(&y, m4);
  i_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&i_st, feval(&i_st, y, &emlrtMCI), "feval");
  g_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 117U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  st.site = &x_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_y = NULL;
  m4 = emlrtCreateCharArray(2, iv12);
  for (i = 0; i < 10; i++) {
    cv10[i] = cv11[i];
  }

  emlrtInitCharArrayR2013a(&c_st, 10, m4, cv10);
  emlrtAssign(&b_y, m4);
  d_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&d_st, feval(&d_st, b_y, &emlrtMCI), "feval");
  b_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 117U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

vision_CascadeObjectDetector_14 *g_CascadeObjectDetector_Cascade(const
  emlrtStack *sp, vision_CascadeObjectDetector_14 *obj)
{
  vision_CascadeObjectDetector_14 *b_obj;
  vision_CascadeObjectDetector_14 *c_obj;
  void * ptrObj;
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 10 };

  const mxArray *m5;
  char_T cv12[10];
  int32_T i;
  static const char_T cv13[10] = { 'i', 's', 'd', 'e', 'p', 'l', 'o', 'y', 'e',
    'd' };

  char_T ClassificationModel[116];
  static const char_T b_ClassificationModel[116] = { '/', 'A', 'p', 'p', 'l',
    'i', 'c', 'a', 't', 'i', 'o', 'n', 's', '/', 'M', 'A', 'T', 'L', 'A', 'B',
    '_', 'R', '2', '0', '1', '4', 'b', '.', 'a', 'p', 'p', '/', 't', 'o', 'o',
    'l', 'b', 'o', 'x', '/', 'v', 'i', 's', 'i', 'o', 'n', '/', 'v', 'i', 's',
    'i', 'o', 'n', 'u', 't', 'i', 'l', 'i', 't', 'i', 'e', 's', '/', 'c', 'l',
    'a', 's', 's', 'i', 'f', 'i', 'e', 'r', 'd', 'a', 't', 'a', '/', 'c', 'a',
    's', 'c', 'a', 'd', 'e', '/', 'h', 'a', 'a', 'r', '/', 'h', 'a', 'a', 'r',
    'c', 'a', 's', 'c', 'a', 'd', 'e', '_', 'm', 'c', 's', '_', 'n', 'o', 's',
    'e', '.', 'x', 'm', 'l', '\x00' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 10 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_obj = obj;
  b_obj->ScaleFactor = 1.1;
  b_obj->MergeThreshold = 4.0;
  st.site = &u_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  b_st.site = &y_emlrtRSI;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  c_st.site = &cb_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  c_obj->matlabCodegenIsDeleted = false;
  st.site = &v_emlrtRSI;
  ptrObj = NULL;
  cascadeClassifier_construct(&ptrObj);
  b_obj->pCascadeClassifier = ptrObj;
  st.site = &w_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  f_st.site = &eb_emlrtRSI;
  g_st.site = &fb_emlrtRSI;
  h_st.site = &hb_emlrtRSI;
  y = NULL;
  m5 = emlrtCreateCharArray(2, iv13);
  for (i = 0; i < 10; i++) {
    cv12[i] = cv13[i];
  }

  emlrtInitCharArrayR2013a(&h_st, 10, m5, cv12);
  emlrtAssign(&y, m5);
  i_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&i_st, feval(&i_st, y, &emlrtMCI), "feval");
  g_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 116U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  st.site = &x_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  b_y = NULL;
  m5 = emlrtCreateCharArray(2, iv14);
  for (i = 0; i < 10; i++) {
    cv12[i] = cv13[i];
  }

  emlrtInitCharArrayR2013a(&c_st, 10, m5, cv12);
  emlrtAssign(&b_y, m5);
  d_st.site = &lk_emlrtRSI;
  emlrt_marshallIn(&d_st, feval(&d_st, b_y, &emlrtMCI), "feval");
  b_st.site = &gb_emlrtRSI;
  ptrObj = c_obj->pCascadeClassifier;
  memcpy(&ClassificationModel[0], &b_ClassificationModel[0], 116U * sizeof
         (char_T));
  cascadeClassifier_load(ptrObj, ClassificationModel);
  return b_obj;
}

/* End of code generation (CascadeObjectDetector.c) */

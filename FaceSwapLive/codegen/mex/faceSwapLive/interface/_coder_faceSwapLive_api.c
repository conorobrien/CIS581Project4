/*
 * _coder_faceSwapLive_api.c
 *
 * Code generation for function '_coder_faceSwapLive_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "_coder_faceSwapLive_api.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Declarations */
static uint8_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *targetImage, const char_T *identifier))[307440];
static const mxArray *emlrt_marshallOut(const uint8_T u[307440]);
static uint8_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[307440];
static uint8_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *swapImage, const char_T *identifier))[33075];
static uint8_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[33075];
static boolean_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *swapMask, const char_T *identifier))[11025];
static boolean_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[11025];
static uint8_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[307440];
static uint8_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[33075];
static boolean_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[11025];

/* Function Definitions */
static uint8_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *targetImage, const char_T *identifier))[307440]
{
  uint8_T (*y)[307440];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(targetImage), &thisId);
  emlrtDestroyArray(&targetImage);
  return y;
}
  static const mxArray *emlrt_marshallOut(const uint8_T u[307440])
{
  const mxArray *y;
  static const int32_T iv134[3] = { 0, 0, 0 };

  const mxArray *m41;
  static const int32_T iv135[3] = { 240, 427, 3 };

  y = NULL;
  m41 = emlrtCreateNumericArray(3, iv134, mxUINT8_CLASS, mxREAL);
  mxSetData((mxArray *)m41, (void *)u);
  emlrtSetDimensions((mxArray *)m41, iv135, 3);
  emlrtAssign(&y, m41);
  return y;
}

static uint8_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[307440]
{
  uint8_T (*y)[307440];
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static uint8_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *swapImage, const char_T *identifier))[33075]
{
  uint8_T (*y)[33075];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = h_emlrt_marshallIn(sp, emlrtAlias(swapImage), &thisId);
  emlrtDestroyArray(&swapImage);
  return y;
}

static uint8_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[33075]
{
  uint8_T (*y)[33075];
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static boolean_T (*i_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *swapMask, const char_T *identifier))[11025]
{
  boolean_T (*y)[11025];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = j_emlrt_marshallIn(sp, emlrtAlias(swapMask), &thisId);
  emlrtDestroyArray(&swapMask);
  return y;
}

static boolean_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[11025]
{
  boolean_T (*y)[11025];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static uint8_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[307440]
{
  uint8_T (*ret)[307440];
  int32_T iv137[3];
  int32_T i;
  static const int16_T iv138[3] = { 240, 427, 3 };

  for (i = 0; i < 3; i++) {
    iv137[i] = iv138[i];
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint8", false, 3U, iv137);
  ret = (uint8_T (*)[307440])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static uint8_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[33075]
{
  uint8_T (*ret)[33075];
  int32_T iv139[3];
  int32_T i;
  static const int8_T iv140[3] = { 105, 105, 3 };

  for (i = 0; i < 3; i++) {
    iv139[i] = iv140[i];
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "uint8", false, 3U, iv139);
  ret = (uint8_T (*)[33075])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static boolean_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[11025]
{
  boolean_T (*ret)[11025];
  int32_T iv141[2];
  int32_T i;
  for (i = 0; i < 2; i++) {
    iv141[i] = 105;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv141);
  ret = (boolean_T (*)[11025])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void faceSwapLive_api(faceSwapLiveStackData *SD, const mxArray *prhs[3], const
                      mxArray *plhs[1])
{
  uint8_T (*swappedImage)[307440];
  uint8_T (*targetImage)[307440];
  uint8_T (*swapImage)[33075];
  boolean_T (*swapMask)[11025];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  swappedImage = (uint8_T (*)[307440])mxMalloc(sizeof(uint8_T [307440]));
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);

  /* Marshall function inputs */
  targetImage = e_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "targetImage");
  swapImage = g_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "swapImage");
  swapMask = i_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "swapMask");

  /* Invoke the target function */
  faceSwapLive(SD, &st, *targetImage, *swapImage, *swapMask, *swappedImage);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*swappedImage);
}

/* End of code generation (_coder_faceSwapLive_api.c) */

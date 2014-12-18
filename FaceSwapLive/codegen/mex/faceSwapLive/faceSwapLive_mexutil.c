/*
 * faceSwapLive_mexutil.c
 *
 * Code generation for function 'faceSwapLive_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "faceSwapLive_mexutil.h"
#include "inv.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
void b_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
             emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", true, location);
}

const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m44;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m44, 1, &pArray, "message", true,
    location);
}

const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m45;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m45, 3, pArrays, "sprintf", true,
    location);
}

void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf, const
  char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(d_sprintf), &thisId, y);
  emlrtDestroyArray(&d_sprintf);
}

const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m47;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m47, 3, pArrays, "message", true,
    location);
}

const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m46;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m46, 2, pArrays, "sprintf", true,
    location);
}

void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

int32_T div_s32_floor(const emlrtStack *sp, int32_T numerator, int32_T
                      denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    tempAbsQuotient = absNumerator / absDenominator;
    if (quotientNeedsNegation) {
      absNumerator %= absDenominator;
      if (absNumerator > 0U) {
        tempAbsQuotient++;
      }
    }

    if (quotientNeedsNegation) {
      quotient = -(int32_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }
  }

  return quotient;
}

void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  int32_T iv136[2];
  int32_T i51;
  for (i51 = 0; i51 < 2; i51++) {
    iv136[i51] = 1 + 13 * i51;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv136);
  emlrtImportCharArrayR2014b(sp, src, ret, 14);
  emlrtDestroyArray(&src);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m43;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m43, 2, pArrays, "message", true,
    location);
}

/* End of code generation (faceSwapLive_mexutil.c) */

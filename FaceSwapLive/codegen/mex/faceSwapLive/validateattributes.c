/*
 * validateattributes.c
 *
 * Code generation for function 'validateattributes'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "validateattributes.h"
#include "faceSwapLive_mexutil.h"
#include "faceSwapLive_data.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
boolean_T all(const real_T a[3])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  boolean_T b_p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 3)) {
    if ((!muDoubleScalarIsInf(a[k])) && (!muDoubleScalarIsNaN(a[k])) &&
        (muDoubleScalarFloor(a[k]) == a[k])) {
      b_p = true;
    } else {
      b_p = false;
    }

    if (b_p) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  return p;
}

void b_validateattributes(const emlrtStack *sp, const emxArray_real_T *a)
{
  boolean_T p;
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv110[2] = { 1, 30 };

  const mxArray *m32;
  char_T cv161[30];
  static const char_T cv162[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n',
    't', 'e', 'r', 'p', '2', 'd', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  const mxArray *b_y;
  static const int32_T iv111[2] = { 1, 25 };

  char_T cv163[25];
  static const char_T cv164[25] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'Y', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-', 'N', 'a', 'N',
    '.' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  p = true;
  i = a->size[0] * a->size[1];
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (!muDoubleScalarIsNaN(a->data[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
  } else {
    y = NULL;
    m32 = emlrtCreateCharArray(2, iv110);
    for (i = 0; i < 30; i++) {
      cv161[i] = cv162[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m32, cv161);
    emlrtAssign(&y, m32);
    b_y = NULL;
    m32 = emlrtCreateCharArray(2, iv111);
    for (i = 0; i < 25; i++) {
      cv163[i] = cv164[i];
    }

    emlrtInitCharArrayR2013a(sp, 25, m32, cv163);
    emlrtAssign(&b_y, m32);
    st.site = &hk_emlrtRSI;
    b_error(&st, y, b_y, &x_emlrtMCI);
  }
}

void c_validateattributes(const emlrtStack *sp, const real_T a[3])
{
  boolean_T p;
  int32_T i;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv117[2] = { 1, 30 };

  const mxArray *m35;
  char_T cv169[30];
  static const char_T cv170[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'a',
    'd', 'a', 'r', 'r', 'a', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  const mxArray *b_y;
  static const int32_T iv118[2] = { 1, 48 };

  char_T cv171[48];
  static const char_T cv172[48] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', '2', ',',
    ' ', 'P', 'A', 'D', 'S', 'I', 'Z', 'E', ',', ' ', 't', 'o', ' ', 'b', 'e',
    ' ', 'n', 'o', 'n', '-', 'N', 'a', 'N', '.' };

  const mxArray *c_y;
  static const int32_T iv119[2] = { 1, 31 };

  char_T cv173[31];
  static const char_T cv174[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'a',
    'd', 'a', 'r', 'r', 'a', 'y', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'I', 'n', 't', 'e', 'g', 'e', 'r' };

  const mxArray *d_y;
  static const int32_T iv120[2] = { 1, 55 };

  char_T cv175[55];
  static const char_T cv176[55] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b', 'e', 'r', ' ', '2', ',',
    ' ', 'P', 'A', 'D', 'S', 'I', 'Z', 'E', ',', ' ', 't', 'o', ' ', 'b', 'e',
    ' ', 'i', 'n', 't', 'e', 'g', 'e', 'r', '-', 'v', 'a', 'l', 'u', 'e', 'd',
    '.' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 3)) {
    if (!muDoubleScalarIsNaN(a[i])) {
      i++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
  } else {
    y = NULL;
    m35 = emlrtCreateCharArray(2, iv117);
    for (i = 0; i < 30; i++) {
      cv169[i] = cv170[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m35, cv169);
    emlrtAssign(&y, m35);
    b_y = NULL;
    m35 = emlrtCreateCharArray(2, iv118);
    for (i = 0; i < 48; i++) {
      cv171[i] = cv172[i];
    }

    emlrtInitCharArrayR2013a(sp, 48, m35, cv171);
    emlrtAssign(&b_y, m35);
    st.site = &hk_emlrtRSI;
    b_error(&st, y, b_y, &x_emlrtMCI);
  }

  if (all(a)) {
  } else {
    c_y = NULL;
    m35 = emlrtCreateCharArray(2, iv119);
    for (i = 0; i < 31; i++) {
      cv173[i] = cv174[i];
    }

    emlrtInitCharArrayR2013a(sp, 31, m35, cv173);
    emlrtAssign(&c_y, m35);
    d_y = NULL;
    m35 = emlrtCreateCharArray(2, iv120);
    for (i = 0; i < 55; i++) {
      cv175[i] = cv176[i];
    }

    emlrtInitCharArrayR2013a(sp, 55, m35, cv175);
    emlrtAssign(&d_y, m35);
    st.site = &gk_emlrtRSI;
    b_error(&st, c_y, d_y, &ab_emlrtMCI);
  }
}

void d_validateattributes(void)
{
}

void validateattributes(const emlrtStack *sp, const emxArray_real_T *a)
{
  boolean_T p;
  int32_T i;
  int32_T k;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv108[2] = { 1, 30 };

  const mxArray *m31;
  char_T cv157[30];
  static const char_T cv158[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'i', 'n',
    't', 'e', 'r', 'p', '2', 'd', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'N', 'o', 'n', 'N', 'a', 'N' };

  const mxArray *b_y;
  static const int32_T iv109[2] = { 1, 25 };

  char_T cv159[25];
  static const char_T cv160[25] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ',
    'X', ' ', 't', 'o', ' ', 'b', 'e', ' ', 'n', 'o', 'n', '-', 'N', 'a', 'N',
    '.' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  p = true;
  i = a->size[0] * a->size[1];
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= i - 1)) {
    if (!muDoubleScalarIsNaN(a->data[k])) {
      k++;
    } else {
      p = false;
      exitg1 = true;
    }
  }

  if (p) {
  } else {
    y = NULL;
    m31 = emlrtCreateCharArray(2, iv108);
    for (i = 0; i < 30; i++) {
      cv157[i] = cv158[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m31, cv157);
    emlrtAssign(&y, m31);
    b_y = NULL;
    m31 = emlrtCreateCharArray(2, iv109);
    for (i = 0; i < 25; i++) {
      cv159[i] = cv160[i];
    }

    emlrtInitCharArrayR2013a(sp, 25, m31, cv159);
    emlrtAssign(&b_y, m31);
    st.site = &hk_emlrtRSI;
    b_error(&st, y, b_y, &x_emlrtMCI);
  }
}

/* End of code generation (validateattributes.c) */

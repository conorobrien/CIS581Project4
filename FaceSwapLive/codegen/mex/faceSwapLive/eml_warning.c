/*
 * eml_warning.c
 *
 * Code generation for function 'eml_warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "eml_warning.h"
#include "SystemCore.h"
#include "repmat.h"
#include "faceSwapLive_mexutil.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtMCInfo g_emlrtMCI = { 16, 13, "eml_warning",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtMCInfo h_emlrtMCI = { 16, 5, "eml_warning",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_warning.m" };

static emlrtRSInfo vj_emlrtRSI = { 16, "eml_warning",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_warning.m" };

/* Function Declarations */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "warning", true, location);
}

void b_eml_warning(const emlrtStack *sp, const char_T varargin_2[14])
{
  const mxArray *y;
  static const int32_T iv28[2] = { 1, 33 };

  const mxArray *m10;
  char_T cv31[33];
  int32_T i;
  static const char_T cv32[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'l', 'l', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o',
    'n', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *b_y;
  static const int32_T iv29[2] = { 1, 14 };

  char_T b_varargin_2[14];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m10 = emlrtCreateCharArray(2, iv28);
  for (i = 0; i < 33; i++) {
    cv31[i] = cv32[i];
  }

  emlrtInitCharArrayR2013a(sp, 33, m10, cv31);
  emlrtAssign(&y, m10);
  b_y = NULL;
  m10 = emlrtCreateCharArray(2, iv29);
  for (i = 0; i < 14; i++) {
    b_varargin_2[i] = varargin_2[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m10, b_varargin_2);
  emlrtAssign(&b_y, m10);
  st.site = &vj_emlrtRSI;
  warning(&st, message(&st, y, b_y, &g_emlrtMCI), &h_emlrtMCI);
}

void c_eml_warning(const emlrtStack *sp, real_T varargin_2, const char_T
                   varargin_3[14])
{
  const mxArray *y;
  static const int32_T iv82[2] = { 1, 32 };

  const mxArray *m22;
  char_T cv119[32];
  int32_T i;
  static const char_T cv120[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv83[2] = { 1, 14 };

  char_T b_varargin_3[14];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m22 = emlrtCreateCharArray(2, iv82);
  for (i = 0; i < 32; i++) {
    cv119[i] = cv120[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m22, cv119);
  emlrtAssign(&y, m22);
  b_y = NULL;
  m22 = emlrtCreateDoubleScalar(varargin_2);
  emlrtAssign(&b_y, m22);
  c_y = NULL;
  m22 = emlrtCreateCharArray(2, iv83);
  for (i = 0; i < 14; i++) {
    b_varargin_3[i] = varargin_3[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m22, b_varargin_3);
  emlrtAssign(&c_y, m22);
  st.site = &vj_emlrtRSI;
  warning(&st, c_message(&st, y, b_y, c_y, &g_emlrtMCI), &h_emlrtMCI);
}

void eml_warning(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv27[2] = { 1, 27 };

  const mxArray *m9;
  char_T cv29[27];
  int32_T i;
  static const char_T cv30[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m9 = emlrtCreateCharArray(2, iv27);
  for (i = 0; i < 27; i++) {
    cv29[i] = cv30[i];
  }

  emlrtInitCharArrayR2013a(sp, 27, m9, cv29);
  emlrtAssign(&y, m9);
  st.site = &vj_emlrtRSI;
  warning(&st, b_message(&st, y, &g_emlrtMCI), &h_emlrtMCI);
}

/* End of code generation (eml_warning.c) */

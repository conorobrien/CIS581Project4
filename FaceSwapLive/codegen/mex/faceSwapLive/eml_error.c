/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "eml_error.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Variable Definitions */
static emlrtRTEInfo mc_emlrtRTEI = { 20, 5, "eml_error",
  "/Applications/MATLAB_R2014b.app/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &mc_emlrtRTEI,
    "Coder:MATLAB:svd_matrixWithNaNInf", 0);
}

void c_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &mc_emlrtRTEI,
    "Coder:MATLAB:svd_NoConvergence", 0);
}

void eml_error(const emlrtStack *sp)
{
  static const char_T varargin_1[4] = { 's', 'q', 'r', 't' };

  emlrtErrorWithMessageIdR2012b(sp, &mc_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, varargin_1);
}

/* End of code generation (eml_error.c) */

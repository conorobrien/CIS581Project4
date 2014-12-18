/*
 * validateattributes.h
 *
 * Code generation for function 'validateattributes'
 *
 */

#ifndef __VALIDATEATTRIBUTES_H__
#define __VALIDATEATTRIBUTES_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "faceSwapLive_types.h"

/* Function Declarations */
extern boolean_T all(const real_T a[3]);
extern void b_validateattributes(const emlrtStack *sp, const emxArray_real_T *a);
extern void c_validateattributes(const emlrtStack *sp, const real_T a[3]);
extern void d_validateattributes(void);
extern void validateattributes(const emlrtStack *sp, const emxArray_real_T *a);

#endif

/* End of code generation (validateattributes.h) */

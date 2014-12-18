/*
 * mod.h
 *
 * Code generation for function 'mod'
 *
 */

#ifndef __MOD_H__
#define __MOD_H__

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
extern void b_mod(const real_T x_data[], const int32_T x_size[2], real_T y,
                  real_T r_data[], int32_T r_size[2]);

#endif

/* End of code generation (mod.h) */

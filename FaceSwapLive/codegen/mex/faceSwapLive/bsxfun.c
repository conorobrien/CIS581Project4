/*
 * bsxfun.c
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "faceSwapLive.h"
#include "bsxfun.h"
#include "cvstCG_cascadeClassifier.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwremaptbb.h"
#include "tmwtypes.h"

/* Function Definitions */
void b_bsxfun(const real_T a[307440], const boolean_T b[102480], real_T c[307440])
{
  int32_T asub[2];
  int32_T bsub[2];
  int32_T i;
  int32_T bk;
  int32_T ck;
  real_T cv[240];
  int32_T k;
  for (i = 0; i < 2; i++) {
    asub[i] = 1;
    bsub[i] = 1;
  }

  i = 0;
  bk = 0;
  for (ck = 0; ck < 307202; ck += 240) {
    for (k = 0; k < 240; k++) {
      cv[k] = a[i + k] * (real_T)b[bk + k];
    }

    memcpy(&c[ck], &cv[0], 240U * sizeof(real_T));
    if (asub[0] < 427) {
      i += 240;
      bk += 240;
      bsub[0]++;
      asub[0]++;
    } else if (bsub[0] < 427) {
      bk += 240;
      bsub[0]++;
    } else {
      asub[0] = 1;
      bsub[0] = 1;
      if (asub[1] < 3) {
        i += 240;
        bk -= 102240;
        asub[1]++;
      } else {
        asub[1] = 1;
      }
    }
  }
}

void bsxfun(const real_T a[8], const real_T b[2], real_T c[8])
{
  int32_T ak;
  int32_T bk;
  int32_T ck;
  real_T cv[4];
  int32_T k;
  ak = 0;
  bk = 0;
  for (ck = 0; ck < 6; ck += 4) {
    for (k = 0; k < 4; k++) {
      cv[k] = a[ak + k] - b[bk];
    }

    for (k = 0; k < 4; k++) {
      c[ck + k] = cv[k];
    }

    ak += 4;
    bk++;
  }
}

/* End of code generation (bsxfun.c) */

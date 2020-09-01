/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: exp.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 21-Aug-2020 13:28:49
 */

/* Include Files */
#include "exp.h"
#include "G_q.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */

/*
 * Arguments    : creal_T *x
 * Return Type  : void
 */
void b_exp(creal_T *x)
{
  double r;
  double d;
  if (x->im == 0.0) {
    x->re = exp(x->re);
    x->im = 0.0;
  } else if (rtIsInf(x->im) && rtIsInf(x->re) && (x->re < 0.0)) {
    x->re = 0.0;
    x->im = 0.0;
  } else {
    r = exp(x->re / 2.0);
    d = x->im;
    x->re = r * (r * cos(x->im));
    x->im = r * (r * sin(d));
  }
}

/*
 * File trailer for exp.c
 *
 * [EOF]
 */

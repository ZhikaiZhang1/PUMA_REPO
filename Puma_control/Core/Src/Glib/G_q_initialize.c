/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: G_q_initialize.c
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 30-Jun-2020 16:12:35
 */

/* Include Files */
#include "G_q_initialize.h"
#include "G_q.h"
#include "G_q_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void G_q_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_G_q = true;
}

/*
 * File trailer for G_q_initialize.c
 *
 * [EOF]
 */

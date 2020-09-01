/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: _coder_G_q_api.h
 *
 * MATLAB Coder version            : 4.3
 * C/C++ source code generated on  : 21-Aug-2020 13:28:49
 */

#ifndef _CODER_G_Q_API_H
#define _CODER_G_Q_API_H

/* Include Files */
#include <stddef.h>
#include <stdlib.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void G_q(real_T g, real_T theta2, real_T theta3, real_T theta4, real_T
                theta5, creal_T b_G_q[6]);
extern void G_q_api(const mxArray * const prhs[5], int32_T nlhs, const mxArray
                    *plhs[1]);
extern void G_q_atexit(void);
extern void G_q_initialize(void);
extern void G_q_terminate(void);
extern void G_q_xil_shutdown(void);
extern void G_q_xil_terminate(void);

#endif

/*
 * File trailer for _coder_G_q_api.h
 *
 * [EOF]
 */

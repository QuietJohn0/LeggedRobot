/*
 * Callback_test.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Callback_test".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu Jul 29 18:15:20 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Callback_test.h"
#include "Callback_test_private.h"

/* Block signals (default storage) */
B_Callback_test_T Callback_test_B;

/* Block states (default storage) */
DW_Callback_test_T Callback_test_DW;

/* Real-time model */
RT_MODEL_Callback_test_T Callback_test_M_ = RT_MODEL_Callback_test_T();
RT_MODEL_Callback_test_T *const Callback_test_M = &Callback_test_M_;

/* Model step function */
void Callback_test_step(void)
{
  /* Sin: '<Root>/Sine Wave' */
  Callback_test_B.SineWave = std::sin(Callback_test_cal->SineWave_Freq *
    Callback_test_M->Timing.t[0] + Callback_test_cal->SineWave_Phase) *
    Callback_test_cal->SineWave_Amp + Callback_test_cal->SineWave_Bias;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Callback_test_M->Timing.clockTick0)) {
    ++Callback_test_M->Timing.clockTickH0;
  }

  Callback_test_M->Timing.t[0] = Callback_test_M->Timing.clockTick0 *
    Callback_test_M->Timing.stepSize0 + Callback_test_M->Timing.clockTickH0 *
    Callback_test_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.2s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.2, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    Callback_test_M->Timing.clockTick1++;
    if (!Callback_test_M->Timing.clockTick1) {
      Callback_test_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void Callback_test_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Callback_test_M->solverInfo,
                          &Callback_test_M->Timing.simTimeStep);
    rtsiSetTPtr(&Callback_test_M->solverInfo, &rtmGetTPtr(Callback_test_M));
    rtsiSetStepSizePtr(&Callback_test_M->solverInfo,
                       &Callback_test_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Callback_test_M->solverInfo, (&rtmGetErrorStatus
      (Callback_test_M)));
    rtsiSetRTModelPtr(&Callback_test_M->solverInfo, Callback_test_M);
  }

  rtsiSetSimTimeStep(&Callback_test_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Callback_test_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Callback_test_M, &Callback_test_M->Timing.tArray[0]);
  Callback_test_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&Callback_test_B)), 0,
                     sizeof(B_Callback_test_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&Callback_test_DW), 0,
                     sizeof(DW_Callback_test_T));
}

/* Model terminate function */
void Callback_test_terminate(void)
{
  /* (no terminate code required) */
}

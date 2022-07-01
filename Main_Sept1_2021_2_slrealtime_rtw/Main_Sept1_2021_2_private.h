/*
 * Main_Sept1_2021_2_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Main_Sept1_2021_2".
 *
 * Model version              : 1.45
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 19 18:02:27 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Main_Sept1_2021_2_private_h_
#define RTW_HEADER_Main_Sept1_2021_2_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Main_Sept1_2021_2.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern real_T rt_roundd_snf(real_T u);
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" void sg_IO602_IO691_write_s(SimStruct *rts);
extern "C" void sg_IO602_IO691_read_s(SimStruct *rts);
extern "C" void sg_IO602_IO691_setup_s(SimStruct *rts);
extern "C" void sg_IO602_IO691_status_s(SimStruct *rts);
extern void Main_Sept1_2021_2_floatsbytes(real_T rtu_position, real_T
  rtu_velocity, real_T rtu_K_p, real_T rtu_K_d, real_T rtu_T_ff,
  B_floatsbytes_Main_Sept1_2021_T *localB);

#endif                             /* RTW_HEADER_Main_Sept1_2021_2_private_h_ */
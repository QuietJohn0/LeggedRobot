/*
 * CAN_2_Legs_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CAN_2_Legs".
 *
 * Model version              : 1.5
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Mon Aug 23 14:12:25 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CAN_2_Legs_private_h_
#define RTW_HEADER_CAN_2_Legs_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern real_T rt_roundd_snf(real_T u);
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" void sg_IO602_IO691_read_s(SimStruct *rts);
extern "C" void sg_IO602_IO691_write_s(SimStruct *rts);
extern "C" void sg_IO602_IO691_setup_s(SimStruct *rts);
extern "C" void sg_IO602_IO691_status_s(SimStruct *rts);

#endif                                 /* RTW_HEADER_CAN_2_Legs_private_h_ */

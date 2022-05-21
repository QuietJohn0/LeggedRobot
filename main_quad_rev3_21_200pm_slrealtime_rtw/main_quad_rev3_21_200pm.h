/*
 * main_quad_rev3_21_200pm.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "main_quad_rev3_21_200pm".
 *
 * Model version              : 1.50
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Sat May 21 15:52:00 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_main_quad_rev3_21_200pm_h_
#define RTW_HEADER_main_quad_rev3_21_200pm_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <cstring>
#include <math.h>
#include <string.h>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "can_message.h"
#include "main_quad_rev3_21_200pm_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "main_quad_rev3_21_200pm_cal.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals for system '<S3>/floats -> bytes' */
struct B_floatsbytes_main_quad_rev3__T {
  uint8_T b[8];                        /* '<S3>/floats -> bytes' */
};

/* Block signals for system '<S20>/bytes -> floats' */
struct B_bytesfloats_main_quad_rev3__T {
  real_T position;                     /* '<S20>/bytes -> floats' */
  real_T velocity;                     /* '<S20>/bytes -> floats' */
  real_T I_ff;                         /* '<S20>/bytes -> floats' */
};

/* Block signals (default storage) */
struct B_main_quad_rev3_21_200pm_T {
  CAN_DATATYPE CANRead_o2;             /* '<S11>/CAN Read' */
  CAN_DATATYPE CANPack1;               /* '<S10>/CAN Pack1' */
  CAN_DATATYPE CANmsg2;                /* '<S9>/CAN Pack1' */
  CAN_DATATYPE CANPack1_m;             /* '<S8>/CAN Pack1' */
  CAN_DATATYPE CANmsg2_j;              /* '<S7>/CAN Pack1' */
  CAN_DATATYPE CANPack1_l;             /* '<S6>/CAN Pack1' */
  CAN_DATATYPE CANPack1_c;             /* '<S5>/CAN Pack1' */
  CAN_DATATYPE CANmsg2_a;              /* '<S4>/CAN Pack1' */
  CAN_DATATYPE CANmsg2_j1;             /* '<S3>/CAN Pack1' */
  real_T Delay;                        /* '<Root>/Delay' */
  real_T Delay1;                       /* '<Root>/Delay1' */
  real_T Constant;                     /* '<Root>/Constant' */
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T Gain2;                        /* '<Root>/Gain2' */
  real_T Gain3;                        /* '<Root>/Gain3' */
  real_T Gain6;                        /* '<Root>/Gain6' */
  real_T Gain7;                        /* '<Root>/Gain7' */
  real_T Gain8;                        /* '<Root>/Gain8' */
  real_T Gain4;                        /* '<Root>/Gain4' */
  real_T Gain5;                        /* '<Root>/Gain5' */
  real_T Gain26;                       /* '<Root>/Gain26' */
  real_T Gain9;                        /* '<Root>/Gain9' */
  real_T Gain10;                       /* '<Root>/Gain10' */
  real_T Gain11;                       /* '<Root>/Gain11' */
  real_T Gain12;                       /* '<Root>/Gain12' */
  real_T Gain13;                       /* '<Root>/Gain13' */
  real_T Gain14;                       /* '<Root>/Gain14' */
  real_T Gain15;                       /* '<Root>/Gain15' */
  real_T Gain16;                       /* '<Root>/Gain16' */
  real_T Gain17;                       /* '<Root>/Gain17' */
  real_T Gain18;                       /* '<Root>/Gain18' */
  real_T Gain19;                       /* '<Root>/Gain19' */
  real_T Gain20;                       /* '<Root>/Gain20' */
  real_T Gain21;                       /* '<Root>/Gain21' */
  real_T Gain22;                       /* '<Root>/Gain22' */
  real_T Gain23;                       /* '<Root>/Gain23' */
  real_T Add;                          /* '<Root>/Add' */
  real_T Add1;                         /* '<Root>/Add1' */
  real_T Gain24;                       /* '<Root>/Gain24' */
  real_T Gain25;                       /* '<Root>/Gain25' */
  real_T Clock;                        /* '<Root>/Clock' */
  real_T CANUnpack_o1;                 /* '<S27>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S27>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S27>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S27>/CAN Unpack' */
  real_T CANUnpack_o1_n;               /* '<S26>/CAN Unpack' */
  real_T CANUnpack_o2_f;               /* '<S26>/CAN Unpack' */
  real_T CANUnpack_o3_m;               /* '<S26>/CAN Unpack' */
  real_T CANUnpack_o4_g;               /* '<S26>/CAN Unpack' */
  real_T CANUnpack_o1_b;               /* '<S25>/CAN Unpack' */
  real_T CANUnpack_o2_g;               /* '<S25>/CAN Unpack' */
  real_T CANUnpack_o3_e;               /* '<S25>/CAN Unpack' */
  real_T CANUnpack_o4_h;               /* '<S25>/CAN Unpack' */
  real_T CANUnpack_o1_e;               /* '<S24>/CAN Unpack' */
  real_T CANUnpack_o2_e;               /* '<S24>/CAN Unpack' */
  real_T CANUnpack_o3_c;               /* '<S24>/CAN Unpack' */
  real_T CANUnpack_o4_i;               /* '<S24>/CAN Unpack' */
  real_T CANUnpack_o1_k;               /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o2_d;               /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o3_a;               /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o4_a;               /* '<S23>/CAN Unpack' */
  real_T CANUnpack_o1_nr;              /* '<S22>/CAN Unpack' */
  real_T CANUnpack_o2_n;               /* '<S22>/CAN Unpack' */
  real_T CANUnpack_o3_cp;              /* '<S22>/CAN Unpack' */
  real_T CANUnpack_o4_e;               /* '<S22>/CAN Unpack' */
  real_T CANUnpack_o1_p;               /* '<S21>/CAN Unpack' */
  real_T CANUnpack_o2_gg;              /* '<S21>/CAN Unpack' */
  real_T CANUnpack_o3_h;               /* '<S21>/CAN Unpack' */
  real_T CANUnpack_o4_j;               /* '<S21>/CAN Unpack' */
  real_T CANUnpack_o1_f;               /* '<S20>/CAN Unpack' */
  real_T CANUnpack_o2_l;               /* '<S20>/CAN Unpack' */
  real_T CANUnpack_o3_k;               /* '<S20>/CAN Unpack' */
  real_T CANUnpack_o4_is;              /* '<S20>/CAN Unpack' */
  real_T TmpSignalConversionAtSFunctionI[8];/* '<Root>/MATLAB Function1' */
  real_T danger;                       /* '<Root>/MATLAB Function1' */
  real_T stop;                         /* '<Root>/Chart' */
  real_T theta1;                       /* '<Root>/Chart' */
  real_T theta2;                       /* '<Root>/Chart' */
  real_T c;                            /* '<Root>/Chart' */
  real_T T1;                           /* '<Root>/Chart' */
  real_T T2;                           /* '<Root>/Chart' */
  real_T Kp1;                          /* '<Root>/Chart' */
  real_T Kp2;                          /* '<Root>/Chart' */
  real_T Kd1;                          /* '<Root>/Chart' */
  real_T Kd2;                          /* '<Root>/Chart' */
  int32_T WhileIterator;               /* '<S11>/While Iterator' */
  uint8_T CANUnpack_o5;                /* '<S27>/CAN Unpack' */
  uint8_T CANUnpack_o5_c;              /* '<S26>/CAN Unpack' */
  uint8_T CANUnpack_o5_i;              /* '<S25>/CAN Unpack' */
  uint8_T CANUnpack_o5_l;              /* '<S24>/CAN Unpack' */
  uint8_T CANUnpack_o5_f;              /* '<S23>/CAN Unpack' */
  uint8_T CANUnpack_o5_cc;             /* '<S22>/CAN Unpack' */
  uint8_T CANUnpack_o5_fk;             /* '<S21>/CAN Unpack' */
  uint8_T CANUnpack_o5_p;              /* '<S20>/CAN Unpack' */
  uint8_T MultiportSwitch[8];          /* '<S10>/Multiport Switch' */
  uint8_T BytePacking[8];              /* '<S10>/Byte Packing' */
  uint8_T MultiportSwitch_a[8];        /* '<S9>/Multiport Switch' */
  uint8_T BytePacking_o[8];            /* '<S9>/Byte Packing' */
  uint8_T MultiportSwitch_p[8];        /* '<S8>/Multiport Switch' */
  uint8_T BytePacking_a[8];            /* '<S8>/Byte Packing' */
  uint8_T MultiportSwitch_c[8];        /* '<S7>/Multiport Switch' */
  uint8_T BytePacking_f[8];            /* '<S7>/Byte Packing' */
  uint8_T MultiportSwitch_ce[8];       /* '<S6>/Multiport Switch' */
  uint8_T BytePacking_p[8];            /* '<S6>/Byte Packing' */
  uint8_T MultiportSwitch_i[8];        /* '<S5>/Multiport Switch' */
  uint8_T BytePacking_d[8];            /* '<S5>/Byte Packing' */
  uint8_T MultiportSwitch_p2[8];       /* '<S4>/Multiport Switch' */
  uint8_T BytePacking_k[8];            /* '<S4>/Byte Packing' */
  uint8_T MultiportSwitch_f[8];        /* '<S3>/Multiport Switch' */
  uint8_T BytePacking_or[8];           /* '<S3>/Byte Packing' */
  boolean_T CANRead_o1;                /* '<S11>/CAN Read' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats_i;/* '<S27>/bytes -> floats' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats_f;/* '<S26>/bytes -> floats' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats_o;/* '<S25>/bytes -> floats' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats_g;/* '<S24>/bytes -> floats' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats_er;/* '<S23>/bytes -> floats' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats_c;/* '<S22>/bytes -> floats' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats_e;/* '<S21>/bytes -> floats' */
  B_bytesfloats_main_quad_rev3__T sf_bytesfloats;/* '<S20>/bytes -> floats' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes_kd;/* '<S10>/floats -> bytes' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes_k;/* '<S9>/floats -> bytes' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes_bb;/* '<S8>/floats -> bytes' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes_if;/* '<S7>/floats -> bytes' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes_i;/* '<S6>/floats -> bytes' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes_o;/* '<S5>/floats -> bytes' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes_b;/* '<S4>/floats -> bytes' */
  B_floatsbytes_main_quad_rev3__T sf_floatsbytes;/* '<S3>/floats -> bytes' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_main_quad_rev3_21_200pm_T {
  real_T Delay_DSTATE;                 /* '<Root>/Delay' */
  real_T Delay1_DSTATE;                /* '<Root>/Delay1' */
  real_T done;                         /* '<Root>/Chart' */
  real_T pf;                           /* '<Root>/Chart' */
  real_T tstep;                        /* '<Root>/Chart' */
  real_T to;                           /* '<Root>/Chart' */
  real_T po1;                          /* '<Root>/Chart' */
  real_T po2;                          /* '<Root>/Chart' */
  real_T slope1;                       /* '<Root>/Chart' */
  real_T slope2;                       /* '<Root>/Chart' */
  real_T Th2Th1;                       /* '<Root>/Chart' */
  void *CANSetup_PWORK;                /* '<Root>/CAN Setup ' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Chart;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_j;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_m;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_p;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_f;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Const;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_MATLA;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_While;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_m;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_l;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_g;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_i;   /* synthesized block */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<Root>/To Workspace4' */

  void *CANRead_PWORK;                 /* '<S11>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANRe;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfAct;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_p;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_l;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_If_lh;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_m;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_If_mc;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_If_pz;   /* synthesized block */

  void *CANWrite1_PWORK;               /* '<S10>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Mode_;   /* synthesized block */

  void *CANWrite1_PWORK_p;             /* '<S9>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_ng;   /* synthesized block */

  void *CANWrite1_PWORK_f;             /* '<S8>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_ez;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_D_ng2;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Mod_b;   /* synthesized block */

  void *CANWrite1_PWORK_j;             /* '<S7>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_D_ezf;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor__ng2p;   /* synthesized block */

  void *CANWrite1_PWORK_d;             /* '<S6>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor__ezfp;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_ng2pm;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Mo_b5;   /* synthesized block */

  void *CANWrite1_PWORK_g;             /* '<S5>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_ezfpr;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFo_ng2pmt;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_M_b5k;   /* synthesized block */

  void *CANWrite1_PWORK_i;             /* '<S4>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFo_ezfprx;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedF_ng2pmtv;   /* synthesized block */

  void *CANWrite1_PWORK_fb;            /* '<S3>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedF_ezfprxu;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_Inserted_ng2pmtv1;   /* synthesized block */

  int32_T sfEvent;                     /* '<Root>/Chart' */
  uint32_T is_c8_main_quad_rev3_21_200pm;/* '<Root>/Chart' */
  uint32_T is_Command;                 /* '<Root>/Chart' */
  int_T CANStatus_IWORK[34];           /* '<Root>/CAN Status' */
  int_T CANUnpack_ModeSignalID;        /* '<S27>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S27>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_d;      /* '<S26>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_a;      /* '<S26>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_dx;     /* '<S25>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_n;      /* '<S25>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_h;      /* '<S24>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_j;      /* '<S24>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_hh;     /* '<S23>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_c;      /* '<S23>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_j;      /* '<S22>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_h;      /* '<S22>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_n;      /* '<S21>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_m;      /* '<S21>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_du;     /* '<S20>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_f;      /* '<S20>/CAN Unpack' */
  int_T BytePacking_IWORK[2];          /* '<S10>/Byte Packing' */
  int_T BytePacking_IWORK_j[2];        /* '<S9>/Byte Packing' */
  int_T BytePacking_IWORK_f[2];        /* '<S8>/Byte Packing' */
  int_T BytePacking_IWORK_a[2];        /* '<S7>/Byte Packing' */
  int_T BytePacking_IWORK_h[2];        /* '<S6>/Byte Packing' */
  int_T BytePacking_IWORK_c[2];        /* '<S5>/Byte Packing' */
  int_T BytePacking_IWORK_i[2];        /* '<S4>/Byte Packing' */
  int_T BytePacking_IWORK_n[2];        /* '<S3>/Byte Packing' */
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c8_main_quad_rev3_21_;/* '<Root>/Chart' */
};

/* Real-time Model Data Structure */
struct tag_RTM_main_quad_rev3_21_200pm_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[2];
    SimStruct childSFunctions[11];
    SimStruct *childSFunctionPtrs[11];
    struct _ssBlkInfo2 blkInfo2[11];
    struct _ssSFcnModelMethods2 methods2[11];
    struct _ssSFcnModelMethods3 methods3[11];
    struct _ssSFcnModelMethods4 methods4[11];
    struct _ssStatesInfo2 statesInfo2[11];
    ssPeriodicStatesInfo periodicStatesInfo[11];
    struct _ssPortInfo2 inputOutputPortInfo2[11];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn9;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[34];
      mxArray *params[34];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn10;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_main_quad_rev3_21_200pm_T main_quad_rev3_21_200pm_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_main_quad_rev3_21_200pm_T main_quad_rev3_21_200pm_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void main_quad_rev3_21_200pm_initialize(void);
  extern void main_quad_rev3_21_200pm_step(void);
  extern void main_quad_rev3_21_200pm_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_main_quad_rev3_21_200pm_T *const main_quad_rev3_21_200pm_M;

#ifdef __cplusplus

}
#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'main_quad_rev3_21_200pm'
 * '<S1>'   : 'main_quad_rev3_21_200pm/Chart'
 * '<S2>'   : 'main_quad_rev3_21_200pm/MATLAB Function1'
 * '<S3>'   : 'main_quad_rev3_21_200pm/Simulink Function1'
 * '<S4>'   : 'main_quad_rev3_21_200pm/Simulink Function2'
 * '<S5>'   : 'main_quad_rev3_21_200pm/Simulink Function3'
 * '<S6>'   : 'main_quad_rev3_21_200pm/Simulink Function4'
 * '<S7>'   : 'main_quad_rev3_21_200pm/Simulink Function5'
 * '<S8>'   : 'main_quad_rev3_21_200pm/Simulink Function6'
 * '<S9>'   : 'main_quad_rev3_21_200pm/Simulink Function7'
 * '<S10>'  : 'main_quad_rev3_21_200pm/Simulink Function8'
 * '<S11>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem'
 * '<S12>'  : 'main_quad_rev3_21_200pm/Simulink Function1/floats -> bytes'
 * '<S13>'  : 'main_quad_rev3_21_200pm/Simulink Function2/floats -> bytes'
 * '<S14>'  : 'main_quad_rev3_21_200pm/Simulink Function3/floats -> bytes'
 * '<S15>'  : 'main_quad_rev3_21_200pm/Simulink Function4/floats -> bytes'
 * '<S16>'  : 'main_quad_rev3_21_200pm/Simulink Function5/floats -> bytes'
 * '<S17>'  : 'main_quad_rev3_21_200pm/Simulink Function6/floats -> bytes'
 * '<S18>'  : 'main_quad_rev3_21_200pm/Simulink Function7/floats -> bytes'
 * '<S19>'  : 'main_quad_rev3_21_200pm/Simulink Function8/floats -> bytes'
 * '<S20>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem'
 * '<S21>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem1'
 * '<S22>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem2'
 * '<S23>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem3'
 * '<S24>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem4'
 * '<S25>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem5'
 * '<S26>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem6'
 * '<S27>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem7'
 * '<S28>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem/bytes -> floats'
 * '<S29>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem1/bytes -> floats'
 * '<S30>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem2/bytes -> floats'
 * '<S31>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem3/bytes -> floats'
 * '<S32>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem4/bytes -> floats'
 * '<S33>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem5/bytes -> floats'
 * '<S34>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem6/bytes -> floats'
 * '<S35>'  : 'main_quad_rev3_21_200pm/While Iterator Subsystem/If Action Subsystem7/bytes -> floats'
 */
#endif                               /* RTW_HEADER_main_quad_rev3_21_200pm_h_ */

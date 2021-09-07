/*
 * Main_Sept1_2021.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Main_Sept1_2021".
 *
 * Model version              : 1.35
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Mon Sep  6 17:34:34 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Main_Sept1_2021_h_
#define RTW_HEADER_Main_Sept1_2021_h_
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
#include "Main_Sept1_2021_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Main_Sept1_2021_cal.h"
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

/* Block signals for system '<S4>/floats -> bytes' */
struct B_floatsbytes_Main_Sept1_2021_T {
  uint8_T b[8];                        /* '<S4>/floats -> bytes' */
};

/* Block signals (default storage) */
struct B_Main_Sept1_2021_T {
  CAN_DATATYPE CANRead_o2;             /* '<S6>/CAN Read' */
  CAN_DATATYPE CANPack1;               /* '<S5>/CAN Pack1' */
  CAN_DATATYPE CANmsg2;                /* '<S4>/CAN Pack1' */
  real_T Delay;                        /* '<Root>/Delay' */
  real_T Delay1;                       /* '<Root>/Delay1' */
  real_T Constant;                     /* '<Root>/Constant' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Constant8;                    /* '<Root>/Constant8' */
  real_T Constant2;                    /* '<Root>/Constant2' */
  real_T Clock;                        /* '<Root>/Clock' */
  real_T Gain_m;                       /* '<S6>/Gain' */
  real_T CANUnpack_o1;                 /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S10>/CAN Unpack' */
  real_T position;                     /* '<S10>/bytes -> floats' */
  real_T velocity;                     /* '<S10>/bytes -> floats' */
  real_T I_ff;                         /* '<S10>/bytes -> floats' */
  real_T CANUnpack_o1_f;               /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o2_l;               /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o3_k;               /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o4_i;               /* '<S9>/CAN Unpack' */
  real_T position_j;                   /* '<S9>/bytes -> floats' */
  real_T velocity_h;                   /* '<S9>/bytes -> floats' */
  real_T I_ff_o;                       /* '<S9>/bytes -> floats' */
  real_T TmpSignalConversionAtSFunctionI[2];/* '<Root>/MATLAB Function1' */
  real_T danger;                       /* '<Root>/MATLAB Function1' */
  real_T TmpSignalConversionAtSFunctio_l[2];/* '<Root>/MATLAB Function' */
  real_T TmpSignalConversionAtSFunctio_i[2];/* '<Root>/MATLAB Function' */
  real_T GRF;                          /* '<Root>/MATLAB Function' */
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
  real_T exitY;                        /* '<Root>/Chart' */
  real_T Tcalc1;                       /* '<Root>/Chart' */
  real_T Tcalc2;                       /* '<Root>/Chart' */
  int32_T WhileIterator;               /* '<S6>/While Iterator' */
  uint8_T CANUnpack_o5;                /* '<S10>/CAN Unpack' */
  uint8_T CANUnpack_o5_p;              /* '<S9>/CAN Unpack' */
  uint8_T MultiportSwitch[8];          /* '<S5>/Multiport Switch' */
  uint8_T BytePacking[8];              /* '<S5>/Byte Packing' */
  uint8_T MultiportSwitch_f[8];        /* '<S4>/Multiport Switch' */
  uint8_T BytePacking_o[8];            /* '<S4>/Byte Packing' */
  boolean_T CANRead_o1;                /* '<S6>/CAN Read' */
  B_floatsbytes_Main_Sept1_2021_T sf_floatsbytes_o;/* '<S5>/floats -> bytes' */
  B_floatsbytes_Main_Sept1_2021_T sf_floatsbytes;/* '<S4>/floats -> bytes' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_Main_Sept1_2021_T {
  real_T Delay_DSTATE;                 /* '<Root>/Delay' */
  real_T Delay1_DSTATE;                /* '<Root>/Delay1' */
  real_T done;                         /* '<Root>/Chart' */
  real_T pf;                           /* '<Root>/Chart' */
  real_T po;                           /* '<Root>/Chart' */
  real_T slope;                        /* '<Root>/Chart' */
  real_T tstep;                        /* '<Root>/Chart' */
  real_T to;                           /* '<Root>/Chart' */
  real_T po1;                          /* '<Root>/Chart' */
  real_T po2;                          /* '<Root>/Chart' */
  real_T slope1;                       /* '<Root>/Chart' */
  real_T slope2;                       /* '<Root>/Chart' */
  real_T Idle;                         /* '<Root>/Chart' */
  real_T hop;                          /* '<Root>/Chart' */
  real_T time;                         /* '<Root>/Chart' */
  real_T Tcalc1Entry;                  /* '<Root>/Chart' */
  real_T Tcalc2Entry;                  /* '<Root>/Chart' */
  void *CANSetup_PWORK;                /* '<Root>/CAN Setup ' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Chart;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_o;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Cha_j;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Ch_bl;   /* synthesized block */

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
  } TAQSigLogging_InsertedFor_MAT_h;   /* synthesized block */

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
  } TAQSigLogging_InsertedFor_Whi_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_g;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Whi_i;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Wh_eg;   /* synthesized block */

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<Root>/To Workspace' */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<Root>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<Root>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<Root>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<Root>/To Workspace4' */

  void *CANRead_PWORK;                 /* '<S6>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANRe;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfAct;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_p;   /* synthesized block */

  void *CANWrite1_PWORK;               /* '<S5>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Mode_;   /* synthesized block */

  void *CANWrite1_PWORK_f;             /* '<S4>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_ng;   /* synthesized block */

  int32_T sfEvent;                     /* '<Root>/Chart' */
  uint32_T is_c8_Main_Sept1_2021;      /* '<Root>/Chart' */
  uint32_T is_Command;                 /* '<Root>/Chart' */
  uint32_T is_Flight;                  /* '<Root>/Chart' */
  int_T CANStatus_IWORK[34];           /* '<Root>/CAN Status' */
  int_T CANUnpack_ModeSignalID;        /* '<S10>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S10>/CAN Unpack' */
  int_T CANUnpack_ModeSignalID_d;      /* '<S9>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_f;      /* '<S9>/CAN Unpack' */
  int_T BytePacking_IWORK[2];          /* '<S5>/Byte Packing' */
  int_T BytePacking_IWORK_n[2];        /* '<S4>/Byte Packing' */
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c8_Main_Sept1_2021;/* '<Root>/Chart' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Main_Sept1_2021_T {
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
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
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
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[34];
      mxArray *params[34];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;
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

  extern struct B_Main_Sept1_2021_T Main_Sept1_2021_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_Main_Sept1_2021_T Main_Sept1_2021_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void Main_Sept1_2021_initialize(void);
  extern void Main_Sept1_2021_step(void);
  extern void Main_Sept1_2021_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Main_Sept1_2021_T *const Main_Sept1_2021_M;

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
 * '<Root>' : 'Main_Sept1_2021'
 * '<S1>'   : 'Main_Sept1_2021/Chart'
 * '<S2>'   : 'Main_Sept1_2021/MATLAB Function'
 * '<S3>'   : 'Main_Sept1_2021/MATLAB Function1'
 * '<S4>'   : 'Main_Sept1_2021/Simulink Function1'
 * '<S5>'   : 'Main_Sept1_2021/Simulink Function3'
 * '<S6>'   : 'Main_Sept1_2021/While Iterator Subsystem'
 * '<S7>'   : 'Main_Sept1_2021/Simulink Function1/floats -> bytes'
 * '<S8>'   : 'Main_Sept1_2021/Simulink Function3/floats -> bytes'
 * '<S9>'   : 'Main_Sept1_2021/While Iterator Subsystem/If Action Subsystem'
 * '<S10>'  : 'Main_Sept1_2021/While Iterator Subsystem/If Action Subsystem1'
 * '<S11>'  : 'Main_Sept1_2021/While Iterator Subsystem/If Action Subsystem/bytes -> floats'
 * '<S12>'  : 'Main_Sept1_2021/While Iterator Subsystem/If Action Subsystem1/bytes -> floats'
 */
#endif                                 /* RTW_HEADER_Main_Sept1_2021_h_ */

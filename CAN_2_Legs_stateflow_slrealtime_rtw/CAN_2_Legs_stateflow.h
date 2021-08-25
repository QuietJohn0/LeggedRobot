/*
 * CAN_2_Legs_stateflow.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CAN_2_Legs_stateflow".
 *
 * Model version              : 1.11
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Tue Aug 24 15:02:32 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CAN_2_Legs_stateflow_h_
#define RTW_HEADER_CAN_2_Legs_stateflow_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <string.h>
#include <logsrv.h>
#include <cstring>
#include <math.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "can_message.h"
#include "CAN_2_Legs_stateflow_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "CAN_2_Legs_stateflow_cal.h"
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

/* Block signals for system '<S6>/bytes -> floats' */
struct B_bytesfloats_CAN_2_Legs_stat_T {
  real_T position;                     /* '<S6>/bytes -> floats' */
  real_T velocity;                     /* '<S6>/bytes -> floats' */
  real_T I_ff;                         /* '<S6>/bytes -> floats' */
};

/* Block signals for system '<S4>/floats -> bytes' */
struct B_floatsbytes_CAN_2_Legs_stat_T {
  uint8_T b[8];                        /* '<S4>/floats -> bytes' */
};

/* Block signals (default storage) */
struct B_CAN_2_Legs_stateflow_T {
  CAN_DATATYPE CANRead_o2;             /* '<S5>/CAN Read' */
  CAN_DATATYPE CANPack1;               /* '<S5>/CAN Pack1' */
  CAN_DATATYPE CANRead_o2_i;           /* '<S4>/CAN Read' */
  CAN_DATATYPE CANPack1_i;             /* '<S4>/CAN Pack1' */
  real_T Constant1;                    /* '<Root>/Constant1' */
  real_T Delay;                        /* '<Root>/Delay' */
  real_T Constant;                     /* '<Root>/Constant' */
  real_T Constant2;                    /* '<Root>/Constant2' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Constant8;                    /* '<Root>/Constant8' */
  real_T CANUnpack_o1;                 /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o1_o;               /* '<S6>/CAN Unpack' */
  real_T CANUnpack_o2_m;               /* '<S6>/CAN Unpack' */
  real_T CANUnpack_o3_o;               /* '<S6>/CAN Unpack' */
  real_T CANUnpack_o4_f;               /* '<S6>/CAN Unpack' */
  real_T TmpSignalConversionAtSFunctionI[2];/* '<Root>/MATLAB Function1' */
  real_T danger;                       /* '<Root>/MATLAB Function1' */
  real_T GRF;                          /* '<Root>/MATLAB Function' */
  real_T stop;                         /* '<Root>/Chart' */
  real_T theta1;                       /* '<Root>/Chart' */
  real_T theta2;                       /* '<Root>/Chart' */
  real_T c;                            /* '<Root>/Chart' */
  uint8_T MultiportSwitch[8];          /* '<S5>/Multiport Switch' */
  uint8_T BytePacking[8];              /* '<S5>/Byte Packing' */
  uint8_T CANUnpack_o5;                /* '<S9>/CAN Unpack' */
  uint8_T MultiportSwitch_f[8];        /* '<S4>/Multiport Switch' */
  uint8_T BytePacking_o[8];            /* '<S4>/Byte Packing' */
  uint8_T CANUnpack_o5_m;              /* '<S6>/CAN Unpack' */
  boolean_T CANRead_o1;                /* '<S5>/CAN Read' */
  boolean_T CANRead_o1_e;              /* '<S4>/CAN Read' */
  B_floatsbytes_CAN_2_Legs_stat_T sf_floatsbytes_o;/* '<S5>/floats -> bytes' */
  B_bytesfloats_CAN_2_Legs_stat_T sf_bytesfloats_k;/* '<S9>/bytes -> floats' */
  B_floatsbytes_CAN_2_Legs_stat_T sf_floatsbytes;/* '<S4>/floats -> bytes' */
  B_bytesfloats_CAN_2_Legs_stat_T sf_bytesfloats;/* '<S6>/bytes -> floats' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_CAN_2_Legs_stateflow_T {
  real_T Delay_DSTATE;                 /* '<Root>/Delay' */
  real_T done;                         /* '<Root>/Chart' */
  real_T pf;                           /* '<Root>/Chart' */
  real_T po;                           /* '<Root>/Chart' */
  real_T slope;                        /* '<Root>/Chart' */
  real_T tstep;                        /* '<Root>/Chart' */
  real_T to;                           /* '<Root>/Chart' */
  void *CANSetup_PWORK;                /* '<Root>/CAN Setup ' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_MATLA;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_MAT_h;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Simul;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_i;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_f;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_p;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_e;   /* synthesized block */

  void *CANRead_PWORK;                 /* '<S5>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfAct;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_b;   /* synthesized block */

  void *CANWrite1_PWORK;               /* '<S5>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANUn;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_bytes;   /* synthesized block */

  void *CANRead_PWORK_l;               /* '<S4>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_l;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_If_bf;   /* synthesized block */

  void *CANWrite1_PWORK_f;             /* '<S4>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_ng;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CAN_o;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_byt_l;   /* synthesized block */

  int32_T sfEvent;                     /* '<Root>/Chart' */
  uint32_T is_c7_CAN_2_Legs_stateflow; /* '<Root>/Chart' */
  uint32_T is_Command;                 /* '<Root>/Chart' */
  int_T CANStatus_IWORK[34];           /* '<Root>/CAN Status' */
  int_T BytePacking_IWORK[2];          /* '<S5>/Byte Packing' */
  int_T CANUnpack_ModeSignalID;        /* '<S9>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S9>/CAN Unpack' */
  int_T BytePacking_IWORK_n[2];        /* '<S4>/Byte Packing' */
  int_T CANUnpack_ModeSignalID_l;      /* '<S6>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_g;      /* '<S6>/CAN Unpack' */
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S5>/If Action Subsystem' */
  int8_T IfActionSubsystem_SubsysRanBC_j;/* '<S4>/If Action Subsystem' */
  uint8_T is_active_c7_CAN_2_Legs_statefl;/* '<Root>/Chart' */
};

/* Real-time Model Data Structure */
struct tag_RTM_CAN_2_Legs_stateflow_T {
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
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[6];
    SimStruct *childSFunctionPtrs[6];
    struct _ssBlkInfo2 blkInfo2[6];
    struct _ssSFcnModelMethods2 methods2[6];
    struct _ssSFcnModelMethods3 methods3[6];
    struct _ssSFcnModelMethods4 methods4[6];
    struct _ssStatesInfo2 statesInfo2[6];
    ssPeriodicStatesInfo periodicStatesInfo[6];
    struct _ssPortInfo2 inputOutputPortInfo2[6];
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
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[34];
      mxArray *params[34];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn5;
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
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_CAN_2_Legs_stateflow_T CAN_2_Legs_stateflow_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_CAN_2_Legs_stateflow_T CAN_2_Legs_stateflow_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void CAN_2_Legs_stateflow_initialize(void);
  extern void CAN_2_Legs_stateflow_step(void);
  extern void CAN_2_Legs_stateflow_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_CAN_2_Legs_stateflow_T *const CAN_2_Legs_stateflow_M;

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
 * '<Root>' : 'CAN_2_Legs_stateflow'
 * '<S1>'   : 'CAN_2_Legs_stateflow/Chart'
 * '<S2>'   : 'CAN_2_Legs_stateflow/MATLAB Function'
 * '<S3>'   : 'CAN_2_Legs_stateflow/MATLAB Function1'
 * '<S4>'   : 'CAN_2_Legs_stateflow/Simulink Function1'
 * '<S5>'   : 'CAN_2_Legs_stateflow/Simulink Function3'
 * '<S6>'   : 'CAN_2_Legs_stateflow/Simulink Function1/If Action Subsystem'
 * '<S7>'   : 'CAN_2_Legs_stateflow/Simulink Function1/floats -> bytes'
 * '<S8>'   : 'CAN_2_Legs_stateflow/Simulink Function1/If Action Subsystem/bytes -> floats'
 * '<S9>'   : 'CAN_2_Legs_stateflow/Simulink Function3/If Action Subsystem'
 * '<S10>'  : 'CAN_2_Legs_stateflow/Simulink Function3/floats -> bytes'
 * '<S11>'  : 'CAN_2_Legs_stateflow/Simulink Function3/If Action Subsystem/bytes -> floats'
 */
#endif                                 /* RTW_HEADER_CAN_2_Legs_stateflow_h_ */

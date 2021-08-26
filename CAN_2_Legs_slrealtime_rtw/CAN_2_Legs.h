/*
 * CAN_2_Legs.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CAN_2_Legs".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Wed Aug 25 16:05:07 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CAN_2_Legs_h_
#define RTW_HEADER_CAN_2_Legs_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <string.h>
#include <cstring>
#include <math.h>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "can_message.h"
#include "CAN_2_Legs_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "CAN_2_Legs_cal.h"
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
struct B_floatsbytes_CAN_2_Legs_T {
  uint8_T b[8];                        /* '<S3>/floats -> bytes' */
};

/* Block signals for system '<S5>/Subsystem' */
struct B_Subsystem_CAN_2_Legs_T {
  real_T Clock1;                       /* '<S14>/Clock1' */
};

/* Block states (default storage) for system '<S5>/Subsystem' */
struct DW_Subsystem_CAN_2_Legs_T {
  int8_T Subsystem_SubsysRanBC;        /* '<S5>/Subsystem' */
};

/* Block signals (default storage) */
struct B_CAN_2_Legs_T {
  CAN_DATATYPE CANRead_o2;             /* '<S4>/CAN Read' */
  CAN_DATATYPE CANPack1;               /* '<S4>/CAN Pack1' */
  CAN_DATATYPE CANRead_o2_i;           /* '<S3>/CAN Read' */
  CAN_DATATYPE CANPack1_i;             /* '<S3>/CAN Pack1' */
  real_T mode;                         /* '<Root>/Constant' */
  real_T DataStoreRead;                /* '<S5>/Data Store Read' */
  real_T Clock;                        /* '<S5>/Clock' */
  real_T DataStoreRead1;               /* '<S5>/Data Store Read1' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Delay;                        /* '<S5>/Delay' */
  real_T Constant8;                    /* '<Root>/Constant8' */
  real_T DataStoreRead_i;              /* '<S6>/Data Store Read' */
  real_T Clock_m;                      /* '<S6>/Clock' */
  real_T DataStoreRead1_e;             /* '<S6>/Data Store Read1' */
  real_T Delay_i;                      /* '<S6>/Delay' */
  real_T Constant2;                    /* '<Root>/Constant2' */
  real_T pcp1;                         /* '<Root>/Add' */
  real_T Constant7;                    /* '<Root>/Constant7' */
  real_T p;                            /* '<S6>/MATLAB Function2' */
  real_T p_p;                          /* '<S5>/MATLAB Function2' */
  real_T CANUnpack_o1;                 /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S10>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S10>/CAN Unpack' */
  real_T position;                     /* '<S10>/bytes -> floats' */
  real_T velocity;                     /* '<S10>/bytes -> floats' */
  real_T I_ff;                         /* '<S10>/bytes -> floats' */
  real_T Gain_l;                       /* '<S3>/Gain' */
  real_T CANUnpack_o1_o;               /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o2_m;               /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o3_o;               /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o4_f;               /* '<S7>/CAN Unpack' */
  real_T position_f;                   /* '<S7>/bytes -> floats' */
  real_T velocity_d;                   /* '<S7>/bytes -> floats' */
  real_T I_ff_n;                       /* '<S7>/bytes -> floats' */
  real_T TmpSignalConversionAtSFunctionI[2];/* '<Root>/MATLAB Function1' */
  real_T danger;                       /* '<Root>/MATLAB Function1' */
  real_T GRF;                          /* '<Root>/MATLAB Function' */
  uint32_T CANUnpack_o5;               /* '<S10>/CAN Unpack' */
  uint32_T CANUnpack_o5_m;             /* '<S7>/CAN Unpack' */
  uint8_T MultiportSwitch[8];          /* '<S4>/Multiport Switch' */
  uint8_T BytePacking[8];              /* '<S4>/Byte Packing' */
  uint8_T CANUnpack_o6;                /* '<S10>/CAN Unpack' */
  uint8_T MultiportSwitch_f[8];        /* '<S3>/Multiport Switch' */
  uint8_T BytePacking_o[8];            /* '<S3>/Byte Packing' */
  uint8_T CANUnpack_o6_b;              /* '<S7>/CAN Unpack' */
  boolean_T CANRead_o1;                /* '<S4>/CAN Read' */
  boolean_T CANRead_o1_e;              /* '<S3>/CAN Read' */
  B_Subsystem_CAN_2_Legs_T Subsystem_d;/* '<S6>/Subsystem' */
  B_Subsystem_CAN_2_Legs_T Subsystem;  /* '<S5>/Subsystem' */
  B_floatsbytes_CAN_2_Legs_T sf_floatsbytes_o;/* '<S4>/floats -> bytes' */
  B_floatsbytes_CAN_2_Legs_T sf_floatsbytes;/* '<S3>/floats -> bytes' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_CAN_2_Legs_T {
  real_T Delay_DSTATE;                 /* '<S5>/Delay' */
  real_T Delay_DSTATE_b;               /* '<S6>/Delay' */
  real_T to;                           /* '<S5>/Data Store Memory' */
  real_T po;                           /* '<S5>/Data Store Memory1' */
  real_T to_f;                         /* '<S6>/Data Store Memory' */
  real_T po_m;                         /* '<S6>/Data Store Memory1' */
  void *CANSetup_PWORK;                /* '<Root>/CAN Setup ' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Add_a;   /* synthesized block */

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
  } TAQSigLogging_InsertedFor_Simul;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_i;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Si_io;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_f;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_p;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Sim_h;   /* synthesized block */

  void *CANRead_PWORK;                 /* '<S4>/CAN Read' */
  void *CANWrite1_PWORK;               /* '<S4>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  void *CANRead_PWORK_l;               /* '<S3>/CAN Read' */
  void *CANWrite1_PWORK_f;             /* '<S3>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_ng;   /* synthesized block */

  int_T CANStatus_IWORK[34];           /* '<Root>/CAN Status' */
  int_T BytePacking_IWORK[2];          /* '<S4>/Byte Packing' */
  int_T CANUnpack_ModeSignalID;        /* '<S10>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S10>/CAN Unpack' */
  int_T BytePacking_IWORK_n[2];        /* '<S3>/Byte Packing' */
  int_T CANUnpack_ModeSignalID_l;      /* '<S7>/CAN Unpack' */
  int_T CANUnpack_StatusPortID_g;      /* '<S7>/CAN Unpack' */
  int8_T If_ActiveSubsystem;           /* '<S5>/If' */
  int8_T If_ActiveSubsystem_b;         /* '<S6>/If' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S4>/If Action Subsystem' */
  int8_T IfActionSubsystem_SubsysRanBC_j;/* '<S3>/If Action Subsystem' */
  boolean_T icLoad;                    /* '<S5>/Delay' */
  boolean_T icLoad_j;                  /* '<S6>/Delay' */
  DW_Subsystem_CAN_2_Legs_T Subsystem_d;/* '<S6>/Subsystem' */
  DW_Subsystem_CAN_2_Legs_T Subsystem; /* '<S5>/Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_CAN_2_Legs_T {
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

  extern struct B_CAN_2_Legs_T CAN_2_Legs_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_CAN_2_Legs_T CAN_2_Legs_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void CAN_2_Legs_initialize(void);
  extern void CAN_2_Legs_step(void);
  extern void CAN_2_Legs_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_CAN_2_Legs_T *const CAN_2_Legs_M;

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
 * '<Root>' : 'CAN_2_Legs'
 * '<S1>'   : 'CAN_2_Legs/MATLAB Function'
 * '<S2>'   : 'CAN_2_Legs/MATLAB Function1'
 * '<S3>'   : 'CAN_2_Legs/Simulink Function1'
 * '<S4>'   : 'CAN_2_Legs/Simulink Function3'
 * '<S5>'   : 'CAN_2_Legs/Subsystem'
 * '<S6>'   : 'CAN_2_Legs/Subsystem2'
 * '<S7>'   : 'CAN_2_Legs/Simulink Function1/If Action Subsystem'
 * '<S8>'   : 'CAN_2_Legs/Simulink Function1/floats -> bytes'
 * '<S9>'   : 'CAN_2_Legs/Simulink Function1/If Action Subsystem/bytes -> floats'
 * '<S10>'  : 'CAN_2_Legs/Simulink Function3/If Action Subsystem'
 * '<S11>'  : 'CAN_2_Legs/Simulink Function3/floats -> bytes'
 * '<S12>'  : 'CAN_2_Legs/Simulink Function3/If Action Subsystem/bytes -> floats'
 * '<S13>'  : 'CAN_2_Legs/Subsystem/MATLAB Function2'
 * '<S14>'  : 'CAN_2_Legs/Subsystem/Subsystem'
 * '<S15>'  : 'CAN_2_Legs/Subsystem2/MATLAB Function2'
 * '<S16>'  : 'CAN_2_Legs/Subsystem2/Subsystem'
 */
#endif                                 /* RTW_HEADER_CAN_2_Legs_h_ */

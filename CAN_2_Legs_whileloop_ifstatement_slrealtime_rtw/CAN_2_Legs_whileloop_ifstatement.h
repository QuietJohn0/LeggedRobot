/*
 * CAN_2_Legs_whileloop_ifstatement.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CAN_2_Legs_whileloop_ifstatement".
 *
 * Model version              : 1.15
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Wed Aug 25 16:39:07 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CAN_2_Legs_whileloop_ifstatement_h_
#define RTW_HEADER_CAN_2_Legs_whileloop_ifstatement_h_
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
#include "CAN_2_Legs_whileloop_ifstatement_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "CAN_2_Legs_whileloop_ifstatement_cal.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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

/* Block signals for system '<S1>/floats -> bytes' */
struct B_floatsbytes_CAN_2_Legs_whil_T {
  uint8_T b[8];                        /* '<S1>/floats -> bytes' */
};

/* Block signals for system '<S3>/Subsystem' */
struct B_Subsystem_CAN_2_Legs_whilel_T {
  real_T Clock1;                       /* '<S9>/Clock1' */
};

/* Block states (default storage) for system '<S3>/Subsystem' */
struct DW_Subsystem_CAN_2_Legs_while_T {
  int8_T Subsystem_SubsysRanBC;        /* '<S3>/Subsystem' */
};

/* Block signals (default storage) */
struct B_CAN_2_Legs_whileloop_ifstatement_T {
  CAN_DATATYPE CANRead_o2;             /* '<S5>/CAN Read' */
  CAN_DATATYPE CANPack1;               /* '<S2>/CAN Pack1' */
  CAN_DATATYPE CANmsg2;                /* '<S1>/CAN Pack1' */
  real_T mode;                         /* '<Root>/Constant' */
  real_T DataStoreRead;                /* '<S3>/Data Store Read' */
  real_T Clock;                        /* '<S3>/Clock' */
  real_T DataStoreRead1;               /* '<S3>/Data Store Read1' */
  real_T Gain;                         /* '<Root>/Gain' */
  real_T Delay;                        /* '<S3>/Delay' */
  real_T Constant8;                    /* '<Root>/Constant8' */
  real_T DataStoreRead_i;              /* '<S4>/Data Store Read' */
  real_T Clock_m;                      /* '<S4>/Clock' */
  real_T DataStoreRead1_e;             /* '<S4>/Data Store Read1' */
  real_T Delay_i;                      /* '<S4>/Delay' */
  real_T Constant2;                    /* '<Root>/Constant2' */
  real_T Position;                     /* '<S13>/Position' */
  real_T Velocity;                     /* '<S13>/Velocity' */
  real_T Current;                      /* '<S13>/Current' */
  real_T Position_n;                   /* '<S12>/Position' */
  real_T Velocity_i;                   /* '<S12>/Velocity' */
  real_T Current_c;                    /* '<S12>/Current' */
  real_T CANUnpack_o1;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S14>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S14>/CAN Unpack' */
  real_T position;                     /* '<S14>/bytes -> floats' */
  real_T velocity;                     /* '<S14>/bytes -> floats' */
  real_T I_ff;                         /* '<S14>/bytes -> floats' */
  real_T p;                            /* '<S4>/MATLAB Function2' */
  real_T p_p;                          /* '<S3>/MATLAB Function2' */
  uint32_T CANUnpack_o5;               /* '<S14>/CAN Unpack' */
  int32_T WhileIterator;               /* '<S5>/While Iterator' */
  uint8_T CANUnpack_o6;                /* '<S14>/CAN Unpack' */
  uint8_T MultiportSwitch[8];          /* '<S2>/Multiport Switch' */
  uint8_T BytePacking[8];              /* '<S2>/Byte Packing' */
  uint8_T MultiportSwitch_f[8];        /* '<S1>/Multiport Switch' */
  uint8_T BytePacking_o[8];            /* '<S1>/Byte Packing' */
  boolean_T CANRead_o1;                /* '<S5>/CAN Read' */
  B_Subsystem_CAN_2_Legs_whilel_T Subsystem_d;/* '<S4>/Subsystem' */
  B_Subsystem_CAN_2_Legs_whilel_T Subsystem;/* '<S3>/Subsystem' */
  B_floatsbytes_CAN_2_Legs_whil_T sf_floatsbytes_o;/* '<S2>/floats -> bytes' */
  B_floatsbytes_CAN_2_Legs_whil_T sf_floatsbytes;/* '<S1>/floats -> bytes' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_CAN_2_Legs_whileloop_ifstatement_T {
  real_T Delay_DSTATE;                 /* '<S3>/Delay' */
  real_T Delay_DSTATE_b;               /* '<S4>/Delay' */
  real_T to;                           /* '<S3>/Data Store Memory' */
  real_T po;                           /* '<S3>/Data Store Memory1' */
  real_T to_f;                         /* '<S4>/Data Store Memory' */
  real_T po_m;                         /* '<S4>/Data Store Memory1' */
  void *CANSetup_PWORK;                /* '<Root>/CAN Setup ' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Const;   /* synthesized block */

  void *CANRead_PWORK;                 /* '<S5>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANRe;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Enabl;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Ena_o;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Ena_p;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Ena_a;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfAct;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANUn;   /* synthesized block */

  void *CANWrite1_PWORK;               /* '<S2>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  void *CANWrite1_PWORK_f;             /* '<S1>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_De_ng;   /* synthesized block */

  int_T CANStatus_IWORK[34];           /* '<Root>/CAN Status' */
  int_T CANUnpack_ModeSignalID;        /* '<S14>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S14>/CAN Unpack' */
  int_T BytePacking_IWORK[2];          /* '<S2>/Byte Packing' */
  int_T BytePacking_IWORK_n[2];        /* '<S1>/Byte Packing' */
  int8_T If_ActiveSubsystem;           /* '<S3>/If' */
  int8_T If_ActiveSubsystem_b;         /* '<S4>/If' */
  int8_T EnabledSubsystem1_SubsysRanBC;/* '<S5>/Enabled Subsystem1' */
  int8_T EnabledSubsystem_SubsysRanBC; /* '<S5>/Enabled Subsystem' */
  boolean_T icLoad;                    /* '<S3>/Delay' */
  boolean_T icLoad_j;                  /* '<S4>/Delay' */
  DW_Subsystem_CAN_2_Legs_while_T Subsystem_d;/* '<S4>/Subsystem' */
  DW_Subsystem_CAN_2_Legs_while_T Subsystem;/* '<S3>/Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_CAN_2_Legs_whileloop_ifstatement_T {
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

  extern struct B_CAN_2_Legs_whileloop_ifstatement_T
    CAN_2_Legs_whileloop_ifstatement_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_CAN_2_Legs_whileloop_ifstatement_T
  CAN_2_Legs_whileloop_ifstatement_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void CAN_2_Legs_whileloop_ifstatement_initialize(void);
  extern void CAN_2_Legs_whileloop_ifstatement_step(void);
  extern void CAN_2_Legs_whileloop_ifstatement_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_CAN_2_Legs_whileloop_ifstatement_T *const
    CAN_2_Legs_whileloop_ifstatement_M;

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
 * '<Root>' : 'CAN_2_Legs_whileloop_ifstatement'
 * '<S1>'   : 'CAN_2_Legs_whileloop_ifstatement/Simulink Function1'
 * '<S2>'   : 'CAN_2_Legs_whileloop_ifstatement/Simulink Function3'
 * '<S3>'   : 'CAN_2_Legs_whileloop_ifstatement/Subsystem'
 * '<S4>'   : 'CAN_2_Legs_whileloop_ifstatement/Subsystem2'
 * '<S5>'   : 'CAN_2_Legs_whileloop_ifstatement/While Iterator Subsystem'
 * '<S6>'   : 'CAN_2_Legs_whileloop_ifstatement/Simulink Function1/floats -> bytes'
 * '<S7>'   : 'CAN_2_Legs_whileloop_ifstatement/Simulink Function3/floats -> bytes'
 * '<S8>'   : 'CAN_2_Legs_whileloop_ifstatement/Subsystem/MATLAB Function2'
 * '<S9>'   : 'CAN_2_Legs_whileloop_ifstatement/Subsystem/Subsystem'
 * '<S10>'  : 'CAN_2_Legs_whileloop_ifstatement/Subsystem2/MATLAB Function2'
 * '<S11>'  : 'CAN_2_Legs_whileloop_ifstatement/Subsystem2/Subsystem'
 * '<S12>'  : 'CAN_2_Legs_whileloop_ifstatement/While Iterator Subsystem/Enabled Subsystem'
 * '<S13>'  : 'CAN_2_Legs_whileloop_ifstatement/While Iterator Subsystem/Enabled Subsystem1'
 * '<S14>'  : 'CAN_2_Legs_whileloop_ifstatement/While Iterator Subsystem/If Action Subsystem'
 * '<S15>'  : 'CAN_2_Legs_whileloop_ifstatement/While Iterator Subsystem/If Action Subsystem/bytes -> floats'
 */
#endif                      /* RTW_HEADER_CAN_2_Legs_whileloop_ifstatement_h_ */

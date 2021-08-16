/*
 * Raw_Data_CAN_Subsystem.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Raw_Data_CAN_Subsystem".
 *
 * Model version              : 1.18
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Jul 30 16:15:50 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Raw_Data_CAN_Subsystem_h_
#define RTW_HEADER_Raw_Data_CAN_Subsystem_h_
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
#include "Raw_Data_CAN_Subsystem_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Raw_Data_CAN_Subsystem_cal.h"
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

/* Block signals (default storage) */
struct B_Raw_Data_CAN_Subsystem_T {
  CAN_DATATYPE CANRead_o2;             /* '<S2>/CAN Read' */
  CAN_DATATYPE CANPack1;               /* '<S2>/CAN Pack1' */
  real_T DataStoreRead2;               /* '<Root>/Data Store Read2' */
  real_T Onespin[5];                   /* '<Root>/One spin' */
  real_T DataStoreRead[5];             /* '<Root>/Data Store Read' */
  real_T Sum[5];                       /* '<Root>/Sum' */
  real_T CastToDouble[5];              /* '<Root>/Cast To Double' */
  real_T SumofElements;                /* '<Root>/Sum of Elements' */
  real_T DataStoreRead1;               /* '<Root>/Data Store Read1' */
  real_T Clock;                        /* '<S4>/Clock' */
  real_T DataStoreRead2_c;             /* '<S4>/Data Store Read2' */
  real_T DataStoreRead1_p;             /* '<S9>/Data Store Read1' */
  real_T Add;                          /* '<S9>/Add' */
  real_T DataStoreRead_b;              /* '<S2>/Data Store Read' */
  real_T SineWave1;                    /* '<S2>/Sine Wave1' */
  real_T SineWave;                     /* '<S2>/Sine Wave' */
  real_T pc;                           /* '<S2>/MATLAB Function' */
  real_T CANUnpack_o1;                 /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S5>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S5>/CAN Unpack' */
  real_T position;                     /* '<S5>/bytes -> floats' */
  real_T velocity;                     /* '<S5>/bytes -> floats' */
  real_T I_ff;                         /* '<S5>/bytes -> floats' */
  uint8_T Compare[5];                  /* '<S1>/Compare' */
  uint8_T MultiportSwitch[8];          /* '<S2>/Multiport Switch' */
  uint8_T BytePacking[8];              /* '<S2>/Byte Packing' */
  uint8_T b[8];                        /* '<S2>/floats -> bytes' */
  uint8_T CANUnpack_o5;                /* '<S5>/CAN Unpack' */
  int8_T CANWrite1;                    /* '<S2>/CAN Write1' */
  boolean_T CANRead_o1;                /* '<S2>/CAN Read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_Raw_Data_CAN_Subsystem_T {
  real_T c;                            /* '<Root>/Data Store Memory' */
  real_T reinput[5];                   /* '<Root>/Data Store Memory1' */
  void *CANSetup_PWORK;                /* '<S2>/CAN Setup ' */
  void *CANRead_PWORK;                 /* '<S2>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfAct;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_MATLA;   /* synthesized block */

  void *CANWrite1_PWORK;               /* '<S2>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANUn;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_bytes;   /* synthesized block */

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                /* '<S5>/To Workspace1' */

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                /* '<S5>/To Workspace2' */

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                /* '<S5>/To Workspace3' */

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                /* '<S5>/To Workspace4' */

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                /* '<S5>/To Workspace5' */

  int_T BytePacking_IWORK[2];          /* '<S2>/Byte Packing' */
  int_T CANStatus_IWORK[34];           /* '<S2>/CAN Status' */
  int_T CANUnpack_ModeSignalID;        /* '<S5>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S5>/CAN Unpack' */
  int8_T If_ActiveSubsystem;           /* '<Root>/If' */
  int8_T If1_ActiveSubsystem;          /* '<Root>/If1' */
  int8_T Subsystem1_SubsysRanBC;       /* '<Root>/Subsystem1' */
  int8_T Subsystem2_SubsysRanBC;       /* '<Root>/Subsystem2' */
  int8_T If2_ActiveSubsystem;          /* '<S4>/If2' */
  int8_T Subsystem_SubsysRanBC;        /* '<S4>/Subsystem' */
  int8_T Subsystem1_SubsysRanBC_o;     /* '<S4>/Subsystem1' */
  int8_T Subsystem_SubsysRanBC_o;      /* '<Root>/Subsystem' */
  int8_T If_ActiveSubsystem_f;         /* '<S2>/If' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S2>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Raw_Data_CAN_Subsystem_T {
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
    SimStruct childSFunctions[4];
    SimStruct *childSFunctionPtrs[4];
    struct _ssBlkInfo2 blkInfo2[4];
    struct _ssSFcnModelMethods2 methods2[4];
    struct _ssSFcnModelMethods3 methods3[4];
    struct _ssSFcnModelMethods4 methods4[4];
    struct _ssStatesInfo2 statesInfo2[4];
    ssPeriodicStatesInfo periodicStatesInfo[4];
    struct _ssPortInfo2 inputOutputPortInfo2[4];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

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
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[1];
      mxArray *params[1];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[34];
      mxArray *params[34];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn3;
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

  extern struct B_Raw_Data_CAN_Subsystem_T Raw_Data_CAN_Subsystem_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_Raw_Data_CAN_Subsystem_T Raw_Data_CAN_Subsystem_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void Raw_Data_CAN_Subsystem_initialize(void);
  extern void Raw_Data_CAN_Subsystem_step(void);
  extern void Raw_Data_CAN_Subsystem_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Raw_Data_CAN_Subsystem_T *const Raw_Data_CAN_Subsystem_M;

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
 * '<Root>' : 'Raw_Data_CAN_Subsystem'
 * '<S1>'   : 'Raw_Data_CAN_Subsystem/IsZero'
 * '<S2>'   : 'Raw_Data_CAN_Subsystem/Subsystem'
 * '<S3>'   : 'Raw_Data_CAN_Subsystem/Subsystem1'
 * '<S4>'   : 'Raw_Data_CAN_Subsystem/Subsystem2'
 * '<S5>'   : 'Raw_Data_CAN_Subsystem/Subsystem/If Action Subsystem'
 * '<S6>'   : 'Raw_Data_CAN_Subsystem/Subsystem/MATLAB Function'
 * '<S7>'   : 'Raw_Data_CAN_Subsystem/Subsystem/floats -> bytes'
 * '<S8>'   : 'Raw_Data_CAN_Subsystem/Subsystem/If Action Subsystem/bytes -> floats'
 * '<S9>'   : 'Raw_Data_CAN_Subsystem/Subsystem2/Subsystem'
 * '<S10>'  : 'Raw_Data_CAN_Subsystem/Subsystem2/Subsystem1'
 */
#endif                                /* RTW_HEADER_Raw_Data_CAN_Subsystem_h_ */

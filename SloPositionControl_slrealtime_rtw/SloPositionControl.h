/*
 * SloPositionControl.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "SloPositionControl".
 *
 * Model version              : 1.1
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Aug 20 14:17:27 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SloPositionControl_h_
#define RTW_HEADER_SloPositionControl_h_
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
#include "SloPositionControl_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "SloPositionControl_cal.h"
#include "rt_defines.h"
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
struct B_SloPositionControl_T {
  CAN_DATATYPE CANPack1;               /* '<S3>/CAN Pack1' */
  CAN_DATATYPE CANRead_o2;             /* '<S2>/CAN Read' */
  real_T FunctionCaller_o1;            /* '<Root>/Function Caller' */
  real_T FunctionCaller_o2;            /* '<Root>/Function Caller' */
  real_T FunctionCaller_o3;            /* '<Root>/Function Caller' */
  real_T FunctionCaller_o4;            /* '<Root>/Function Caller' */
  real_T A[5];                         /* '<S6>/A' */
  real_T TmpSignalConversionAtAOutport1[5];/* '<S6>/A' */
  real_T ID;                           /* '<S6>/ID' */
  real_T TmpSignalConversionAtIDOutport1;/* '<S6>/ID' */
  real_T FunctionCaller_o1_c;          /* '<S6>/Function Caller' */
  real_T FunctionCaller_o2_e;          /* '<S6>/Function Caller' */
  real_T FunctionCaller_o3_e;          /* '<S6>/Function Caller' */
  real_T FunctionCaller_o4_k;          /* '<S6>/Function Caller' */
  real_T TmpSignalConversionAtID1Inport1;/* '<S6>/Function Caller' */
  real_T TmpSignalConversionAtcurrentInp;/* '<S6>/Function Caller' */
  real_T TmpSignalConversionAtpositionIn;/* '<S6>/Function Caller' */
  real_T TmpSignalConversionAtvelocityIn;/* '<S6>/Function Caller' */
  real_T ID_a;                         /* '<S5>/ID' */
  real_T TmpSignalConversionAtIDOutpor_d;/* '<S5>/ID' */
  real_T ID_f;                         /* '<S4>/ID' */
  real_T TmpSignalConversionAtIDOutpo_d1;/* '<S4>/ID' */
  real_T ID_o;                         /* '<S3>/ID' */
  real_T TmpSignalConversionAtIDOutp_d1n;/* '<S3>/ID' */
  real_T C;                            /* '<S3>/C' */
  real_T TmpSignalConversionAtCOutport1;/* '<S3>/C' */
  real_T A_c[5];                       /* '<S3>/A' */
  real_T TmpSignalConversionAtAOutport_o[5];
                                    /* '<S3>/TmpSignal ConversionAtAOutport1' */
  real_T sameC;                        /* '<S3>/MATLAB Function' */
  real_T TmpSignalConversionAtID1Inpor_a;/* '<S2>/If Action Subsystem' */
  real_T TmpSignalConversionAtcurrentI_n;/* '<S2>/If Action Subsystem' */
  real_T P_out;                        /* '<S2>/If Action Subsystem' */
  real_T V_out;                        /* '<S2>/If Action Subsystem' */
  real_T C_e;                          /* '<S2>/C' */
  real_T TmpSignalConversionAtCOutport_g;/* '<S2>/C' */
  real_T A_o[5];                       /* '<S2>/A' */
  real_T TmpSignalConversionAtAOutpor_oh[5];/* '<S2>/A' */
  real_T ID_au;                        /* '<S2>/ID' */
  real_T TmpSignalConversionAtIDOut_d1nw;/* '<S2>/ID' */
  real_T CANUnpack_o1;                 /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S7>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S7>/CAN Unpack' */
  real_T position;                     /* '<S7>/bytes -> floats' */
  real_T velocity;                     /* '<S7>/bytes -> floats' */
  real_T I_ff;                         /* '<S7>/bytes -> floats' */
  real_T ID_m;                         /* '<S1>/ID' */
  real_T TmpSignalConversionAtIDOu_d1nwt;/* '<S1>/ID' */
  uint8_T FunctionCaller_o5;           /* '<Root>/Function Caller' */
  uint8_T FunctionCaller_o5_b;         /* '<S6>/Function Caller' */
  uint8_T TmpSignalConversionAtstatusInpo;/* '<S6>/Function Caller' */
  uint8_T MultiportSwitch[8];          /* '<S3>/Multiport Switch' */
  uint8_T BytePacking[8];              /* '<S3>/Byte Packing' */
  uint8_T b[8];                        /* '<S3>/floats -> bytes' */
  uint8_T TmpSignalConversionAtstatusIn_n;/* '<S2>/If Action Subsystem' */
  uint8_T CANUnpack_o5;                /* '<S7>/CAN Unpack' */
  boolean_T CANRead_o1;                /* '<S2>/CAN Read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_SloPositionControl_T {
  void *CANSetup_PWORK;                /* '<Root>/CAN Setup ' */
  struct {
    void *LoggedData[3];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  void *CANWrite1_PWORK;               /* '<S3>/CAN Write1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  void *CANRead_PWORK;                 /* '<S2>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfAct;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_IfA_b;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANUn;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_bytes;   /* synthesized block */

  int_T CANStatus_IWORK[34];           /* '<Root>/CAN Status' */
  int_T BytePacking_IWORK[2];          /* '<S3>/Byte Packing' */
  int_T CANUnpack_ModeSignalID;        /* '<S7>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S7>/CAN Unpack' */
  int8_T SimulinkFunction6_SubsysRanBC;/* '<Root>/Simulink Function6' */
  int8_T SimulinkFunction5_SubsysRanBC;/* '<Root>/Simulink Function5' */
  int8_T SimulinkFunction4_SubsysRanBC;/* '<Root>/Simulink Function4' */
  int8_T SimulinkFunction3_SubsysRanBC;/* '<Root>/Simulink Function3' */
  int8_T SimulinkFunction2_SubsysRanBC;/* '<Root>/Simulink Function2' */
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S2>/If Action Subsystem' */
  int8_T SimulinkFunction1_SubsysRanBC;/* '<Root>/Simulink Function1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SloPositionControl_T {
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
      uint_T attribs[3];
      mxArray *params[3];
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

  extern struct B_SloPositionControl_T SloPositionControl_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_SloPositionControl_T SloPositionControl_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void SloPositionControl_initialize(void);
  extern void SloPositionControl_step(void);
  extern void SloPositionControl_terminate(void);

#ifdef __cplusplus

}
#endif

extern void SloPositionControl_Int(real_T rtu_ID);
extern void SloPositionCon_SendCommand_Init(void);
extern void SloPositionControl_SendCommand(real_T rtu_C, const real_T rtu_A[5],
  real_T *rty_position, real_T *rty_velocity, real_T *rty_current, real_T
  *rtuy_ID, uint8_T *rty_status);
extern void SloPositionCon_SendCommand_Term(void);
extern void SloPositio_SendOnlyCommand_Init(void);
extern void SloPositionControl_SendOnlyCommand(real_T rtu_C, const real_T rtu_A
  [5], real_T rtu_ID);
extern void SloPositio_SendOnlyCommand_Term(void);
extern void SloPositionControl_Zero(real_T rtu_ID);
extern void SloPositionControl_deint(real_T rtu_ID);
extern void SloPositionControl_Control(const real_T rtu_A[5], real_T
  *rty_position, real_T *rty_velocity, real_T *rty_current, real_T *rtuy_ID,
  uint8_T *rty_status);

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_SloPositionControl_T *const SloPositionControl_M;

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
 * '<Root>' : 'SloPositionControl'
 * '<S1>'   : 'SloPositionControl/Simulink Function1'
 * '<S2>'   : 'SloPositionControl/Simulink Function2'
 * '<S3>'   : 'SloPositionControl/Simulink Function3'
 * '<S4>'   : 'SloPositionControl/Simulink Function4'
 * '<S5>'   : 'SloPositionControl/Simulink Function5'
 * '<S6>'   : 'SloPositionControl/Simulink Function6'
 * '<S7>'   : 'SloPositionControl/Simulink Function2/If Action Subsystem'
 * '<S8>'   : 'SloPositionControl/Simulink Function2/If Action Subsystem/bytes -> floats'
 * '<S9>'   : 'SloPositionControl/Simulink Function3/MATLAB Function'
 * '<S10>'  : 'SloPositionControl/Simulink Function3/floats -> bytes'
 */
#endif                                 /* RTW_HEADER_SloPositionControl_h_ */

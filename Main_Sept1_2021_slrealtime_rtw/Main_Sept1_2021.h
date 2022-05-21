/*
 * Main_Sept1_2021.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Main_Sept1_2021".
 *
 * Model version              : 1.51
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 19 16:43:57 2022
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

/* Block signals (default storage) */
struct B_Main_Sept1_2021_T {
  CAN_DATATYPE CANRead_o2;             /* '<S5>/CAN Read' */
  CAN_DATATYPE bytesvectorscanmessage; /* '<S3>/bytes vectors -> can message' */
  CAN_DATATYPE bytesvectorscanmessage_c;/* '<S2>/bytes vectors -> can message' */
  real_T P1;                           /* '<Root>/Delay' */
  real_T P2;                           /* '<Root>/Delay1' */
  real_T Constant;                     /* '<Root>/Constant' */
  real_T Constant2;                    /* '<Root>/Constant2' */
  real_T Th2;                          /* '<Root>/Gain' */
  real_T Thdot2;                       /* '<Root>/Constant8' */
  real_T Clock;                        /* '<Root>/Clock' */
  real_T GearRatio;                    /* '<S5>/Gear Ratio' */
  real_T CANUnpack_o1;                 /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<S9>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<S9>/CAN Unpack' */
  real_T position;                     /* '<S9>/bytes -> floats' */
  real_T velocity;                     /* '<S9>/bytes -> floats' */
  real_T I_ff;                         /* '<S9>/bytes -> floats' */
  real_T CANMsgbytes_o1;               /* '<S8>/CAN Msg -> bytes' */
  real_T CANMsgbytes_o2;               /* '<S8>/CAN Msg -> bytes' */
  real_T CANMsgbytes_o3;               /* '<S8>/CAN Msg -> bytes' */
  real_T CANMsgbytes_o4;               /* '<S8>/CAN Msg -> bytes' */
  real_T position_j;                   /* '<S8>/bytes -> floats' */
  real_T velocity_h;                   /* '<S8>/bytes -> floats' */
  real_T I_ff_o;                       /* '<S8>/bytes -> floats' */
  real_T TmpSignalConversionAtSFunctionI[2];/* '<Root>/MATLAB Function1' */
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
  real_T Tcalc1;                       /* '<Root>/Chart' */
  real_T Tcalc2;                       /* '<Root>/Chart' */
  real_T calcForceX;                   /* '<Root>/Chart' */
  real_T GRF;                          /* '<Root>/Chart' */
  real_T hop;                          /* '<Root>/Chart' */
  int32_T WhileIterator;               /* '<S5>/While Iterator' */
  uint8_T CANUnpack_o5;                /* '<S9>/CAN Unpack' */
  uint8_T CANMsgbytes_o5;              /* '<S8>/CAN Msg -> bytes' */
  uint8_T CommandSwitch[8];            /* '<S3>/Command Switch' */
  uint8_T bytesbytevectors[8];         /* '<S3>/bytes -> byte vectors' */
  uint8_T b[8];                        /* '<S3>/floats -> bytes1' */
  uint8_T CommandSwitch_h[8];          /* '<S2>/Command Switch' */
  uint8_T bytesbytevectors_l[8];       /* '<S2>/bytes -> byte vectors' */
  uint8_T b_i[8];                      /* '<S2>/floats -> bytes' */
  boolean_T CANRead_o1;                /* '<S5>/CAN Read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_Main_Sept1_2021_T {
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
  real_T Idle;                         /* '<Root>/Chart' */
  real_T time;                         /* '<Root>/Chart' */
  real_T FStart;                       /* '<Root>/Chart' */
  real_T Th2Th1;                       /* '<Root>/Chart' */
  real_T GRFy;                         /* '<Root>/Chart' */
  real_T exitY;                        /* '<Root>/Chart' */
  void *CANSetup_PWORK;                /* '<Root>/CAN Setup ' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

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
  } TAQSigLogging_InsertedFor_Ch_dg;   /* synthesized block */

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
  } TAQSigLogging_InsertedFor_Reada;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Rea_a;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Rea_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Rea_j;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Rea_k;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Rea_g;   /* synthesized block */

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

  void *CANRead_PWORK;                 /* '<S5>/CAN Read' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_CANRe;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_ID1Re;   /* synthesized block */

  void *Motor2_PWORK;                  /* '<S3>/Motor 2' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Demux;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_f;   /* synthesized block */

  void *Motor1_PWORK;                  /* '<S2>/Motor 1' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_e;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Dem_n;   /* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Mode_;   /* synthesized block */

  int32_T sfEvent;                     /* '<Root>/Chart' */
  uint32_T is_c8_Main_Sept1_2021;      /* '<Root>/Chart' */
  uint32_T is_Command;                 /* '<Root>/Chart' */
  uint32_T is_Flight;                  /* '<Root>/Chart' */
  int_T CANStatus_IWORK[34];           /* '<Root>/CAN Status' */
  int_T CANUnpack_ModeSignalID;        /* '<S9>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<S9>/CAN Unpack' */
  int_T CANMsgbytes_ModeSignalID;      /* '<S8>/CAN Msg -> bytes' */
  int_T CANMsgbytes_StatusPortID;      /* '<S8>/CAN Msg -> bytes' */
  int_T bytesbytevectors_IWORK[2];     /* '<S3>/bytes -> byte vectors' */
  int_T bytesbytevectors_IWORK_n[2];   /* '<S2>/bytes -> byte vectors' */
  uint16_T temporalCounter_i2;         /* '<Root>/Chart' */
  uint8_T is_active_c8_Main_Sept1_2021;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
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
 * '<S2>'   : 'Main_Sept1_2021/HIP Actuator'
 * '<S3>'   : 'Main_Sept1_2021/Knee Actuator'
 * '<S4>'   : 'Main_Sept1_2021/MATLAB Function1'
 * '<S5>'   : 'Main_Sept1_2021/Read and Sort CAN Responces'
 * '<S6>'   : 'Main_Sept1_2021/HIP Actuator/floats -> bytes'
 * '<S7>'   : 'Main_Sept1_2021/Knee Actuator/floats -> bytes1'
 * '<S8>'   : 'Main_Sept1_2021/Read and Sort CAN Responces/ID 1 Read  '
 * '<S9>'   : 'Main_Sept1_2021/Read and Sort CAN Responces/ID 2 Read'
 * '<S10>'  : 'Main_Sept1_2021/Read and Sort CAN Responces/ID 1 Read  /bytes -> floats'
 * '<S11>'  : 'Main_Sept1_2021/Read and Sort CAN Responces/ID 2 Read/bytes -> floats'
 */
#endif                                 /* RTW_HEADER_Main_Sept1_2021_h_ */

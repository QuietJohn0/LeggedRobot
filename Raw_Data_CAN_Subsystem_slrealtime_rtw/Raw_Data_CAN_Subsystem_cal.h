#ifndef RTW_HEADER_Raw_Data_CAN_Subsystem_cal_h_
#define RTW_HEADER_Raw_Data_CAN_Subsystem_cal_h_
#include "rtwtypes.h"
#include "Raw_Data_CAN_Subsystem_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct Raw_Data_CAN_Subsystem_cal_type {
  real_T Outport_Y0;                   /* Computed Parameter: Outport_Y0
                                        * Referenced by: '<S5>/Outport'
                                        */
  real_T Outport1_Y0;                  /* Computed Parameter: Outport1_Y0
                                        * Referenced by: '<S5>/Outport1'
                                        */
  real_T Outport2_Y0;                  /* Computed Parameter: Outport2_Y0
                                        * Referenced by: '<S5>/Outport2'
                                        */
  real_T Outport3_Y0;                  /* Computed Parameter: Outport3_Y0
                                        * Referenced by: '<S5>/Outport3'
                                        */
  real_T CANSetup_P1_Size[2];          /* Computed Parameter: CANSetup_P1_Size
                                        * Referenced by: '<S2>/CAN Setup '
                                        */
  real_T CANSetup_P1[40];
  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S2>/CAN Setup '
   */
  real_T CANSetup_P2_Size[2];          /* Computed Parameter: CANSetup_P2_Size
                                        * Referenced by: '<S2>/CAN Setup '
                                        */
  real_T CANSetup_P2;                  /* Expression: initStruct
                                        * Referenced by: '<S2>/CAN Setup '
                                        */
  real_T CANSetup_P3_Size[2];          /* Computed Parameter: CANSetup_P3_Size
                                        * Referenced by: '<S2>/CAN Setup '
                                        */
  real_T CANSetup_P3;                  /* Expression: termStruct
                                        * Referenced by: '<S2>/CAN Setup '
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<S2>/CAN Read'
                                        */
  real_T CANRead_P1[6];
                      /* Expression: [initValues(1:4) messageType initValues(6)]
                       * Referenced by: '<S2>/CAN Read'
                       */
  real_T CANWrite1_P1_Size[2];         /* Computed Parameter: CANWrite1_P1_Size
                                        * Referenced by: '<S2>/CAN Write1'
                                        */
  real_T CANWrite1_P1[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S2>/CAN Write1'
      */
  real_T SineWave_Amp;                 /* Expression: pi/2
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 2*pi/3
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: pi/2
                                        * Referenced by: '<S2>/Sine Wave'
                                        */
  real_T SineWave1_Amp;                /* Expression: pi/2
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 2*pi/3
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 0
                                        * Referenced by: '<S2>/Sine Wave1'
                                        */
  real_T CANStatus_P1_Size[2];         /* Computed Parameter: CANStatus_P1_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P1;                 /* Expression: moduleId
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P2_Size[2];         /* Computed Parameter: CANStatus_P2_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P2;                 /* Expression: sampleTime
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P3_Size[2];         /* Computed Parameter: CANStatus_P3_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P3;                 /* Expression: channel
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P4_Size[2];         /* Computed Parameter: CANStatus_P4_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P4;                 /* Expression: busRecovery
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P5_Size[2];         /* Computed Parameter: CANStatus_P5_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P5;                 /* Expression: avgBusLoad
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P6_Size[2];         /* Computed Parameter: CANStatus_P6_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P6;                 /* Expression: opMode
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P7_Size[2];         /* Computed Parameter: CANStatus_P7_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P7;                 /* Expression: brp
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P8_Size[2];         /* Computed Parameter: CANStatus_P8_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P8;                 /* Expression: timeSegment1
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P9_Size[2];         /* Computed Parameter: CANStatus_P9_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P9;                 /* Expression: timeSegment2
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P10_Size[2];        /* Computed Parameter: CANStatus_P10_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P10;                /* Expression: synchronisationJumpWidth
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P11_Size[2];        /* Computed Parameter: CANStatus_P11_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P11;                /* Expression: dataTSEG1
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P12_Size[2];        /* Computed Parameter: CANStatus_P12_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P12;                /* Expression: dataTSEG2
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P13_Size[2];        /* Computed Parameter: CANStatus_P13_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P13;                /* Expression: dataSJW
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P14_Size[2];        /* Computed Parameter: CANStatus_P14_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P14;                /* Expression: txPending
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P15_Size[2];        /* Computed Parameter: CANStatus_P15_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P15;                /* Expression: dataOverrunTx
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P16_Size[2];        /* Computed Parameter: CANStatus_P16_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P16;                /* Expression: receiving
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P17_Size[2];        /* Computed Parameter: CANStatus_P17_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P17;                /* Expression: RxQueueEmpty
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P18_Size[2];        /* Computed Parameter: CANStatus_P18_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P18;                /* Expression: dataOverrunRcv
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P19_Size[2];        /* Computed Parameter: CANStatus_P19_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P19;                /* Expression: errWarnLimit
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P20_Size[2];        /* Computed Parameter: CANStatus_P20_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P20;                /* Expression: errPassLimit
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P21_Size[2];        /* Computed Parameter: CANStatus_P21_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P21;                /* Expression: errBusOff
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P22_Size[2];        /* Computed Parameter: CANStatus_P22_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P22;                /* Expression: busRecoveryCounter
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P23_Size[2];        /* Computed Parameter: CANStatus_P23_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P23;                /* Expression: initModeAct
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P24_Size[2];        /* Computed Parameter: CANStatus_P24_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P24;                /* Expression: busCouplingErr
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P25_Size[2];        /* Computed Parameter: CANStatus_P25_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P25;                /* Expression: transceiverErr
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P26_Size[2];        /* Computed Parameter: CANStatus_P26_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P26;                /* Expression: controllerCpuLoad
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P27_Size[2];        /* Computed Parameter: CANStatus_P27_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P27;                /* Expression: controllerLiveCount
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P28_Size[2];        /* Computed Parameter: CANStatus_P28_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P28;                /* Expression: rxBufferLevel
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P29_Size[2];        /* Computed Parameter: CANStatus_P29_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P29;                /* Expression: txBufferLevel
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P30_Size[2];        /* Computed Parameter: CANStatus_P30_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P30;                /* Expression: arrayOutput
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P31_Size[2];        /* Computed Parameter: CANStatus_P31_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P31;                /* Expression: moduleType
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P32_Size[2];        /* Computed Parameter: CANStatus_P32_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P32;                /* Expression: qtyStatBlk
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P33_Size[2];        /* Computed Parameter: CANStatus_P33_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P33;                /* Expression: ptIdx
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P34_Size[2];        /* Computed Parameter: CANStatus_P34_Size
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T CANStatus_P34;                /* Expression: isFDMod
                                        * Referenced by: '<S2>/CAN Status'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S10>/Constant5'
                                        */
  real_T Constant4_Value;              /* Expression: 1
                                        * Referenced by: '<S9>/Constant4'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Onespin_Value[5];             /* Expression: [pi,0,.5,0,0]
                                        * Referenced by: '<Root>/One spin'
                                        */
  real_T DataStoreMemory_InitialValue; /* Expression: 1
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
  real_T DataStoreMemory1_InitialValue[5];/* Expression: [0,0,0,0,0]
                                           * Referenced by: '<Root>/Data Store Memory1'
                                           */
  int8_T Status_Y0;                    /* Computed Parameter: Status_Y0
                                        * Referenced by: '<S2>/Status'
                                        */
  uint8_T Outport4_Y0;                 /* Computed Parameter: Outport4_Y0
                                        * Referenced by: '<S5>/Outport4'
                                        */
  uint8_T Constant_Value_e[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S2>/Constant'
                  */
  uint8_T Constant1_Value[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S2>/Constant1'
                  */
  uint8_T Constant3_Value[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S2>/Constant3'
                  */
};

/* Storage class 'PageSwitching' */
extern Raw_Data_CAN_Subsystem_cal_type Raw_Data_CAN_Subsystem_cal_impl;
extern Raw_Data_CAN_Subsystem_cal_type *Raw_Data_CAN_Subsystem_cal;

#endif                            /* RTW_HEADER_Raw_Data_CAN_Subsystem_cal_h_ */

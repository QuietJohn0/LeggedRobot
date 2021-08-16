#ifndef RTW_HEADER_callback_commands_cal_h_
#define RTW_HEADER_callback_commands_cal_h_
#include "rtwtypes.h"
#include "callback_commands_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct callback_commands_cal_type {
  real_T CANSetup_P1_Size[2];          /* Computed Parameter: CANSetup_P1_Size
                                        * Referenced by: '<Root>/CAN Setup '
                                        */
  real_T CANSetup_P1[40];
  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<Root>/CAN Setup '
   */
  real_T CANSetup_P2_Size[2];          /* Computed Parameter: CANSetup_P2_Size
                                        * Referenced by: '<Root>/CAN Setup '
                                        */
  real_T CANSetup_P2;                  /* Expression: initStruct
                                        * Referenced by: '<Root>/CAN Setup '
                                        */
  real_T CANSetup_P3_Size[2];          /* Computed Parameter: CANSetup_P3_Size
                                        * Referenced by: '<Root>/CAN Setup '
                                        */
  real_T CANSetup_P3;                  /* Expression: termStruct
                                        * Referenced by: '<Root>/CAN Setup '
                                        */
  real_T Constant4_Value[5];           /* Expression: [0 0 1 0 0]
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T CANWrite1_P1_Size[2];         /* Computed Parameter: CANWrite1_P1_Size
                                        * Referenced by: '<Root>/CAN Write1'
                                        */
  real_T CANWrite1_P1[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<Root>/CAN Write1'
      */
  real_T CANStatus_P1_Size[2];         /* Computed Parameter: CANStatus_P1_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P1;                 /* Expression: moduleId
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P2_Size[2];         /* Computed Parameter: CANStatus_P2_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P2;                 /* Expression: sampleTime
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P3_Size[2];         /* Computed Parameter: CANStatus_P3_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P3;                 /* Expression: channel
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P4_Size[2];         /* Computed Parameter: CANStatus_P4_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P4;                 /* Expression: busRecovery
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P5_Size[2];         /* Computed Parameter: CANStatus_P5_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P5;                 /* Expression: avgBusLoad
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P6_Size[2];         /* Computed Parameter: CANStatus_P6_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P6;                 /* Expression: opMode
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P7_Size[2];         /* Computed Parameter: CANStatus_P7_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P7;                 /* Expression: brp
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P8_Size[2];         /* Computed Parameter: CANStatus_P8_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P8;                 /* Expression: timeSegment1
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P9_Size[2];         /* Computed Parameter: CANStatus_P9_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P9;                 /* Expression: timeSegment2
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P10_Size[2];        /* Computed Parameter: CANStatus_P10_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P10;                /* Expression: synchronisationJumpWidth
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P11_Size[2];        /* Computed Parameter: CANStatus_P11_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P11;                /* Expression: dataTSEG1
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P12_Size[2];        /* Computed Parameter: CANStatus_P12_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P12;                /* Expression: dataTSEG2
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P13_Size[2];        /* Computed Parameter: CANStatus_P13_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P13;                /* Expression: dataSJW
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P14_Size[2];        /* Computed Parameter: CANStatus_P14_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P14;                /* Expression: txPending
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P15_Size[2];        /* Computed Parameter: CANStatus_P15_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P15;                /* Expression: dataOverrunTx
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P16_Size[2];        /* Computed Parameter: CANStatus_P16_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P16;                /* Expression: receiving
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P17_Size[2];        /* Computed Parameter: CANStatus_P17_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P17;                /* Expression: RxQueueEmpty
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P18_Size[2];        /* Computed Parameter: CANStatus_P18_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P18;                /* Expression: dataOverrunRcv
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P19_Size[2];        /* Computed Parameter: CANStatus_P19_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P19;                /* Expression: errWarnLimit
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P20_Size[2];        /* Computed Parameter: CANStatus_P20_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P20;                /* Expression: errPassLimit
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P21_Size[2];        /* Computed Parameter: CANStatus_P21_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P21;                /* Expression: errBusOff
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P22_Size[2];        /* Computed Parameter: CANStatus_P22_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P22;                /* Expression: busRecoveryCounter
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P23_Size[2];        /* Computed Parameter: CANStatus_P23_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P23;                /* Expression: initModeAct
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P24_Size[2];        /* Computed Parameter: CANStatus_P24_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P24;                /* Expression: busCouplingErr
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P25_Size[2];        /* Computed Parameter: CANStatus_P25_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P25;                /* Expression: transceiverErr
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P26_Size[2];        /* Computed Parameter: CANStatus_P26_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P26;                /* Expression: controllerCpuLoad
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P27_Size[2];        /* Computed Parameter: CANStatus_P27_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P27;                /* Expression: controllerLiveCount
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P28_Size[2];        /* Computed Parameter: CANStatus_P28_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P28;                /* Expression: rxBufferLevel
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P29_Size[2];        /* Computed Parameter: CANStatus_P29_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P29;                /* Expression: txBufferLevel
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P30_Size[2];        /* Computed Parameter: CANStatus_P30_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P30;                /* Expression: arrayOutput
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P31_Size[2];        /* Computed Parameter: CANStatus_P31_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P31;                /* Expression: moduleType
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P32_Size[2];        /* Computed Parameter: CANStatus_P32_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P32;                /* Expression: qtyStatBlk
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P33_Size[2];        /* Computed Parameter: CANStatus_P33_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P33;                /* Expression: ptIdx
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P34_Size[2];        /* Computed Parameter: CANStatus_P34_Size
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  real_T CANStatus_P34;                /* Expression: isFDMod
                                        * Referenced by: '<Root>/CAN Status'
                                        */
  uint8_T Constant_Value[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<Root>/Constant'
                  */
  uint8_T Constant1_Value[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<Root>/Constant1'
                  */
  uint8_T Constant2_Value[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<Root>/Constant2'
                  */
};

/* Storage class 'PageSwitching' */
extern callback_commands_cal_type callback_commands_cal_impl;
extern callback_commands_cal_type *callback_commands_cal;

#endif                                 /* RTW_HEADER_callback_commands_cal_h_ */

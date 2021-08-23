#ifndef RTW_HEADER_getTorque_cal_h_
#define RTW_HEADER_getTorque_cal_h_
#include "rtwtypes.h"
#include "getTorque_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct getTorque_cal_type {
  real_T Outport_Y0;                   /* Computed Parameter: Outport_Y0
                                        * Referenced by: '<S6>/Outport'
                                        */
  real_T Outport1_Y0;                  /* Computed Parameter: Outport1_Y0
                                        * Referenced by: '<S6>/Outport1'
                                        */
  real_T Outport2_Y0;                  /* Computed Parameter: Outport2_Y0
                                        * Referenced by: '<S6>/Outport2'
                                        */
  real_T Outport3_Y0;                  /* Computed Parameter: Outport3_Y0
                                        * Referenced by: '<S6>/Outport3'
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<S4>/CAN Read'
                                        */
  real_T CANRead_P1[6];
                      /* Expression: [initValues(1:4) messageType initValues(6)]
                       * Referenced by: '<S4>/CAN Read'
                       */
  real_T CANWrite1_P1_Size[2];         /* Computed Parameter: CANWrite1_P1_Size
                                        * Referenced by: '<S4>/CAN Write1'
                                        */
  real_T CANWrite1_P1[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S4>/CAN Write1'
      */
  real_T Outport_Y0_c;                 /* Computed Parameter: Outport_Y0_c
                                        * Referenced by: '<S9>/Outport'
                                        */
  real_T Outport1_Y0_e;                /* Computed Parameter: Outport1_Y0_e
                                        * Referenced by: '<S9>/Outport1'
                                        */
  real_T Outport2_Y0_l;                /* Computed Parameter: Outport2_Y0_l
                                        * Referenced by: '<S9>/Outport2'
                                        */
  real_T Outport3_Y0_n;                /* Computed Parameter: Outport3_Y0_n
                                        * Referenced by: '<S9>/Outport3'
                                        */
  real_T CANRead_P1_Size_o[2];         /* Computed Parameter: CANRead_P1_Size_o
                                        * Referenced by: '<S5>/CAN Read'
                                        */
  real_T CANRead_P1_j[6];
                      /* Expression: [initValues(1:4) messageType initValues(6)]
                       * Referenced by: '<S5>/CAN Read'
                       */
  real_T CANWrite1_P1_Size_c[2];      /* Computed Parameter: CANWrite1_P1_Size_c
                                       * Referenced by: '<S5>/CAN Write1'
                                       */
  real_T CANWrite1_P1_i[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S5>/CAN Write1'
      */
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
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: 6
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T DelayOneStep1_InitialCondition;/* Expression: 0.0
                                         * Referenced by: '<Root>/Delay One Step1'
                                         */
  real_T DelayOneStep_InitialCondition;/* Expression: 0.0
                                        * Referenced by: '<Root>/Delay One Step'
                                        */
  real_T Gain1_Gain;                   /* Expression: 30/18
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant6_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T SineWave_Amp;                 /* Expression: 2
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T Saturation_UpperSat;          /* Expression: 1
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<Root>/Saturation'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Gain_Gain;                    /* Expression: 18/30
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 10
                                        * Referenced by: '<Root>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 0.1
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Gain2_Gain;                   /* Expression: 18/30
                                        * Referenced by: '<Root>/Gain2'
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
  uint8_T Outport4_Y0;                 /* Computed Parameter: Outport4_Y0
                                        * Referenced by: '<S6>/Outport4'
                                        */
  uint8_T Constant_Value_j[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S4>/Constant'
                  */
  uint8_T Constant1_Value_h[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S4>/Constant1'
                  */
  uint8_T Constant2_Value_n[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S4>/Constant2'
                  */
  uint8_T Outport4_Y0_d;               /* Computed Parameter: Outport4_Y0_d
                                        * Referenced by: '<S9>/Outport4'
                                        */
  uint8_T Constant_Value_f[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S5>/Constant'
                  */
  uint8_T Constant1_Value_p[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S5>/Constant1'
                  */
  uint8_T Constant2_Value_i[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S5>/Constant2'
                  */
};

/* Storage class 'PageSwitching' */
extern getTorque_cal_type getTorque_cal_impl;
extern getTorque_cal_type *getTorque_cal;

#endif                                 /* RTW_HEADER_getTorque_cal_h_ */

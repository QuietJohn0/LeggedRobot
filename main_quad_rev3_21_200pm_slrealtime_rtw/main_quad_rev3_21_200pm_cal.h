#ifndef RTW_HEADER_main_quad_rev3_21_200pm_cal_h_
#define RTW_HEADER_main_quad_rev3_21_200pm_cal_h_
#include "rtwtypes.h"
#include "main_quad_rev3_21_200pm_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct main_quad_rev3_21_200p_cal_type {
  real_T CANWrite1_P1_Size[2];         /* Computed Parameter: CANWrite1_P1_Size
                                        * Referenced by: '<S3>/CAN Write1'
                                        */
  real_T CANWrite1_P1[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S3>/CAN Write1'
      */
  real_T CANWrite1_P1_Size_n[2];      /* Computed Parameter: CANWrite1_P1_Size_n
                                       * Referenced by: '<S4>/CAN Write1'
                                       */
  real_T CANWrite1_P1_l[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S4>/CAN Write1'
      */
  real_T CANWrite1_P1_Size_d[2];      /* Computed Parameter: CANWrite1_P1_Size_d
                                       * Referenced by: '<S5>/CAN Write1'
                                       */
  real_T CANWrite1_P1_j[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S5>/CAN Write1'
      */
  real_T CANWrite1_P1_Size_m[2];      /* Computed Parameter: CANWrite1_P1_Size_m
                                       * Referenced by: '<S6>/CAN Write1'
                                       */
  real_T CANWrite1_P1_je[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S6>/CAN Write1'
      */
  real_T CANWrite1_P1_Size_p[2];      /* Computed Parameter: CANWrite1_P1_Size_p
                                       * Referenced by: '<S7>/CAN Write1'
                                       */
  real_T CANWrite1_P1_n[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S7>/CAN Write1'
      */
  real_T CANWrite1_P1_Size_b[2];      /* Computed Parameter: CANWrite1_P1_Size_b
                                       * Referenced by: '<S8>/CAN Write1'
                                       */
  real_T CANWrite1_P1_d[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S8>/CAN Write1'
      */
  real_T CANWrite1_P1_Size_bz[2];    /* Computed Parameter: CANWrite1_P1_Size_bz
                                      * Referenced by: '<S9>/CAN Write1'
                                      */
  real_T CANWrite1_P1_nj[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S9>/CAN Write1'
      */
  real_T CANWrite1_P1_Size_l[2];      /* Computed Parameter: CANWrite1_P1_Size_l
                                       * Referenced by: '<S10>/CAN Write1'
                                       */
  real_T CANWrite1_P1_p[7];
     /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
      * Referenced by: '<S10>/CAN Write1'
      */
  real_T P2_Y0;                        /* Computed Parameter: P2_Y0
                                        * Referenced by: '<S11>/P2'
                                        */
  real_T P4_Y0;                        /* Computed Parameter: P4_Y0
                                        * Referenced by: '<S11>/P4'
                                        */
  real_T P6_Y0;                        /* Computed Parameter: P6_Y0
                                        * Referenced by: '<S11>/P6'
                                        */
  real_T P8_Y0;                        /* Computed Parameter: P8_Y0
                                        * Referenced by: '<S11>/P8'
                                        */
  real_T CANRead_P1_Size[2];           /* Computed Parameter: CANRead_P1_Size
                                        * Referenced by: '<S11>/CAN Read'
                                        */
  real_T CANRead_P1[6];
                      /* Expression: [initValues(1:4) messageType initValues(6)]
                       * Referenced by: '<S11>/CAN Read'
                       */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S11>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<S11>/Gain1'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1
                                        * Referenced by: '<S11>/Gain2'
                                        */
  real_T Gain3_Gain;                   /* Expression: -1
                                        * Referenced by: '<S11>/Gain3'
                                        */
  real_T P1_Y0;                        /* Computed Parameter: P1_Y0
                                        * Referenced by: '<S12>/P1'
                                        */
  real_T P3_Y0;                        /* Computed Parameter: P3_Y0
                                        * Referenced by: '<S12>/P3'
                                        */
  real_T P5_Y0;                        /* Computed Parameter: P5_Y0
                                        * Referenced by: '<S12>/P5'
                                        */
  real_T P7_Y0;                        /* Computed Parameter: P7_Y0
                                        * Referenced by: '<S12>/P7'
                                        */
  real_T CANRead_P1_Size_k[2];         /* Computed Parameter: CANRead_P1_Size_k
                                        * Referenced by: '<S12>/CAN Read'
                                        */
  real_T CANRead_P1_j[6];
                      /* Expression: [initValues(1:4) messageType initValues(6)]
                       * Referenced by: '<S12>/CAN Read'
                       */
  real_T Gain_Gain_e;                  /* Expression: 1
                                        * Referenced by: '<S12>/Gain'
                                        */
  real_T Gain1_Gain_a;                 /* Expression: -1
                                        * Referenced by: '<S12>/Gain1'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: -1
                                        * Referenced by: '<S12>/Gain2'
                                        */
  real_T Gain3_Gain_i;                 /* Expression: 1
                                        * Referenced by: '<S12>/Gain3'
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
  real_T Delay_InitialCondition;       /* Expression: 0.0
                                        * Referenced by: '<Root>/Delay'
                                        */
  real_T Delay1_InitialCondition;      /* Expression: 0.0
                                        * Referenced by: '<Root>/Delay1'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 1
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 1
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Gain3_Gain_im;                /* Expression: 1
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Gain6_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain6'
                                        */
  real_T Gain7_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain7'
                                        */
  real_T Gain8_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain8'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/Gain4'
                                        */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/Gain5'
                                        */
  real_T Gain26_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain26'
                                        */
  real_T Gain9_Gain;                   /* Expression: -1
                                        * Referenced by: '<Root>/Gain9'
                                        */
  real_T Gain10_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain10'
                                        */
  real_T Gain11_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain11'
                                        */
  real_T Gain12_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain12'
                                        */
  real_T Gain13_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain13'
                                        */
  real_T Gain14_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain14'
                                        */
  real_T Gain15_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain15'
                                        */
  real_T Gain16_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain16'
                                        */
  real_T Gain17_Gain;                  /* Expression: -1
                                        * Referenced by: '<Root>/Gain17'
                                        */
  real_T Gain18_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain18'
                                        */
  real_T Gain19_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain19'
                                        */
  real_T Gain20_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain20'
                                        */
  real_T Gain21_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain21'
                                        */
  real_T Gain22_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain22'
                                        */
  real_T Gain23_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/Gain23'
                                        */
  real_T Gain24_Gain;                  /* Expression: 1/4
                                        * Referenced by: '<Root>/Gain24'
                                        */
  real_T Gain25_Gain;                  /* Expression: 1/4
                                        * Referenced by: '<Root>/Gain25'
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
  uint8_T Constant_Value_l[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S3>/Constant'
                  */
  uint8_T Constant1_Value[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S3>/Constant1'
                  */
  uint8_T Constant2_Value_g[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S3>/Constant2'
                  */
  uint8_T Constant_Value_p[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S4>/Constant'
                  */
  uint8_T Constant1_Value_k[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S4>/Constant1'
                  */
  uint8_T Constant2_Value_d[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S4>/Constant2'
                  */
  uint8_T Constant_Value_i[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S5>/Constant'
                  */
  uint8_T Constant1_Value_e[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S5>/Constant1'
                  */
  uint8_T Constant2_Value_k[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S5>/Constant2'
                  */
  uint8_T Constant_Value_le[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S6>/Constant'
                  */
  uint8_T Constant1_Value_f[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S6>/Constant1'
                  */
  uint8_T Constant2_Value_j[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S6>/Constant2'
                  */
  uint8_T Constant_Value_b[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S7>/Constant'
                  */
  uint8_T Constant1_Value_h[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S7>/Constant1'
                  */
  uint8_T Constant2_Value_n[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S7>/Constant2'
                  */
  uint8_T Constant_Value_bb[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S8>/Constant'
                  */
  uint8_T Constant1_Value_i[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S8>/Constant1'
                  */
  uint8_T Constant2_Value_l[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S8>/Constant2'
                  */
  uint8_T Constant_Value_o[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S9>/Constant'
                  */
  uint8_T Constant1_Value_m[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S9>/Constant1'
                  */
  uint8_T Constant2_Value_i[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S9>/Constant2'
                  */
  uint8_T Constant_Value_ob[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
                  * Referenced by: '<S10>/Constant'
                  */
  uint8_T Constant1_Value_a[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
                  * Referenced by: '<S10>/Constant1'
                  */
  uint8_T Constant2_Value_a[8];
                 /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
                  * Referenced by: '<S10>/Constant2'
                  */
};

/* Storage class 'PageSwitching' */
extern main_quad_rev3_21_200p_cal_type main_quad_rev3_21_200p_cal_impl;
extern main_quad_rev3_21_200p_cal_type *main_quad_rev3_21_200pm_cal;

#endif                           /* RTW_HEADER_main_quad_rev3_21_200pm_cal_h_ */

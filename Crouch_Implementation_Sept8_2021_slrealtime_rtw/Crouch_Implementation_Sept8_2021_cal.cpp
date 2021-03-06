#include "Crouch_Implementation_Sept8_2021.h"

/* Storage class 'PageSwitching' */
Crouch_Implementation__cal_type Crouch_Implementation__cal_impl = {
  /* Computed Parameter: CANWrite1_P1_Size
   * Referenced by: '<S4>/CAN Write1'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S4>/CAN Write1'
   */
  { 691.0, 1.0, -1.0, 0.0, 1.0, 1.0, 0.0 },

  /* Computed Parameter: CANWrite1_P1_Size_d
   * Referenced by: '<S5>/CAN Write1'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S5>/CAN Write1'
   */
  { 691.0, 1.0, -1.0, 0.0, 1.0, 1.0, 0.0 },

  /* Computed Parameter: P1_Y0
   * Referenced by: '<S6>/P1'
   */
  0.0,

  /* Computed Parameter: V1_Y0
   * Referenced by: '<S6>/V1'
   */
  0.0,

  /* Computed Parameter: Curr1_Y0
   * Referenced by: '<S6>/Curr1'
   */
  0.0,

  /* Computed Parameter: ID1_Y0
   * Referenced by: '<S6>/ID1'
   */
  0.0,

  /* Computed Parameter: P2_Y0
   * Referenced by: '<S6>/P2'
   */
  0.0,

  /* Computed Parameter: V2_Y0
   * Referenced by: '<S6>/V2'
   */
  0.0,

  /* Computed Parameter: Curr2_Y0
   * Referenced by: '<S6>/Curr2'
   */
  0.0,

  /* Computed Parameter: ID2_Y0
   * Referenced by: '<S6>/ID2'
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S6>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S6>/CAN Read'
   */
  { 691.0, 1.0, -1.0, 0.0, 1.0, 1.0 },

  /* Expression: 30/18
   * Referenced by: '<S6>/Gain'
   */
  1.6666666666666667,

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<Root>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<Root>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0, 2.0,
    2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0,
    5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<Root>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<Root>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<Root>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<Root>/CAN Setup '
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<Root>/Delay'
   */
  0.0,

  /* Expression: 0.0
   * Referenced by: '<Root>/Delay1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 18/30
   * Referenced by: '<Root>/Gain'
   */
  0.6,

  /* Expression: 0
   * Referenced by: '<Root>/Constant8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Computed Parameter: CANStatus_P1_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: moduleId
   * Referenced by: '<Root>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P2_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<Root>/CAN Status'
   */
  -1.0,

  /* Computed Parameter: CANStatus_P3_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: channel
   * Referenced by: '<Root>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P4_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: busRecovery
   * Referenced by: '<Root>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P5_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: avgBusLoad
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P6_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: opMode
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P7_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: brp
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P8_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: timeSegment1
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P9_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: timeSegment2
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P10_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: synchronisationJumpWidth
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P11_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataTSEG1
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P12_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataTSEG2
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P13_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataSJW
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P14_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: txPending
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P15_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataOverrunTx
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P16_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: receiving
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P17_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: RxQueueEmpty
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P18_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataOverrunRcv
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P19_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: errWarnLimit
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P20_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: errPassLimit
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P21_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: errBusOff
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P22_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: busRecoveryCounter
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P23_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: initModeAct
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P24_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: busCouplingErr
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P25_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: transceiverErr
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P26_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: controllerCpuLoad
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P27_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: controllerLiveCount
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P28_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: rxBufferLevel
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P29_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: txBufferLevel
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P30_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: arrayOutput
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P31_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: moduleType
   * Referenced by: '<Root>/CAN Status'
   */
  691.0,

  /* Computed Parameter: CANStatus_P32_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: qtyStatBlk
   * Referenced by: '<Root>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P33_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P34_Size
   * Referenced by: '<Root>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<Root>/CAN Status'
   */
  0.0,

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
   * Referenced by: '<S4>/Constant'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 254U },

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
   * Referenced by: '<S4>/Constant1'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 252U },

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
   * Referenced by: '<S4>/Constant2'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 253U },

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
   * Referenced by: '<S5>/Constant'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 254U },

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
   * Referenced by: '<S5>/Constant1'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 252U },

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
   * Referenced by: '<S5>/Constant2'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 253U },

  /* Computed Parameter: Status1_Y0
   * Referenced by: '<S6>/Status1'
   */
  0U,

  /* Computed Parameter: Status2_Y0
   * Referenced by: '<S6>/Status2'
   */
  0U
};

Crouch_Implementation__cal_type *Crouch_Implementation_Sept8_cal =
  &Crouch_Implementation__cal_impl;

#include "Raw_Data_CAN_Subsystem.h"

/* Storage class 'PageSwitching' */
Raw_Data_CAN_Subsystem_cal_type Raw_Data_CAN_Subsystem_cal_impl = {
  /* Computed Parameter: Outport_Y0
   * Referenced by: '<S5>/Outport'
   */
  0.0,

  /* Computed Parameter: Outport1_Y0
   * Referenced by: '<S5>/Outport1'
   */
  0.0,

  /* Computed Parameter: Outport2_Y0
   * Referenced by: '<S5>/Outport2'
   */
  0.0,

  /* Computed Parameter: Outport3_Y0
   * Referenced by: '<S5>/Outport3'
   */
  0.0,

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S2>/CAN Setup '
   */
  { 1.0, 40.0 },

  /* Expression: [moduleInitValues, chn1, ArbitrationManbdrChn1, FdManbdrChn1, chn2, ArbitrationManbdrChn2, FdManbdrChn2, chn3, ArbitrationManbdrChn3, FdManbdrChn3, chn4, ArbitrationManbdrChn4, FdManbdrChn4]
   * Referenced by: '<S2>/CAN Setup '
   */
  { 691.0, 1.0, -1.0, -1.0, 2.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0, 2.0,
    2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0,
    5.0, 2.0, 1.0, 2.0, 8.0, 31.0, 8.0, 2.0, 2.0, 5.0, 2.0 },

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S2>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S2>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S2>/CAN Setup '
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S2>/CAN Setup '
   */
  0.0,

  /* Computed Parameter: CANRead_P1_Size
   * Referenced by: '<S2>/CAN Read'
   */
  { 1.0, 6.0 },

  /* Expression: [initValues(1:4) messageType initValues(6)]
   * Referenced by: '<S2>/CAN Read'
   */
  { 691.0, 1.0, -1.0, 0.0, 1.0, 1.0 },

  /* Expression: pi/2
   * Referenced by: '<S2>/Sine Wave1'
   */
  1.5707963267948966,

  /* Expression: 0
   * Referenced by: '<S2>/Sine Wave1'
   */
  0.0,

  /* Expression: 2*pi/3
   * Referenced by: '<S2>/Sine Wave1'
   */
  2.0943951023931953,

  /* Expression: 0
   * Referenced by: '<S2>/Sine Wave1'
   */
  0.0,

  /* Expression: pi/2
   * Referenced by: '<S2>/Sine Wave'
   */
  1.5707963267948966,

  /* Expression: 0
   * Referenced by: '<S2>/Sine Wave'
   */
  0.0,

  /* Expression: 2*pi/3
   * Referenced by: '<S2>/Sine Wave'
   */
  2.0943951023931953,

  /* Expression: pi/2
   * Referenced by: '<S2>/Sine Wave'
   */
  1.5707963267948966,

  /* Computed Parameter: CANWrite1_P1_Size
   * Referenced by: '<S2>/CAN Write1'
   */
  { 1.0, 7.0 },

  /* Expression: [initValues(1:4) messageType initValues(6) enableStatusPort]
   * Referenced by: '<S2>/CAN Write1'
   */
  { 691.0, 1.0, -1.0, 0.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: CANStatus_P1_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: moduleId
   * Referenced by: '<S2>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P2_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S2>/CAN Status'
   */
  -1.0,

  /* Computed Parameter: CANStatus_P3_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: channel
   * Referenced by: '<S2>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P4_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: busRecovery
   * Referenced by: '<S2>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P5_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: avgBusLoad
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P6_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: opMode
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P7_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: brp
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P8_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: timeSegment1
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P9_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: timeSegment2
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P10_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: synchronisationJumpWidth
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P11_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataTSEG1
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P12_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataTSEG2
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P13_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataSJW
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P14_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: txPending
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P15_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataOverrunTx
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P16_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: receiving
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P17_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: RxQueueEmpty
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P18_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: dataOverrunRcv
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P19_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: errWarnLimit
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P20_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: errPassLimit
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P21_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: errBusOff
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P22_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: busRecoveryCounter
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P23_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: initModeAct
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P24_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: busCouplingErr
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P25_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: transceiverErr
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P26_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: controllerCpuLoad
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P27_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: controllerLiveCount
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P28_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: rxBufferLevel
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P29_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: txBufferLevel
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P30_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: arrayOutput
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P31_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: moduleType
   * Referenced by: '<S2>/CAN Status'
   */
  691.0,

  /* Computed Parameter: CANStatus_P32_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: qtyStatBlk
   * Referenced by: '<S2>/CAN Status'
   */
  1.0,

  /* Computed Parameter: CANStatus_P33_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Computed Parameter: CANStatus_P34_Size
   * Referenced by: '<S2>/CAN Status'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S2>/CAN Status'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S10>/Constant5'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S9>/Constant4'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Constant'
   */
  0.0,

  /* Expression: [pi,0,.5,.5,0]
   * Referenced by: '<Root>/One spin'
   */
  { 3.1415926535897931, 0.0, 0.5, 0.5, 0.0 },

  /* Expression: 1
   * Referenced by: '<Root>/Data Store Memory'
   */
  1.0,

  /* Expression: [0,0,0,0,0]
   * Referenced by: '<Root>/Data Store Memory1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Computed Parameter: Status_Y0
   * Referenced by: '<S2>/Status'
   */
  0,

  /* Computed Parameter: Outport4_Y0
   * Referenced by: '<S5>/Outport4'
   */
  0U,

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE]
   * Referenced by: '<S2>/Constant'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 254U },

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC]
   * Referenced by: '<S2>/Constant1'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 252U },

  /* Expression: [0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD]
   * Referenced by: '<S2>/Constant3'
   */
  { 255U, 255U, 255U, 255U, 255U, 255U, 255U, 253U }
};

Raw_Data_CAN_Subsystem_cal_type *Raw_Data_CAN_Subsystem_cal =
  &Raw_Data_CAN_Subsystem_cal_impl;

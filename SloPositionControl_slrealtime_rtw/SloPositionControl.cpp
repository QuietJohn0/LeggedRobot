/*
 * SloPositionControl.cpp
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

#include "SloPositionControl.h"
#include "SloPositionControl_private.h"
#include "rt_roundd_snf.h"

/* Block signals (default storage) */
B_SloPositionControl_T SloPositionControl_B;

/* Block states (default storage) */
DW_SloPositionControl_T SloPositionControl_DW;

/* Real-time model */
RT_MODEL_SloPositionControl_T SloPositionControl_M_ =
  RT_MODEL_SloPositionControl_T();
RT_MODEL_SloPositionControl_T *const SloPositionControl_M =
  &SloPositionControl_M_;

/* Forward declaration for local functions */
static void SloPositionControl_dec2bin(real_T d, char_T s_data[], int32_T
  s_size[2]);

/* Output and update for Simulink Function: '<Root>/Simulink Function1' */
void SloPositionControl_Int(real_T rtu_ID)
{
  UNUSED_PARAMETER(rtu_ID);
}

/* System initialize for Simulink Function: '<Root>/Simulink Function2' */
void SloPositionCon_SendCommand_Init(void)
{
  /* Start for S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */
  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S7>/CAN Unpack' */

  /*-----------S-Function Block: <S7>/CAN Unpack -----------------*/

  /* SystemInitialize for Outport: '<S7>/Outport' */
  SloPositionControl_B.position = SloPositionControl_cal->Outport_Y0;

  /* SystemInitialize for Outport: '<S7>/Outport1' */
  SloPositionControl_B.velocity = SloPositionControl_cal->Outport1_Y0;

  /* SystemInitialize for Outport: '<S7>/Outport2' */
  SloPositionControl_B.I_ff = SloPositionControl_cal->Outport2_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S7>/CAN Unpack' incorporates:
   *  Outport: '<S7>/Outport3'
   */
  SloPositionControl_B.CANUnpack_o4 = SloPositionControl_cal->Outport3_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S7>/CAN Unpack' incorporates:
   *  Outport: '<S7>/Outport4'
   */
  SloPositionControl_B.CANUnpack_o5 = SloPositionControl_cal->Outport4_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/If Action Subsystem' */
}

/* Output and update for Simulink Function: '<Root>/Simulink Function2' */
void SloPositionControl_SendCommand(real_T rtu_C, const real_T rtu_A[5], real_T *
  rty_position, real_T *rty_velocity, real_T *rty_current, real_T *rtuy_ID,
  uint8_T *rty_status)
{
  real_T I_ff;
  real_T position;
  real_T rtu_ID_0;
  real_T velocity;
  int32_T i;
  rtu_ID_0 = *rtuy_ID;

  /* S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */

  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* If: '<S2>/If' */
  if (SloPositionControl_B.CANRead_o1) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* S-Function (scanunpack): '<S7>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S7>/CAN Unpack' */
      uint8_T msgReceived = 0;
      if ((6 == SloPositionControl_B.CANRead_o2.Length) &&
          (SloPositionControl_B.CANRead_o2.ID != INVALID_CAN_ID) ) {
        msgReceived = 1;

        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 16
           *  length                  = 16
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)
                    (SloPositionControl_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (SloPositionControl_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              SloPositionControl_B.CANUnpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 36
           *  length                  = 12
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (SloPositionControl_B.CANRead_o2.Data[4]) & (uint16_T)(0xF0U))
                    >> 4);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (SloPositionControl_B.CANRead_o2.Data[3]) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              SloPositionControl_B.CANUnpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 40
           *  length                  = 12
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)
                    (SloPositionControl_B.CANRead_o2.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (SloPositionControl_B.CANRead_o2.Data[4]) & (uint16_T)(0xFU))
                    << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              SloPositionControl_B.CANUnpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 0
           *  length                  = 8
           *  desiredSignalByteLayout = BIGENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real64_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)
                    (SloPositionControl_B.CANRead_o2.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              SloPositionControl_B.CANUnpack_o4 = result;
            }
          }
        }
      }

      /* Status port */
      SloPositionControl_B.CANUnpack_o5 = msgReceived;
    }

    /* MATLAB Function: '<S7>/bytes -> floats' */
    SloPositionControl_B.position = SloPositionControl_B.CANUnpack_o1;
    SloPositionControl_B.velocity = SloPositionControl_B.CANUnpack_o2;
    SloPositionControl_B.I_ff = SloPositionControl_B.CANUnpack_o3;
    I_ff = SloPositionControl_B.I_ff;
    velocity = SloPositionControl_B.velocity;
    position = SloPositionControl_B.position;
    SloPositionControl_B.I_ff = I_ff;
    SloPositionControl_B.velocity = velocity;
    SloPositionControl_B.position = position;
    SloPositionControl_B.position = SloPositionControl_B.position * 191.0 /
      65535.0 + -95.5;
    SloPositionControl_B.velocity = SloPositionControl_B.velocity * 90.0 /
      4095.0 + -45.0;
    SloPositionControl_B.I_ff = SloPositionControl_B.I_ff * 80.0 / 4095.0 +
      -40.0;

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Update for If: '<S2>/If' */
    SloPositionControl_DW.IfActionSubsystem_SubsysRanBC = 4;

    /* End of Update for SubSystem: '<S2>/If Action Subsystem' */
  }

  /* End of If: '<S2>/If' */

  /* SignalConversion generated from: '<S2>/ID1' */
  *rtuy_ID = SloPositionControl_B.CANUnpack_o4;

  /* SignalConversion generated from: '<S2>/current' */
  *rty_current = SloPositionControl_B.I_ff;

  /* SignalConversion generated from: '<S2>/position' */
  *rty_position = SloPositionControl_B.position;

  /* SignalConversion generated from: '<S2>/status' */
  *rty_status = SloPositionControl_B.CANUnpack_o5;

  /* SignalConversion generated from: '<S2>/velocity' */
  *rty_velocity = SloPositionControl_B.velocity;

  /* SignalConversion generated from: '<S2>/C' */
  SloPositionControl_B.TmpSignalConversionAtCOutport_g = rtu_C;
  for (i = 0; i < 5; i++) {
    /* SignalConversion generated from: '<S2>/A' */
    SloPositionControl_B.TmpSignalConversionAtAOutpor_oh[i] = rtu_A[i];
  }

  /* SignalConversion generated from: '<S2>/ID' */
  SloPositionControl_B.TmpSignalConversionAtIDOut_d1nw = rtu_ID_0;

  /* FunctionCaller: '<S2>/Function Caller' */
  SloPositionControl_SendOnlyCommand
    (SloPositionControl_B.TmpSignalConversionAtCOutport_g,
     SloPositionControl_B.TmpSignalConversionAtAOutpor_oh,
     SloPositionControl_B.TmpSignalConversionAtIDOut_d1nw);
  SloPositionControl_DW.SimulinkFunction2_SubsysRanBC = 4;
}

/* Termination for Simulink Function: '<Root>/Simulink Function2' */
void SloPositionCon_SendCommand_Term(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */
  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/* Function for MATLAB Function: '<S3>/floats -> bytes' */
static void SloPositionControl_dec2bin(real_T d, char_T s_data[], int32_T
  s_size[2])
{
  real_T b_d;
  real_T olddi;
  int32_T idx;
  int32_T p;
  int32_T pmax;
  int32_T pmin;
  int32_T pow2p;
  char_T sfull[64];
  char_T b;
  char_T sfull_0;
  boolean_T carry;
  boolean_T exitg1;
  if (d < 0.0) {
    b_d = -d;
    for (idx = 0; idx < 64; idx++) {
      sfull[idx] = '0';
    }

    idx = 64;
    exitg1 = false;
    while ((!exitg1) && (idx > 0)) {
      olddi = b_d;
      b_d = std::floor(b_d / 2.0);
      if (2.0 * b_d < olddi) {
        sfull[idx - 1] = '1';
      }

      if (!(b_d > 0.0)) {
        exitg1 = true;
      } else {
        idx--;
      }
    }

    for (idx = 0; idx < 64; idx++) {
      sfull_0 = sfull[idx];
      b = sfull_0;
      sfull_0 = '1';
      if (b == '1') {
        sfull_0 = '0';
      }

      sfull[idx] = sfull_0;
    }

    carry = true;
    for (idx = 63; idx >= 0; idx--) {
      sfull_0 = sfull[idx];
      if (carry) {
        if (sfull_0 == '1') {
          sfull_0 = '0';
        } else {
          sfull_0 = '1';
          carry = false;
        }
      }

      sfull[idx] = sfull_0;
    }
  } else {
    b_d = d;
    for (idx = 0; idx < 64; idx++) {
      sfull[idx] = '0';
    }

    idx = 64;
    exitg1 = false;
    while ((!exitg1) && (idx > 0)) {
      olddi = b_d;
      b_d = std::floor(b_d / 2.0);
      if (2.0 * b_d < olddi) {
        sfull[idx - 1] = '1';
      }

      if (!(b_d > 0.0)) {
        exitg1 = true;
      } else {
        idx--;
      }
    }
  }

  if (d < 0.0) {
    idx = 0;
    pmax = 0;
    exitg1 = false;
    while ((!exitg1) && (pmax < 64)) {
      if (sfull[pmax] == '0') {
        idx = pmax + 1;
        exitg1 = true;
      } else {
        pmax++;
      }
    }

    if (idx == 0) {
      pmax = 55;
      idx = 8;
    } else {
      idx = 66 - idx;
      if (4 > idx) {
        idx = 4;
      }

      pmax = 31;
      pmin = 0;
      exitg1 = false;
      while ((!exitg1) && (pmax - pmin > 1)) {
        p = (pmin + pmax) >> 1;
        pow2p = 1 << p;
        if (pow2p == idx) {
          pmax = p;
          exitg1 = true;
        } else if (pow2p > idx) {
          pmax = p;
        } else {
          pmin = p;
        }
      }

      idx = 1 << pmax;
      if (64 < idx) {
        idx = 64;
      }

      pmax = 63 - idx;
    }
  } else {
    idx = 0;
    pmax = 0;
    exitg1 = false;
    while ((!exitg1) && (pmax < 64)) {
      if (sfull[pmax] == '1') {
        idx = pmax + 1;
        exitg1 = true;
      } else {
        pmax++;
      }
    }

    if (idx == 0) {
      idx = 64;
    }

    pmax = idx - 2;
    idx = 65 - idx;
  }

  if (1 >= idx) {
    s_size[0] = 1;
    s_size[1] = 1;
  } else {
    s_size[0] = 1;
    s_size[1] = idx;
  }

  for (pmin = 0; pmin < idx; pmin++) {
    s_data[pmin] = sfull[(pmax + pmin) + 1];
  }
}

/* System initialize for Simulink Function: '<Root>/Simulink Function3' */
void SloPositio_SendOnlyCommand_Init(void)
{
  /* Start for S-Function (sg_IO602_IO691_write_s): '<S3>/CAN Write1' */
  /* Level2 S-Function Block: '<S3>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Output and update for Simulink Function: '<Root>/Simulink Function3' */
void SloPositionControl_SendOnlyCommand(real_T rtu_C, const real_T rtu_A[5],
  real_T rtu_ID)
{
  real_T b_B[8];
  real_T u0;
  uint64_T a;
  uint64_T p2;
  int32_T i;
  int32_T loop_ub;
  int32_T loop_ub_0;
  char_T p_data[79];
  char_T kd_data[75];
  char_T kp_data[75];
  char_T t_data[75];
  char_T v_data[75];
  char_T B[64];
  int8_T outsize_idx_1;
  uint8_T tmp;
  static const boolean_T b[128] = { false, false, false, false, false, false,
    false, false, false, true, true, true, true, true, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    true, true, true, true, true, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false, false, false, false,
    false };

  int32_T c_size[2];

  /* SignalConversion generated from: '<S3>/ID' */
  SloPositionControl_B.TmpSignalConversionAtIDOutp_d1n = rtu_ID;

  /* SignalConversion generated from: '<S3>/C' */
  SloPositionControl_B.TmpSignalConversionAtCOutport1 = rtu_C;

  /* MATLAB Function: '<S3>/MATLAB Function' */
  SloPositionControl_B.sameC =
    SloPositionControl_B.TmpSignalConversionAtCOutport1;
  for (i = 0; i < 5; i++) {
    /* SignalConversion generated from: '<S3>/A' */
    SloPositionControl_B.TmpSignalConversionAtAOutport_o[i] = rtu_A[i];
  }

  /* MATLAB Function: '<S3>/floats -> bytes' */
  u0 = SloPositionControl_B.TmpSignalConversionAtAOutport_o[0];
  if (!(u0 < 95.5)) {
    u0 = 95.5;
  }

  if (!(u0 > -95.5)) {
    u0 = -95.5;
  }

  SloPositionControl_dec2bin(std::floor((u0 - -95.5) * 65535.0 / 191.0), B,
    c_size);
  outsize_idx_1 = static_cast<int8_T>(16 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    p_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    p_data[i + loop_ub] = B[i];
  }

  u0 = SloPositionControl_B.TmpSignalConversionAtAOutport_o[1];
  if (!(u0 < 45.0)) {
    u0 = 45.0;
  }

  if (!(u0 > -45.0)) {
    u0 = -45.0;
  }

  SloPositionControl_dec2bin(std::floor((u0 - -45.0) * 4095.0 / 90.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    v_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    v_data[i + loop_ub] = B[i];
  }

  u0 = SloPositionControl_B.TmpSignalConversionAtAOutport_o[2];
  if (!(u0 < 500.0)) {
    u0 = 500.0;
  }

  if (!(u0 > 0.0)) {
    u0 = 0.0;
  }

  SloPositionControl_dec2bin(std::floor(u0 * 4095.0 / 500.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    kp_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    kp_data[i + loop_ub] = B[i];
  }

  u0 = SloPositionControl_B.TmpSignalConversionAtAOutport_o[3];
  if (!(u0 < 45.0)) {
    u0 = 45.0;
  }

  if (!(u0 > -45.0)) {
    u0 = -45.0;
  }

  SloPositionControl_dec2bin(std::floor(u0 * 4095.0 / 5.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    kd_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    kd_data[i + loop_ub] = B[i];
  }

  u0 = SloPositionControl_B.TmpSignalConversionAtAOutport_o[4];
  if (!(u0 < 45.0)) {
    u0 = 45.0;
  }

  if (!(u0 > -45.0)) {
    u0 = -45.0;
  }

  SloPositionControl_dec2bin(std::floor((u0 - -18.0) * 4095.0 / 36.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    t_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    t_data[i + loop_ub] = B[i];
  }

  for (i = 0; i < 64; i++) {
    B[i] = '0';
  }

  for (i = 0; i < 8; i++) {
    B[i << 3] = p_data[i];
    B[(i << 3) + 1] = p_data[i + 8];
    B[(i << 3) + 2] = v_data[i];
  }

  B[3] = v_data[8];
  B[35] = kp_data[0];
  B[11] = v_data[9];
  B[43] = kp_data[1];
  B[19] = v_data[10];
  B[51] = kp_data[2];
  B[27] = v_data[11];
  B[59] = kp_data[3];
  for (i = 0; i < 8; i++) {
    B[(i << 3) + 4] = kp_data[i + 4];
    B[(i << 3) + 5] = kd_data[i];
  }

  B[6] = kd_data[8];
  B[38] = t_data[0];
  B[14] = kd_data[9];
  B[46] = t_data[1];
  B[22] = kd_data[10];
  B[54] = t_data[2];
  B[30] = kd_data[11];
  B[62] = t_data[3];
  for (i = 0; i < 8; i++) {
    B[(i << 3) + 7] = t_data[i + 4];
  }

  for (i = 0; i < 8; i++) {
    loop_ub = 1;
    while ((loop_ub < 8) && b[static_cast<uint8_T>(B[((loop_ub - 1) << 3) + i])])
    {
      loop_ub++;
    }

    loop_ub_0 = 7;
    while ((loop_ub_0 + 1 > loop_ub) && b[static_cast<uint8_T>(B[(loop_ub_0 << 3)
            + i])]) {
      loop_ub_0--;
    }

    p2 = 1UL;
    a = 0UL;
    while ((loop_ub < loop_ub_0 + 1) && b[static_cast<uint8_T>(B[((loop_ub - 1) <<
             3) + i])]) {
      loop_ub++;
    }

    while (loop_ub_0 + 1 >= loop_ub) {
      if (B[(loop_ub_0 << 3) + i] == '1') {
        a += p2;
        p2 += p2;
      } else if (B[(loop_ub_0 << 3) + i] == '0') {
        p2 += p2;
      }

      loop_ub_0--;
    }

    b_B[i] = static_cast<real_T>(a);
    u0 = rt_roundd_snf(b_B[i]);
    if (u0 < 256.0) {
      if (u0 >= 0.0) {
        tmp = static_cast<uint8_T>(u0);
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    SloPositionControl_B.b[i] = tmp;
  }

  /* End of MATLAB Function: '<S3>/floats -> bytes' */

  /* MultiPortSwitch: '<S3>/Multiport Switch' */
  switch (static_cast<int32_T>(SloPositionControl_B.sameC)) {
   case 1:
    /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
     *  Constant: '<S3>/Constant'
     */
    for (i = 0; i < 8; i++) {
      SloPositionControl_B.MultiportSwitch[i] =
        SloPositionControl_cal->Constant_Value_b[i];
    }
    break;

   case 2:
    /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    for (i = 0; i < 8; i++) {
      SloPositionControl_B.MultiportSwitch[i] =
        SloPositionControl_cal->Constant1_Value_p[i];
    }
    break;

   case 3:
    /* MultiPortSwitch: '<S3>/Multiport Switch' */
    for (i = 0; i < 8; i++) {
      SloPositionControl_B.MultiportSwitch[i] = SloPositionControl_B.b[i];
    }
    break;

   default:
    /* MultiPortSwitch: '<S3>/Multiport Switch' incorporates:
     *  Constant: '<S3>/Constant2'
     */
    for (i = 0; i < 8; i++) {
      SloPositionControl_B.MultiportSwitch[i] =
        SloPositionControl_cal->Constant2_Value_c[i];
    }
    break;
  }

  /* End of MultiPortSwitch: '<S3>/Multiport Switch' */

  /* S-Function (slrealtimebytepacking): '<S3>/Byte Packing' */

  /* Byte Packing: <S3>/Byte Packing */
  (void)memcpy((uint8_T*)&SloPositionControl_B.BytePacking[0] + 0, (uint8_T*)
               &SloPositionControl_B.MultiportSwitch[0], 8);

  /* S-Function (scanpack): '<S3>/CAN Pack1' */
  /* S-Function (scanpack): '<S3>/CAN Pack1' */
  SloPositionControl_B.CANPack1.ID = 1U;
  SloPositionControl_B.CANPack1.Length = 8U;
  SloPositionControl_B.CANPack1.Extended = 0U;
  SloPositionControl_B.CANPack1.Remote = 0;
  SloPositionControl_B.CANPack1.Data[0] = 0;
  SloPositionControl_B.CANPack1.Data[1] = 0;
  SloPositionControl_B.CANPack1.Data[2] = 0;
  SloPositionControl_B.CANPack1.Data[3] = 0;
  SloPositionControl_B.CANPack1.Data[4] = 0;
  SloPositionControl_B.CANPack1.Data[5] = 0;
  SloPositionControl_B.CANPack1.Data[6] = 0;
  SloPositionControl_B.CANPack1.Data[7] = 0;

  {
    (void) std::memcpy((SloPositionControl_B.CANPack1.Data),
                       &SloPositionControl_B.BytePacking[0],
                       8 * sizeof(uint8_T));
  }

  /* S-Function (sg_IO602_IO691_write_s): '<S3>/CAN Write1' */

  /* Level2 S-Function Block: '<S3>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  SloPositionControl_DW.SimulinkFunction3_SubsysRanBC = 4;
}

/* Termination for Simulink Function: '<Root>/Simulink Function3' */
void SloPositio_SendOnlyCommand_Term(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S3>/CAN Write1' */
  /* Level2 S-Function Block: '<S3>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[1];
    sfcnTerminate(rts);
  }
}

/* Output and update for Simulink Function: '<Root>/Simulink Function4' */
void SloPositionControl_Zero(real_T rtu_ID)
{
  UNUSED_PARAMETER(rtu_ID);
}

/* Output and update for Simulink Function: '<Root>/Simulink Function5' */
void SloPositionControl_deint(real_T rtu_ID)
{
  UNUSED_PARAMETER(rtu_ID);
}

/* Output and update for Simulink Function: '<Root>/Simulink Function6' */
void SloPositionControl_Control(const real_T rtu_A[5], real_T *rty_position,
  real_T *rty_velocity, real_T *rty_current, real_T *rtuy_ID, uint8_T
  *rty_status)
{
  UNUSED_PARAMETER(rtu_A);
  UNUSED_PARAMETER(rty_position);
  UNUSED_PARAMETER(rty_velocity);
  UNUSED_PARAMETER(rty_current);
  UNUSED_PARAMETER(rtuy_ID);
  UNUSED_PARAMETER(rty_status);
}

/* Model step function */
void SloPositionControl_step(void)
{
  /* Reset subsysRan breadcrumbs */
  srClearBC(SloPositionControl_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(SloPositionControl_DW.SimulinkFunction2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(SloPositionControl_DW.SimulinkFunction3_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */

  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* FunctionCaller: '<Root>/Function Caller' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  SloPositionControl_B.FunctionCaller_o4 =
    SloPositionControl_cal->Constant2_Value;

  /* FunctionCaller: '<Root>/Function Caller' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   */
  SloPositionControl_SendCommand(SloPositionControl_cal->Constant_Value_d,
    SloPositionControl_cal->Constant1_Value_a,
    &SloPositionControl_B.FunctionCaller_o1,
    &SloPositionControl_B.FunctionCaller_o2,
    &SloPositionControl_B.FunctionCaller_o3,
    &SloPositionControl_B.FunctionCaller_o4,
    &SloPositionControl_B.FunctionCaller_o5);

  /* S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */

  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++SloPositionControl_M->Timing.clockTick0)) {
    ++SloPositionControl_M->Timing.clockTickH0;
  }

  SloPositionControl_M->Timing.t[0] = SloPositionControl_M->Timing.clockTick0 *
    SloPositionControl_M->Timing.stepSize0 +
    SloPositionControl_M->Timing.clockTickH0 *
    SloPositionControl_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void SloPositionControl_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&SloPositionControl_M->solverInfo,"FixedStepDiscrete");
  SloPositionControl_M->solverInfoPtr = (&SloPositionControl_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = SloPositionControl_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    SloPositionControl_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    SloPositionControl_M->Timing.sampleTimes =
      (&SloPositionControl_M->Timing.sampleTimesArray[0]);
    SloPositionControl_M->Timing.offsetTimes =
      (&SloPositionControl_M->Timing.offsetTimesArray[0]);

    /* task periods */
    SloPositionControl_M->Timing.sampleTimes[0] = (0.02);

    /* task offsets */
    SloPositionControl_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(SloPositionControl_M, &SloPositionControl_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = SloPositionControl_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    SloPositionControl_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(SloPositionControl_M, -1);
  SloPositionControl_M->Timing.stepSize0 = 0.02;
  SloPositionControl_M->solverInfoPtr = (&SloPositionControl_M->solverInfo);
  SloPositionControl_M->Timing.stepSize = (0.02);
  rtsiSetFixedStepSize(&SloPositionControl_M->solverInfo, 0.02);
  rtsiSetSolverMode(&SloPositionControl_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&SloPositionControl_B)), 0,
                     sizeof(B_SloPositionControl_T));

  {
    SloPositionControl_B.CANPack1 = CAN_DATATYPE_GROUND;
    SloPositionControl_B.CANRead_o2 = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&SloPositionControl_DW), 0,
                     sizeof(DW_SloPositionControl_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &SloPositionControl_M->NonInlinedSFcns.sfcnInfo;
    SloPositionControl_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(SloPositionControl_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &SloPositionControl_M->Sizes.numSampTimes);
    SloPositionControl_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (SloPositionControl_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,SloPositionControl_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(SloPositionControl_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(SloPositionControl_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (SloPositionControl_M));
    rtssSetStepSizePtr(sfcnInfo, &SloPositionControl_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(SloPositionControl_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &SloPositionControl_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &SloPositionControl_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &SloPositionControl_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &SloPositionControl_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &SloPositionControl_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &SloPositionControl_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &SloPositionControl_M->solverInfoPtr);
  }

  SloPositionControl_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&SloPositionControl_M->NonInlinedSFcns.childSFunctions[0]),
                       0,
                       4*sizeof(SimStruct));
    SloPositionControl_M->childSfunctions =
      (&SloPositionControl_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    SloPositionControl_M->childSfunctions[0] =
      (&SloPositionControl_M->NonInlinedSFcns.childSFunctions[0]);
    SloPositionControl_M->childSfunctions[1] =
      (&SloPositionControl_M->NonInlinedSFcns.childSFunctions[1]);
    SloPositionControl_M->childSfunctions[2] =
      (&SloPositionControl_M->NonInlinedSFcns.childSFunctions[2]);
    SloPositionControl_M->childSfunctions[3] =
      (&SloPositionControl_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: SloPositionControl/<S2>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = SloPositionControl_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        SloPositionControl_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        SloPositionControl_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = SloPositionControl_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SloPositionControl_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SloPositionControl_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SloPositionControl_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SloPositionControl_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SloPositionControl_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SloPositionControl_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SloPositionControl_M->
                         NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &SloPositionControl_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &SloPositionControl_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &SloPositionControl_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &SloPositionControl_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &SloPositionControl_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &SloPositionControl_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts, "SloPositionControl/Simulink Function2/CAN Read");
      ssSetRTModel(rts,SloPositionControl_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)SloPositionControl_cal->CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SloPositionControl_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SloPositionControl_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SloPositionControl/<S3>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = SloPositionControl_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        SloPositionControl_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        SloPositionControl_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = SloPositionControl_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SloPositionControl_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SloPositionControl_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SloPositionControl_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SloPositionControl_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SloPositionControl_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SloPositionControl_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SloPositionControl_M->
                         NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &SloPositionControl_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &SloPositionControl_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &SloPositionControl_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &SloPositionControl_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &SloPositionControl_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "SloPositionControl/Simulink Function3/CAN Write1");
      ssSetRTModel(rts,SloPositionControl_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SloPositionControl_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SloPositionControl_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SloPositionControl_DW.CANWrite1_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: SloPositionControl/<Root>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = SloPositionControl_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        SloPositionControl_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        SloPositionControl_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = SloPositionControl_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SloPositionControl_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SloPositionControl_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SloPositionControl_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SloPositionControl_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SloPositionControl_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SloPositionControl_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SloPositionControl_M->
                         NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &SloPositionControl_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts, "SloPositionControl/CAN Setup ");
      ssSetRTModel(rts,SloPositionControl_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SloPositionControl_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       SloPositionControl_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       SloPositionControl_cal->CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &SloPositionControl_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SloPositionControl_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: SloPositionControl/<Root>/CAN Status (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = SloPositionControl_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        SloPositionControl_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        SloPositionControl_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = SloPositionControl_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &SloPositionControl_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &SloPositionControl_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, SloPositionControl_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &SloPositionControl_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &SloPositionControl_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &SloPositionControl_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &SloPositionControl_M->
                         NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &SloPositionControl_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Status");
      ssSetPath(rts, "SloPositionControl/CAN Status");
      ssSetRTModel(rts,SloPositionControl_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 34);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       SloPositionControl_cal->CANStatus_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       SloPositionControl_cal->CANStatus_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       SloPositionControl_cal->CANStatus_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       SloPositionControl_cal->CANStatus_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       SloPositionControl_cal->CANStatus_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       SloPositionControl_cal->CANStatus_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       SloPositionControl_cal->CANStatus_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       SloPositionControl_cal->CANStatus_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       SloPositionControl_cal->CANStatus_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       SloPositionControl_cal->CANStatus_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       SloPositionControl_cal->CANStatus_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       SloPositionControl_cal->CANStatus_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       SloPositionControl_cal->CANStatus_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       SloPositionControl_cal->CANStatus_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       SloPositionControl_cal->CANStatus_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       SloPositionControl_cal->CANStatus_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       SloPositionControl_cal->CANStatus_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       SloPositionControl_cal->CANStatus_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       SloPositionControl_cal->CANStatus_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       SloPositionControl_cal->CANStatus_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       SloPositionControl_cal->CANStatus_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       SloPositionControl_cal->CANStatus_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       SloPositionControl_cal->CANStatus_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       SloPositionControl_cal->CANStatus_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       SloPositionControl_cal->CANStatus_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       SloPositionControl_cal->CANStatus_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       SloPositionControl_cal->CANStatus_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       SloPositionControl_cal->CANStatus_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       SloPositionControl_cal->CANStatus_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       SloPositionControl_cal->CANStatus_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       SloPositionControl_cal->CANStatus_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       SloPositionControl_cal->CANStatus_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       SloPositionControl_cal->CANStatus_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       SloPositionControl_cal->CANStatus_P34_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &SloPositionControl_DW.CANStatus_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &SloPositionControl_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 34);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &SloPositionControl_DW.CANStatus_IWORK[0]);
      }

      /* registration */
      sg_IO602_IO691_status_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Start for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function2' incorporates:
   *  SubSystem: '<Root>/Simulink Function2'
   */
  SloPositionCon_SendCommand_Init();

  /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function2' */

  /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function3' incorporates:
   *  SubSystem: '<Root>/Simulink Function3'
   */
  SloPositio_SendOnlyCommand_Init();

  /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function3' */
}

/* Model terminate function */
void SloPositionControl_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function2' incorporates:
   *  SubSystem: '<Root>/Simulink Function2'
   */
  SloPositionCon_SendCommand_Term();

  /* End of Terminate for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function2' */

  /* Terminate for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function3' incorporates:
   *  SubSystem: '<Root>/Simulink Function3'
   */
  SloPositio_SendOnlyCommand_Term();

  /* End of Terminate for S-Function (sfun_private_function_caller) generated from: '<Root>/Simulink Function3' */

  /* Terminate for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = SloPositionControl_M->childSfunctions[3];
    sfcnTerminate(rts);
  }
}

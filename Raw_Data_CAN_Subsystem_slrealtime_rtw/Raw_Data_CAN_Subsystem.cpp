/*
 * Raw_Data_CAN_Subsystem.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Raw_Data_CAN_Subsystem".
 *
 * Model version              : 1.20
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu Sep  2 12:25:01 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Raw_Data_CAN_Subsystem.h"
#include "Raw_Data_CAN_Subsystem_private.h"

/* Block signals (default storage) */
B_Raw_Data_CAN_Subsystem_T Raw_Data_CAN_Subsystem_B;

/* Block states (default storage) */
DW_Raw_Data_CAN_Subsystem_T Raw_Data_CAN_Subsystem_DW;

/* Real-time model */
RT_MODEL_Raw_Data_CAN_Subsystem_T Raw_Data_CAN_Subsystem_M_ =
  RT_MODEL_Raw_Data_CAN_Subsystem_T();
RT_MODEL_Raw_Data_CAN_Subsystem_T *const Raw_Data_CAN_Subsystem_M =
  &Raw_Data_CAN_Subsystem_M_;

/* Forward declaration for local functions */
static void Raw_Data_CAN_Subsystem_dec2bin(real_T d, char_T s_data[], int32_T
  s_size[2]);

/* Function for MATLAB Function: '<S2>/floats -> bytes' */
static void Raw_Data_CAN_Subsystem_dec2bin(real_T d, char_T s_data[], int32_T
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

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void Raw_Data_CAN_Subsystem_step(void)
{
  real_T b_B[8];
  real_T I_ff;
  real_T position;
  real_T velocity;
  uint64_T a;
  uint64_T p2;
  int32_T i;
  int32_T loop_ub;
  int32_T tmp;
  char_T p_data[79];
  char_T kd_data[75];
  char_T kp_data[75];
  char_T t_data[75];
  char_T v_data[75];
  char_T B[64];
  int8_T rtAction;
  int8_T rtAction_0;
  uint8_T tmp_0;
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

  /* Reset subsysRan breadcrumbs */
  srClearBC(Raw_Data_CAN_Subsystem_DW.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Raw_Data_CAN_Subsystem_DW.Subsystem_SubsysRanBC_o);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Raw_Data_CAN_Subsystem_DW.Subsystem1_SubsysRanBC_o);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Raw_Data_CAN_Subsystem_DW.Subsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Raw_Data_CAN_Subsystem_DW.Subsystem2_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(Raw_Data_CAN_Subsystem_DW.Subsystem1_SubsysRanBC);

  /* DataStoreRead: '<Root>/Data Store Read2' */
  Raw_Data_CAN_Subsystem_B.DataStoreRead2 = Raw_Data_CAN_Subsystem_DW.c;
  for (i = 0; i < 5; i++) {
    /* Constant: '<Root>/One spin' */
    Raw_Data_CAN_Subsystem_B.Onespin[i] =
      Raw_Data_CAN_Subsystem_cal->Onespin_Value[i];
  }

  /* If: '<Root>/If2' */
  if (Raw_Data_CAN_Subsystem_B.DataStoreRead2 == 3.0) {
    /* Outputs for IfAction SubSystem: '<Root>/Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* DataStoreWrite: '<S3>/Data Store Write' */
    for (i = 0; i < 5; i++) {
      Raw_Data_CAN_Subsystem_DW.reinput[i] = Raw_Data_CAN_Subsystem_B.Onespin[i];
    }

    /* End of DataStoreWrite: '<S3>/Data Store Write' */
    /* End of Outputs for SubSystem: '<Root>/Subsystem1' */

    /* Update for IfAction SubSystem: '<Root>/Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Update for If: '<Root>/If2' */
    srUpdateBC(Raw_Data_CAN_Subsystem_DW.Subsystem1_SubsysRanBC);

    /* End of Update for SubSystem: '<Root>/Subsystem1' */
  }

  /* End of If: '<Root>/If2' */
  for (i = 0; i < 5; i++) {
    /* DataStoreRead: '<Root>/Data Store Read' */
    Raw_Data_CAN_Subsystem_B.DataStoreRead[i] =
      Raw_Data_CAN_Subsystem_DW.reinput[i];
  }

  for (i = 0; i < 5; i++) {
    /* Sum: '<Root>/Sum' */
    Raw_Data_CAN_Subsystem_B.Sum[i] = Raw_Data_CAN_Subsystem_B.DataStoreRead[i]
      - Raw_Data_CAN_Subsystem_B.Onespin[i];
  }

  /* Sum: '<Root>/Sum of Elements' */
  I_ff = -0.0;
  for (i = 0; i < 5; i++) {
    /* RelationalOperator: '<S1>/Compare' incorporates:
     *  Constant: '<S1>/Constant'
     */
    Raw_Data_CAN_Subsystem_B.Compare[i] = (Raw_Data_CAN_Subsystem_B.Sum[i] ==
      Raw_Data_CAN_Subsystem_cal->Constant_Value);

    /* DataTypeConversion: '<Root>/Cast To Double' */
    Raw_Data_CAN_Subsystem_B.CastToDouble[i] =
      Raw_Data_CAN_Subsystem_B.Compare[i];

    /* Sum: '<Root>/Sum of Elements' */
    I_ff += Raw_Data_CAN_Subsystem_B.CastToDouble[i];
  }

  /* Sum: '<Root>/Sum of Elements' */
  Raw_Data_CAN_Subsystem_B.SumofElements = I_ff;

  /* DataStoreRead: '<Root>/Data Store Read1' */
  Raw_Data_CAN_Subsystem_B.DataStoreRead1 = Raw_Data_CAN_Subsystem_DW.c;

  /* If: '<Root>/If' */
  rtAction = -1;
  if ((Raw_Data_CAN_Subsystem_B.DataStoreRead1 > 0.0) ||
      (Raw_Data_CAN_Subsystem_B.DataStoreRead1 != 3.0) ||
      ((Raw_Data_CAN_Subsystem_B.DataStoreRead1 == 3.0) &&
       (Raw_Data_CAN_Subsystem_B.SumofElements != 0.0))) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* S-Function (sg_IO602_IO691_setup_s): '<S2>/CAN Setup ' */

    /* Level2 S-Function Block: '<S2>/CAN Setup ' (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */

    /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* If: '<S2>/If' */
    rtAction_0 = -1;
    if (Raw_Data_CAN_Subsystem_B.CANRead_o1) {
      rtAction_0 = 0;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
       *  ActionPort: '<S5>/Action Port'
       */
      /* S-Function (scanunpack): '<S5>/CAN Unpack' */
      {
        /* S-Function (scanunpack): '<S5>/CAN Unpack' */
        uint8_T msgReceived = 0;
        if ((6 == Raw_Data_CAN_Subsystem_B.CANRead_o2.Length) &&
            (Raw_Data_CAN_Subsystem_B.CANRead_o2.ID != INVALID_CAN_ID) ) {
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
                      (Raw_Data_CAN_Subsystem_B.CANRead_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (Raw_Data_CAN_Subsystem_B.CANRead_o2.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                Raw_Data_CAN_Subsystem_B.CANUnpack_o1 = result;
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
                      (Raw_Data_CAN_Subsystem_B.CANRead_o2.Data[4]) & (uint16_T)
                      (0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (Raw_Data_CAN_Subsystem_B.CANRead_o2.Data[3]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                Raw_Data_CAN_Subsystem_B.CANUnpack_o2 = result;
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
                      (Raw_Data_CAN_Subsystem_B.CANRead_o2.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (Raw_Data_CAN_Subsystem_B.CANRead_o2.Data[4]) & (uint16_T)
                      (0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                Raw_Data_CAN_Subsystem_B.CANUnpack_o3 = result;
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
                      (Raw_Data_CAN_Subsystem_B.CANRead_o2.Data[0]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                Raw_Data_CAN_Subsystem_B.CANUnpack_o4 = result;
              }
            }
          }
        }

        /* Status port */
        Raw_Data_CAN_Subsystem_B.CANUnpack_o5 = msgReceived;
      }

      /* MATLAB Function: '<S5>/bytes -> floats' */
      Raw_Data_CAN_Subsystem_B.position = Raw_Data_CAN_Subsystem_B.CANUnpack_o1;
      Raw_Data_CAN_Subsystem_B.velocity = Raw_Data_CAN_Subsystem_B.CANUnpack_o2;
      Raw_Data_CAN_Subsystem_B.I_ff = Raw_Data_CAN_Subsystem_B.CANUnpack_o3;
      I_ff = Raw_Data_CAN_Subsystem_B.I_ff;
      velocity = Raw_Data_CAN_Subsystem_B.velocity;
      position = Raw_Data_CAN_Subsystem_B.position;
      Raw_Data_CAN_Subsystem_B.I_ff = I_ff;
      Raw_Data_CAN_Subsystem_B.velocity = velocity;
      Raw_Data_CAN_Subsystem_B.position = position;
      Raw_Data_CAN_Subsystem_B.position = Raw_Data_CAN_Subsystem_B.position *
        191.0 / 65535.0 + -95.5;
      Raw_Data_CAN_Subsystem_B.velocity = Raw_Data_CAN_Subsystem_B.velocity *
        90.0 / 4095.0 + -45.0;
      Raw_Data_CAN_Subsystem_B.I_ff = Raw_Data_CAN_Subsystem_B.I_ff * 80.0 /
        4095.0 + -40.0;
      srUpdateBC(Raw_Data_CAN_Subsystem_DW.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
    }

    Raw_Data_CAN_Subsystem_DW.If_ActiveSubsystem_f = rtAction_0;

    /* End of If: '<S2>/If' */
    /* DataStoreRead: '<S2>/Data Store Read' */
    Raw_Data_CAN_Subsystem_B.DataStoreRead_b = Raw_Data_CAN_Subsystem_DW.c;

    /* Sum: '<S2>/Add' incorporates:
     *  Constant: '<S2>/Constant2'
     */
    Raw_Data_CAN_Subsystem_B.Add_e = Raw_Data_CAN_Subsystem_P.c +
      Raw_Data_CAN_Subsystem_B.DataStoreRead_b;

    /* MATLAB Function: '<S2>/MATLAB Function' */
    Raw_Data_CAN_Subsystem_B.pc = (Raw_Data_CAN_Subsystem_B.Onespin[1] *
      Raw_Data_CAN_Subsystem_B.Onespin[3] + Raw_Data_CAN_Subsystem_B.Onespin[4])
      / Raw_Data_CAN_Subsystem_B.Onespin[2] + Raw_Data_CAN_Subsystem_B.Onespin[0];

    /* MATLAB Function: '<S2>/floats -> bytes' */
    I_ff = Raw_Data_CAN_Subsystem_B.Onespin[0];
    if (!(I_ff < 95.5)) {
      I_ff = 95.5;
    }

    if (!(I_ff > -95.5)) {
      I_ff = -95.5;
    }

    Raw_Data_CAN_Subsystem_dec2bin(std::floor((I_ff - -95.5) * 65535.0 / 191.0),
      B, c_size);
    rtAction_0 = static_cast<int8_T>(16 - c_size[1]);
    loop_ub = rtAction_0;
    tmp = c_size[1];
    for (i = 0; i < loop_ub; i++) {
      p_data[i] = '0';
    }

    for (i = 0; i < tmp; i++) {
      p_data[i + loop_ub] = B[i];
    }

    I_ff = Raw_Data_CAN_Subsystem_B.Onespin[1];
    if (!(I_ff < 45.0)) {
      I_ff = 45.0;
    }

    if (!(I_ff > -45.0)) {
      I_ff = -45.0;
    }

    Raw_Data_CAN_Subsystem_dec2bin(std::floor((I_ff - -45.0) * 4095.0 / 90.0), B,
      c_size);
    rtAction_0 = static_cast<int8_T>(12 - c_size[1]);
    loop_ub = rtAction_0;
    tmp = c_size[1];
    for (i = 0; i < loop_ub; i++) {
      v_data[i] = '0';
    }

    for (i = 0; i < tmp; i++) {
      v_data[i + loop_ub] = B[i];
    }

    I_ff = Raw_Data_CAN_Subsystem_B.Onespin[2];
    if (!(I_ff < 500.0)) {
      I_ff = 500.0;
    }

    if (!(I_ff > 0.0)) {
      I_ff = 0.0;
    }

    Raw_Data_CAN_Subsystem_dec2bin(std::floor(I_ff * 4095.0 / 500.0), B, c_size);
    rtAction_0 = static_cast<int8_T>(12 - c_size[1]);
    loop_ub = rtAction_0;
    tmp = c_size[1];
    for (i = 0; i < loop_ub; i++) {
      kp_data[i] = '0';
    }

    for (i = 0; i < tmp; i++) {
      kp_data[i + loop_ub] = B[i];
    }

    I_ff = Raw_Data_CAN_Subsystem_B.Onespin[3];
    if (!(I_ff < 45.0)) {
      I_ff = 45.0;
    }

    if (!(I_ff > -45.0)) {
      I_ff = -45.0;
    }

    Raw_Data_CAN_Subsystem_dec2bin(std::floor(I_ff * 4095.0 / 5.0), B, c_size);
    rtAction_0 = static_cast<int8_T>(12 - c_size[1]);
    loop_ub = rtAction_0;
    tmp = c_size[1];
    for (i = 0; i < loop_ub; i++) {
      kd_data[i] = '0';
    }

    for (i = 0; i < tmp; i++) {
      kd_data[i + loop_ub] = B[i];
    }

    I_ff = Raw_Data_CAN_Subsystem_B.Onespin[4];
    if (!(I_ff < 45.0)) {
      I_ff = 45.0;
    }

    if (!(I_ff > -45.0)) {
      I_ff = -45.0;
    }

    Raw_Data_CAN_Subsystem_dec2bin(std::floor((I_ff - -18.0) * 4095.0 / 36.0), B,
      c_size);
    rtAction_0 = static_cast<int8_T>(12 - c_size[1]);
    loop_ub = rtAction_0;
    tmp = c_size[1];
    for (i = 0; i < loop_ub; i++) {
      t_data[i] = '0';
    }

    for (i = 0; i < tmp; i++) {
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

    for (loop_ub = 0; loop_ub < 8; loop_ub++) {
      i = 1;
      while ((i < 8) && b[static_cast<uint8_T>(B[((i - 1) << 3) + loop_ub])]) {
        i++;
      }

      tmp = 7;
      while ((tmp + 1 > i) && b[static_cast<uint8_T>(B[(tmp << 3) + loop_ub])])
      {
        tmp--;
      }

      p2 = 1UL;
      a = 0UL;
      while ((i < tmp + 1) && b[static_cast<uint8_T>(B[((i - 1) << 3) + loop_ub])])
      {
        i++;
      }

      while (tmp + 1 >= i) {
        if (B[(tmp << 3) + loop_ub] == '1') {
          a += p2;
          p2 += p2;
        } else if (B[(tmp << 3) + loop_ub] == '0') {
          p2 += p2;
        }

        tmp--;
      }

      b_B[loop_ub] = static_cast<real_T>(a);
      I_ff = rt_roundd_snf(b_B[loop_ub]);
      if (I_ff < 256.0) {
        if (I_ff >= 0.0) {
          tmp_0 = static_cast<uint8_T>(I_ff);
        } else {
          tmp_0 = 0U;
        }
      } else {
        tmp_0 = MAX_uint8_T;
      }

      Raw_Data_CAN_Subsystem_B.b[loop_ub] = tmp_0;
    }

    /* End of MATLAB Function: '<S2>/floats -> bytes' */

    /* MultiPortSwitch: '<S2>/Multiport Switch' */
    switch (static_cast<int32_T>(Raw_Data_CAN_Subsystem_B.Add_e)) {
     case 1:
      /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
       *  Constant: '<S2>/Constant'
       */
      for (i = 0; i < 8; i++) {
        Raw_Data_CAN_Subsystem_B.MultiportSwitch[i] =
          Raw_Data_CAN_Subsystem_cal->Constant_Value_e[i];
      }
      break;

     case 2:
      /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
       *  Constant: '<S2>/Constant1'
       */
      for (i = 0; i < 8; i++) {
        Raw_Data_CAN_Subsystem_B.MultiportSwitch[i] =
          Raw_Data_CAN_Subsystem_cal->Constant1_Value[i];
      }
      break;

     case 3:
      /* MultiPortSwitch: '<S2>/Multiport Switch' */
      for (i = 0; i < 8; i++) {
        Raw_Data_CAN_Subsystem_B.MultiportSwitch[i] =
          Raw_Data_CAN_Subsystem_B.b[i];
      }
      break;

     default:
      /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
       *  Constant: '<S2>/Constant3'
       */
      for (i = 0; i < 8; i++) {
        Raw_Data_CAN_Subsystem_B.MultiportSwitch[i] =
          Raw_Data_CAN_Subsystem_cal->Constant3_Value[i];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S2>/Multiport Switch' */

    /* S-Function (slrealtimebytepacking): '<S2>/Byte Packing' */

    /* Byte Packing: <S2>/Byte Packing */
    (void)memcpy((uint8_T*)&Raw_Data_CAN_Subsystem_B.BytePacking[0] + 0,
                 (uint8_T*)&Raw_Data_CAN_Subsystem_B.MultiportSwitch[0], 8);

    /* S-Function (scanpack): '<S2>/CAN Pack1' */
    /* S-Function (scanpack): '<S2>/CAN Pack1' */
    Raw_Data_CAN_Subsystem_B.CANPack1.ID = 1U;
    Raw_Data_CAN_Subsystem_B.CANPack1.Length = 8U;
    Raw_Data_CAN_Subsystem_B.CANPack1.Extended = 0U;
    Raw_Data_CAN_Subsystem_B.CANPack1.Remote = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[0] = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[1] = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[2] = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[3] = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[4] = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[5] = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[6] = 0;
    Raw_Data_CAN_Subsystem_B.CANPack1.Data[7] = 0;

    {
      (void) std::memcpy((Raw_Data_CAN_Subsystem_B.CANPack1.Data),
                         &Raw_Data_CAN_Subsystem_B.BytePacking[0],
                         8 * sizeof(uint8_T));
    }

    /* S-Function (sg_IO602_IO691_write_s): '<S2>/CAN Write1' */

    /* Level2 S-Function Block: '<S2>/CAN Write1' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    /* Sin: '<S2>/Sine Wave' */
    Raw_Data_CAN_Subsystem_B.SineWave = std::sin
      (Raw_Data_CAN_Subsystem_cal->SineWave_Freq *
       Raw_Data_CAN_Subsystem_M->Timing.t[0] +
       Raw_Data_CAN_Subsystem_cal->SineWave_Phase) *
      Raw_Data_CAN_Subsystem_cal->SineWave_Amp +
      Raw_Data_CAN_Subsystem_cal->SineWave_Bias;

    /* Sin: '<S2>/Sine Wave1' */
    Raw_Data_CAN_Subsystem_B.SineWave1 = std::sin
      (Raw_Data_CAN_Subsystem_cal->SineWave1_Freq *
       Raw_Data_CAN_Subsystem_M->Timing.t[0] +
       Raw_Data_CAN_Subsystem_cal->SineWave1_Phase) *
      Raw_Data_CAN_Subsystem_cal->SineWave1_Amp +
      Raw_Data_CAN_Subsystem_cal->SineWave1_Bias;

    /* S-Function (sg_IO602_IO691_status_s): '<S2>/CAN Status' */

    /* Level2 S-Function Block: '<S2>/CAN Status' (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    srUpdateBC(Raw_Data_CAN_Subsystem_DW.Subsystem_SubsysRanBC_o);

    /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  }

  Raw_Data_CAN_Subsystem_DW.If_ActiveSubsystem = rtAction;

  /* End of If: '<Root>/If' */

  /* If: '<Root>/If1' */
  rtAction = -1;
  if (Raw_Data_CAN_Subsystem_B.CANWrite1 != 0) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Subsystem2' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Clock: '<S4>/Clock' */
    Raw_Data_CAN_Subsystem_B.Clock = Raw_Data_CAN_Subsystem_M->Timing.t[0];

    /* DataStoreRead: '<S4>/Data Store Read2' */
    Raw_Data_CAN_Subsystem_B.DataStoreRead2_c = Raw_Data_CAN_Subsystem_DW.c;

    /* If: '<S4>/If2' */
    rtAction_0 = -1;
    if (Raw_Data_CAN_Subsystem_B.DataStoreRead2_c > 3.0) {
      rtAction_0 = 0;

      /* Outputs for IfAction SubSystem: '<S4>/Subsystem1' incorporates:
       *  ActionPort: '<S10>/Action Port'
       */
      /* Stop: '<S10>/Stop Simulation' incorporates:
       *  Constant: '<S10>/Constant5'
       */
      if (Raw_Data_CAN_Subsystem_cal->Constant5_Value != 0.0) {
        rtmSetStopRequested(Raw_Data_CAN_Subsystem_M, 1);
      }

      /* End of Stop: '<S10>/Stop Simulation' */
      srUpdateBC(Raw_Data_CAN_Subsystem_DW.Subsystem1_SubsysRanBC_o);

      /* End of Outputs for SubSystem: '<S4>/Subsystem1' */
    } else if ((Raw_Data_CAN_Subsystem_B.DataStoreRead2_c < 3.0) ||
               (Raw_Data_CAN_Subsystem_B.Clock > 9.5)) {
      rtAction_0 = 1;

      /* Outputs for IfAction SubSystem: '<S4>/Subsystem' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* DataStoreRead: '<S9>/Data Store Read1' */
      Raw_Data_CAN_Subsystem_B.DataStoreRead1_p = Raw_Data_CAN_Subsystem_DW.c;

      /* Sum: '<S9>/Add' incorporates:
       *  Constant: '<S9>/Constant4'
       */
      Raw_Data_CAN_Subsystem_B.Add = Raw_Data_CAN_Subsystem_B.DataStoreRead1_p +
        Raw_Data_CAN_Subsystem_cal->Constant4_Value;

      /* DataStoreWrite: '<S9>/Data Store Write' */
      Raw_Data_CAN_Subsystem_DW.c = Raw_Data_CAN_Subsystem_B.Add;
      srUpdateBC(Raw_Data_CAN_Subsystem_DW.Subsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S4>/Subsystem' */
    }

    Raw_Data_CAN_Subsystem_DW.If2_ActiveSubsystem = rtAction_0;

    /* End of If: '<S4>/If2' */
    srUpdateBC(Raw_Data_CAN_Subsystem_DW.Subsystem2_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/Subsystem2' */
  }

  Raw_Data_CAN_Subsystem_DW.If1_ActiveSubsystem = rtAction;

  /* End of If: '<Root>/If1' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Raw_Data_CAN_Subsystem_M->Timing.clockTick0)) {
    ++Raw_Data_CAN_Subsystem_M->Timing.clockTickH0;
  }

  Raw_Data_CAN_Subsystem_M->Timing.t[0] =
    Raw_Data_CAN_Subsystem_M->Timing.clockTick0 *
    Raw_Data_CAN_Subsystem_M->Timing.stepSize0 +
    Raw_Data_CAN_Subsystem_M->Timing.clockTickH0 *
    Raw_Data_CAN_Subsystem_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Raw_Data_CAN_Subsystem_M->Timing.clockTick1)) {
      ++Raw_Data_CAN_Subsystem_M->Timing.clockTickH1;
    }

    Raw_Data_CAN_Subsystem_M->Timing.t[1] =
      Raw_Data_CAN_Subsystem_M->Timing.clockTick1 *
      Raw_Data_CAN_Subsystem_M->Timing.stepSize1 +
      Raw_Data_CAN_Subsystem_M->Timing.clockTickH1 *
      Raw_Data_CAN_Subsystem_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Raw_Data_CAN_Subsystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Raw_Data_CAN_Subsystem_M->solverInfo,
                          &Raw_Data_CAN_Subsystem_M->Timing.simTimeStep);
    rtsiSetTPtr(&Raw_Data_CAN_Subsystem_M->solverInfo, &rtmGetTPtr
                (Raw_Data_CAN_Subsystem_M));
    rtsiSetStepSizePtr(&Raw_Data_CAN_Subsystem_M->solverInfo,
                       &Raw_Data_CAN_Subsystem_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Raw_Data_CAN_Subsystem_M->solverInfo,
                          (&rtmGetErrorStatus(Raw_Data_CAN_Subsystem_M)));
    rtsiSetRTModelPtr(&Raw_Data_CAN_Subsystem_M->solverInfo,
                      Raw_Data_CAN_Subsystem_M);
  }

  rtsiSetSimTimeStep(&Raw_Data_CAN_Subsystem_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Raw_Data_CAN_Subsystem_M->solverInfo,"FixedStepDiscrete");
  Raw_Data_CAN_Subsystem_M->solverInfoPtr =
    (&Raw_Data_CAN_Subsystem_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Raw_Data_CAN_Subsystem_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Raw_Data_CAN_Subsystem_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Raw_Data_CAN_Subsystem_M->Timing.sampleTimes =
      (&Raw_Data_CAN_Subsystem_M->Timing.sampleTimesArray[0]);
    Raw_Data_CAN_Subsystem_M->Timing.offsetTimes =
      (&Raw_Data_CAN_Subsystem_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Raw_Data_CAN_Subsystem_M->Timing.sampleTimes[0] = (0.0);
    Raw_Data_CAN_Subsystem_M->Timing.sampleTimes[1] = (0.1);

    /* task offsets */
    Raw_Data_CAN_Subsystem_M->Timing.offsetTimes[0] = (0.0);
    Raw_Data_CAN_Subsystem_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Raw_Data_CAN_Subsystem_M, &Raw_Data_CAN_Subsystem_M->Timing.tArray
             [0]);

  {
    int_T *mdlSampleHits = Raw_Data_CAN_Subsystem_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Raw_Data_CAN_Subsystem_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Raw_Data_CAN_Subsystem_M, -1);
  Raw_Data_CAN_Subsystem_M->Timing.stepSize0 = 0.1;
  Raw_Data_CAN_Subsystem_M->Timing.stepSize1 = 0.1;
  Raw_Data_CAN_Subsystem_M->solverInfoPtr =
    (&Raw_Data_CAN_Subsystem_M->solverInfo);
  Raw_Data_CAN_Subsystem_M->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&Raw_Data_CAN_Subsystem_M->solverInfo, 0.1);
  rtsiSetSolverMode(&Raw_Data_CAN_Subsystem_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&Raw_Data_CAN_Subsystem_B)), 0,
                     sizeof(B_Raw_Data_CAN_Subsystem_T));

  {
    Raw_Data_CAN_Subsystem_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    Raw_Data_CAN_Subsystem_B.CANPack1 = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&Raw_Data_CAN_Subsystem_DW), 0,
                     sizeof(DW_Raw_Data_CAN_Subsystem_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.sfcnInfo;
    Raw_Data_CAN_Subsystem_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Raw_Data_CAN_Subsystem_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Raw_Data_CAN_Subsystem_M->Sizes.numSampTimes);
    Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (Raw_Data_CAN_Subsystem_M)[0]);
    Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (Raw_Data_CAN_Subsystem_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Raw_Data_CAN_Subsystem_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Raw_Data_CAN_Subsystem_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Raw_Data_CAN_Subsystem_M));
    rtssSetStepSizePtr(sfcnInfo, &Raw_Data_CAN_Subsystem_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Raw_Data_CAN_Subsystem_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Raw_Data_CAN_Subsystem_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Raw_Data_CAN_Subsystem_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Raw_Data_CAN_Subsystem_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Raw_Data_CAN_Subsystem_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Raw_Data_CAN_Subsystem_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Raw_Data_CAN_Subsystem_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Raw_Data_CAN_Subsystem_M->solverInfoPtr);
  }

  Raw_Data_CAN_Subsystem_M->Sizes.numSFcns = (4);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       4*sizeof(SimStruct));
    Raw_Data_CAN_Subsystem_M->childSfunctions =
      (&Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    Raw_Data_CAN_Subsystem_M->childSfunctions[0] =
      (&Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.childSFunctions[0]);
    Raw_Data_CAN_Subsystem_M->childSfunctions[1] =
      (&Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.childSFunctions[1]);
    Raw_Data_CAN_Subsystem_M->childSfunctions[2] =
      (&Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.childSFunctions[2]);
    Raw_Data_CAN_Subsystem_M->childSfunctions[3] =
      (&Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.childSFunctions[3]);

    /* Level2 S-Function Block: Raw_Data_CAN_Subsystem/<S2>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Raw_Data_CAN_Subsystem_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts, "Raw_Data_CAN_Subsystem/Subsystem/CAN Setup ");
      ssSetRTModel(rts,Raw_Data_CAN_Subsystem_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Raw_Data_CAN_Subsystem_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Raw_Data_CAN_Subsystem_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Raw_Data_CAN_Subsystem/<S2>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Raw_Data_CAN_Subsystem_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &Raw_Data_CAN_Subsystem_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &Raw_Data_CAN_Subsystem_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts, "Raw_Data_CAN_Subsystem/Subsystem/CAN Read");
      ssSetRTModel(rts,Raw_Data_CAN_Subsystem_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Raw_Data_CAN_Subsystem_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Raw_Data_CAN_Subsystem_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Raw_Data_CAN_Subsystem/<S2>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Raw_Data_CAN_Subsystem_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &Raw_Data_CAN_Subsystem_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((int8_T *)
            &Raw_Data_CAN_Subsystem_B.CANWrite1));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "Raw_Data_CAN_Subsystem/Subsystem/CAN Write1");
      ssSetRTModel(rts,Raw_Data_CAN_Subsystem_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Raw_Data_CAN_Subsystem_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Raw_Data_CAN_Subsystem_DW.CANWrite1_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Raw_Data_CAN_Subsystem/<S2>/CAN Status (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Raw_Data_CAN_Subsystem_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Status");
      ssSetPath(rts, "Raw_Data_CAN_Subsystem/Subsystem/CAN Status");
      ssSetRTModel(rts,Raw_Data_CAN_Subsystem_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 34);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       Raw_Data_CAN_Subsystem_cal->CANStatus_P34_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &Raw_Data_CAN_Subsystem_DW.CANStatus_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Raw_Data_CAN_Subsystem_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 34);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Raw_Data_CAN_Subsystem_DW.CANStatus_IWORK[0]);
      }

      /* registration */
      sg_IO602_IO691_status_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.1);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }
  }

  {
    int32_T i;
    for (i = 0; i < 5; i++) {
      /* Start for Constant: '<Root>/One spin' */
      Raw_Data_CAN_Subsystem_B.Onespin[i] =
        Raw_Data_CAN_Subsystem_cal->Onespin_Value[i];
    }

    /* Start for If: '<Root>/If' */
    Raw_Data_CAN_Subsystem_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<Root>/If1' */
    Raw_Data_CAN_Subsystem_DW.If1_ActiveSubsystem = -1;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
    Raw_Data_CAN_Subsystem_DW.c =
      Raw_Data_CAN_Subsystem_cal->DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
    for (i = 0; i < 5; i++) {
      Raw_Data_CAN_Subsystem_DW.reinput[i] =
        Raw_Data_CAN_Subsystem_cal->DataStoreMemory1_InitialValue[i];
    }

    /* End of Start for DataStoreMemory: '<Root>/Data Store Memory1' */
  }

  /* Start for S-Function (sg_IO602_IO691_setup_s): '<S2>/CAN Setup ' */
  /* Level2 S-Function Block: '<S2>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */
  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for If: '<S2>/If' */
  Raw_Data_CAN_Subsystem_DW.If_ActiveSubsystem_f = -1;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S2>/CAN Write1' */
  /* Level2 S-Function Block: '<S2>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_status_s): '<S2>/CAN Status' */
  /* Level2 S-Function Block: '<S2>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S5>/CAN Unpack' */

  /*-----------S-Function Block: <S5>/CAN Unpack -----------------*/

  /* SystemInitialize for Outport: '<S5>/Outport' */
  Raw_Data_CAN_Subsystem_B.position = Raw_Data_CAN_Subsystem_cal->Outport_Y0;

  /* SystemInitialize for Outport: '<S5>/Outport1' */
  Raw_Data_CAN_Subsystem_B.velocity = Raw_Data_CAN_Subsystem_cal->Outport1_Y0;

  /* SystemInitialize for Outport: '<S5>/Outport2' */
  Raw_Data_CAN_Subsystem_B.I_ff = Raw_Data_CAN_Subsystem_cal->Outport2_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S5>/CAN Unpack' incorporates:
   *  Outport: '<S5>/Outport3'
   */
  Raw_Data_CAN_Subsystem_B.CANUnpack_o4 =
    Raw_Data_CAN_Subsystem_cal->Outport3_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S5>/CAN Unpack' incorporates:
   *  Outport: '<S5>/Outport4'
   */
  Raw_Data_CAN_Subsystem_B.CANUnpack_o5 =
    Raw_Data_CAN_Subsystem_cal->Outport4_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/If Action Subsystem' */

  /* SystemInitialize for S-Function (sg_IO602_IO691_write_s): '<S2>/CAN Write1' incorporates:
   *  Outport: '<S2>/Status'
   */
  Raw_Data_CAN_Subsystem_B.CANWrite1 = Raw_Data_CAN_Subsystem_cal->Status_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/Subsystem2' */
  /* Start for If: '<S4>/If2' */
  Raw_Data_CAN_Subsystem_DW.If2_ActiveSubsystem = -1;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem2' */
}

/* Model terminate function */
void Raw_Data_CAN_Subsystem_terminate(void)
{
  /* Terminate for IfAction SubSystem: '<Root>/Subsystem' */
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<S2>/CAN Setup ' */
  /* Level2 S-Function Block: '<S2>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */
  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S2>/CAN Write1' */
  /* Level2 S-Function Block: '<S2>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_status_s): '<S2>/CAN Status' */
  /* Level2 S-Function Block: '<S2>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = Raw_Data_CAN_Subsystem_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Subsystem' */
}

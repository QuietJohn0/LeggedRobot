/*
 * CAN_2_Legs.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "CAN_2_Legs".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Aug 20 17:03:54 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CAN_2_Legs.h"
#include "CAN_2_Legs_private.h"

/* Block signals (default storage) */
B_CAN_2_Legs_T CAN_2_Legs_B;

/* Block states (default storage) */
DW_CAN_2_Legs_T CAN_2_Legs_DW;

/* Real-time model */
RT_MODEL_CAN_2_Legs_T CAN_2_Legs_M_ = RT_MODEL_CAN_2_Legs_T();
RT_MODEL_CAN_2_Legs_T *const CAN_2_Legs_M = &CAN_2_Legs_M_;

/* Forward declaration for local functions */
static void CAN_2_Legs_dec2bin(real_T d, char_T s_data[], int32_T s_size[2]);

/*
 * Output and update for atomic system:
 *    '<S3>/bytes -> floats'
 *    '<S6>/bytes -> floats'
 */
void CAN_2_Legs_bytesfloats(B_bytesfloats_CAN_2_Legs_T *localB)
{
  real_T I_ff;
  real_T position;
  real_T velocity;
  I_ff = localB->I_ff;
  velocity = localB->velocity;
  position = localB->position;
  localB->I_ff = I_ff;
  localB->velocity = velocity;
  localB->position = position;
  localB->position = localB->position * 191.0 / 65535.0 + -95.5;
  localB->velocity = localB->velocity * 90.0 / 4095.0 + -45.0;
  localB->I_ff = localB->I_ff * 80.0 / 4095.0 + -40.0;
}

/* Function for MATLAB Function: '<S1>/floats -> bytes' */
static void CAN_2_Legs_dec2bin(real_T d, char_T s_data[], int32_T s_size[2])
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

/*
 * Output and update for atomic system:
 *    '<S1>/floats -> bytes'
 *    '<S2>/floats -> bytes'
 */
void CAN_2_Legs_floatsbytes(real_T rtu_position, real_T rtu_velocity, real_T
  rtu_K_p, real_T rtu_K_d, real_T rtu_T_ff, B_floatsbytes_CAN_2_Legs_T *localB)
{
  real_T b_B[8];
  real_T y;
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
  if (rtu_position < 95.5) {
    y = rtu_position;
  } else {
    y = 95.5;
  }

  if (!(y > -95.5)) {
    y = -95.5;
  }

  CAN_2_Legs_dec2bin(std::floor((y - -95.5) * 65535.0 / 191.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(16 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    p_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    p_data[i + loop_ub] = B[i];
  }

  if (rtu_velocity < 45.0) {
    y = rtu_velocity;
  } else {
    y = 45.0;
  }

  if (!(y > -45.0)) {
    y = -45.0;
  }

  CAN_2_Legs_dec2bin(std::floor((y - -45.0) * 4095.0 / 90.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    v_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    v_data[i + loop_ub] = B[i];
  }

  if (rtu_K_p < 500.0) {
    y = rtu_K_p;
  } else {
    y = 500.0;
  }

  if (!(y > 0.0)) {
    y = 0.0;
  }

  CAN_2_Legs_dec2bin(std::floor(y * 4095.0 / 500.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    kp_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    kp_data[i + loop_ub] = B[i];
  }

  if (rtu_K_d < 45.0) {
    y = rtu_K_d;
  } else {
    y = 45.0;
  }

  if (!(y > -45.0)) {
    y = -45.0;
  }

  CAN_2_Legs_dec2bin(std::floor(y * 4095.0 / 5.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  loop_ub = outsize_idx_1;
  loop_ub_0 = c_size[1];
  for (i = 0; i < loop_ub; i++) {
    kd_data[i] = '0';
  }

  for (i = 0; i < loop_ub_0; i++) {
    kd_data[i + loop_ub] = B[i];
  }

  if (rtu_T_ff < 45.0) {
    y = rtu_T_ff;
  } else {
    y = 45.0;
  }

  if (!(y > -45.0)) {
    y = -45.0;
  }

  CAN_2_Legs_dec2bin(std::floor((y - -18.0) * 4095.0 / 36.0), B, c_size);
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
  }

  for (i = 0; i < 8; i++) {
    y = rt_roundd_snf(b_B[i]);
    if (y < 256.0) {
      if (y >= 0.0) {
        tmp = static_cast<uint8_T>(y);
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    localB->b[i] = tmp;
  }
}

/* Model step function */
void CAN_2_Legs_step(void)
{
  int32_T i;

  /* Reset subsysRan breadcrumbs */
  srClearBC(CAN_2_Legs_DW.IfActionSubsystem_SubsysRanBC_j);

  /* Reset subsysRan breadcrumbs */
  srClearBC(CAN_2_Legs_DW.IfActionSubsystem_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */

  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<Root>/Constant7' */
  CAN_2_Legs_B.Constant7 = CAN_2_Legs_cal->Constant7_Value;

  /* Constant: '<Root>/Constant8' */
  CAN_2_Legs_B.Constant8 = CAN_2_Legs_cal->Constant8_Value;

  /* Outputs for Atomic SubSystem: '<Root>/Simulink Function1' */
  /* S-Function (sg_IO602_IO691_read_s): '<S1>/CAN Read' */

  /* Level2 S-Function Block: '<S1>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* If: '<S1>/If' */
  if (CAN_2_Legs_B.CANRead_o1_e) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* S-Function (scanunpack): '<S3>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S3>/CAN Unpack' */
      uint8_T msgReceived = 0;
      if ((6 == CAN_2_Legs_B.CANRead_o2_i.Length) &&
          (CAN_2_Legs_B.CANRead_o2_i.ID != INVALID_CAN_ID) ) {
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
                    (CAN_2_Legs_B.CANRead_o2_i.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (CAN_2_Legs_B.CANRead_o2_i.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o1_o = result;
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
                    (CAN_2_Legs_B.CANRead_o2_i.Data[4]) & (uint16_T)(0xF0U)) >>
                    4);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (CAN_2_Legs_B.CANRead_o2_i.Data[3]) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o2_m = result;
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
                    (CAN_2_Legs_B.CANRead_o2_i.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (CAN_2_Legs_B.CANRead_o2_i.Data[4]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o3_o = result;
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
                    (CAN_2_Legs_B.CANRead_o2_i.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o4_f = result;
            }
          }
        }
      }

      /* Status port */
      CAN_2_Legs_B.CANUnpack_o5_m = msgReceived;
    }

    /* MATLAB Function: '<S3>/bytes -> floats' */
    CAN_2_Legs_B.sf_bytesfloats.position = CAN_2_Legs_B.CANUnpack_o1_o;
    CAN_2_Legs_B.sf_bytesfloats.velocity = CAN_2_Legs_B.CANUnpack_o2_m;
    CAN_2_Legs_B.sf_bytesfloats.I_ff = CAN_2_Legs_B.CANUnpack_o3_o;
    CAN_2_Legs_bytesfloats(&CAN_2_Legs_B.sf_bytesfloats);

    /* Update for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Update for If: '<S1>/If' */
    srUpdateBC(CAN_2_Legs_DW.IfActionSubsystem_SubsysRanBC_j);

    /* End of Update for SubSystem: '<S1>/If Action Subsystem' */
  }

  /* End of If: '<S1>/If' */
  /* MATLAB Function: '<S1>/floats -> bytes' incorporates:
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant11'
   *  Constant: '<Root>/Constant9'
   */
  CAN_2_Legs_floatsbytes(CAN_2_Legs_B.Constant7, CAN_2_Legs_B.Constant8,
    CAN_2_Legs_cal->Constant9_Value, CAN_2_Legs_cal->Constant10_Value,
    CAN_2_Legs_cal->Constant11_Value, &CAN_2_Legs_B.sf_floatsbytes);

  /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  switch (static_cast<int32_T>(CAN_2_Legs_cal->Constant_Value)) {
   case 1:
    /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
     *  Constant: '<S1>/Constant'
     */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch_f[i] = CAN_2_Legs_cal->Constant_Value_l[i];
    }
    break;

   case 2:
    /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch_f[i] = CAN_2_Legs_cal->Constant1_Value_m[i];
    }
    break;

   case 3:
    /* MultiPortSwitch: '<S1>/Multiport Switch' */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch_f[i] = CAN_2_Legs_B.sf_floatsbytes.b[i];
    }
    break;

   default:
    /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch_f[i] = CAN_2_Legs_cal->Constant2_Value_g[i];
    }
    break;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch' */

  /* S-Function (slrealtimebytepacking): '<S1>/Byte Packing' */

  /* Byte Packing: <S1>/Byte Packing */
  (void)memcpy((uint8_T*)&CAN_2_Legs_B.BytePacking_o[0] + 0, (uint8_T*)
               &CAN_2_Legs_B.MultiportSwitch_f[0], 8);

  /* S-Function (scanpack): '<S1>/CAN Pack1' */
  /* S-Function (scanpack): '<S1>/CAN Pack1' */
  CAN_2_Legs_B.CANPack1_i.ID = 2U;
  CAN_2_Legs_B.CANPack1_i.Length = 8U;
  CAN_2_Legs_B.CANPack1_i.Extended = 0U;
  CAN_2_Legs_B.CANPack1_i.Remote = 0;
  CAN_2_Legs_B.CANPack1_i.Data[0] = 0;
  CAN_2_Legs_B.CANPack1_i.Data[1] = 0;
  CAN_2_Legs_B.CANPack1_i.Data[2] = 0;
  CAN_2_Legs_B.CANPack1_i.Data[3] = 0;
  CAN_2_Legs_B.CANPack1_i.Data[4] = 0;
  CAN_2_Legs_B.CANPack1_i.Data[5] = 0;
  CAN_2_Legs_B.CANPack1_i.Data[6] = 0;
  CAN_2_Legs_B.CANPack1_i.Data[7] = 0;

  {
    (void) std::memcpy((CAN_2_Legs_B.CANPack1_i.Data),
                       &CAN_2_Legs_B.BytePacking_o[0],
                       8 * sizeof(uint8_T));
  }

  /* S-Function (sg_IO602_IO691_write_s): '<S1>/CAN Write1' */

  /* Level2 S-Function Block: '<S1>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<Root>/Constant1' */
  CAN_2_Legs_B.Constant1 = CAN_2_Legs_cal->Constant1_Value;

  /* Constant: '<Root>/Constant2' */
  CAN_2_Legs_B.Constant2 = CAN_2_Legs_cal->Constant2_Value;

  /* Outputs for Atomic SubSystem: '<Root>/Simulink Function3' */
  /* S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */

  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* If: '<S2>/If' */
  if (CAN_2_Legs_B.CANRead_o1) {
    /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* S-Function (scanunpack): '<S6>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S6>/CAN Unpack' */
      uint8_T msgReceived = 0;
      if ((6 == CAN_2_Legs_B.CANRead_o2.Length) && (CAN_2_Legs_B.CANRead_o2.ID
           != INVALID_CAN_ID) ) {
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
                    (CAN_2_Legs_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (CAN_2_Legs_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o1 = result;
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
                    (CAN_2_Legs_B.CANRead_o2.Data[4]) & (uint16_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (CAN_2_Legs_B.CANRead_o2.Data[3]) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o2 = result;
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
                    (CAN_2_Legs_B.CANRead_o2.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (CAN_2_Legs_B.CANRead_o2.Data[4]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o3 = result;
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
                    (CAN_2_Legs_B.CANRead_o2.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              CAN_2_Legs_B.CANUnpack_o4 = result;
            }
          }
        }
      }

      /* Status port */
      CAN_2_Legs_B.CANUnpack_o5 = msgReceived;
    }

    /* MATLAB Function: '<S6>/bytes -> floats' */
    CAN_2_Legs_B.sf_bytesfloats_k.position = CAN_2_Legs_B.CANUnpack_o1;
    CAN_2_Legs_B.sf_bytesfloats_k.velocity = CAN_2_Legs_B.CANUnpack_o2;
    CAN_2_Legs_B.sf_bytesfloats_k.I_ff = CAN_2_Legs_B.CANUnpack_o3;
    CAN_2_Legs_bytesfloats(&CAN_2_Legs_B.sf_bytesfloats_k);

    /* Update for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Update for If: '<S2>/If' */
    srUpdateBC(CAN_2_Legs_DW.IfActionSubsystem_SubsysRanBC);

    /* End of Update for SubSystem: '<S2>/If Action Subsystem' */
  }

  /* End of If: '<S2>/If' */
  /* MATLAB Function: '<S2>/floats -> bytes' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   *  Constant: '<Root>/Constant5'
   */
  CAN_2_Legs_floatsbytes(CAN_2_Legs_B.Constant1, CAN_2_Legs_B.Constant2,
    CAN_2_Legs_cal->Constant3_Value, CAN_2_Legs_cal->Constant4_Value,
    CAN_2_Legs_cal->Constant5_Value, &CAN_2_Legs_B.sf_floatsbytes_o);

  /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  switch (static_cast<int32_T>(CAN_2_Legs_cal->Constant_Value)) {
   case 1:
    /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
     *  Constant: '<S2>/Constant'
     */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch[i] = CAN_2_Legs_cal->Constant_Value_i[i];
    }
    break;

   case 2:
    /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch[i] = CAN_2_Legs_cal->Constant1_Value_e[i];
    }
    break;

   case 3:
    /* MultiPortSwitch: '<S2>/Multiport Switch' */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch[i] = CAN_2_Legs_B.sf_floatsbytes_o.b[i];
    }
    break;

   default:
    /* MultiPortSwitch: '<S2>/Multiport Switch' incorporates:
     *  Constant: '<S2>/Constant2'
     */
    for (i = 0; i < 8; i++) {
      CAN_2_Legs_B.MultiportSwitch[i] = CAN_2_Legs_cal->Constant2_Value_k[i];
    }
    break;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch' */

  /* S-Function (slrealtimebytepacking): '<S2>/Byte Packing' */

  /* Byte Packing: <S2>/Byte Packing */
  (void)memcpy((uint8_T*)&CAN_2_Legs_B.BytePacking[0] + 0, (uint8_T*)
               &CAN_2_Legs_B.MultiportSwitch[0], 8);

  /* S-Function (scanpack): '<S2>/CAN Pack1' */
  /* S-Function (scanpack): '<S2>/CAN Pack1' */
  CAN_2_Legs_B.CANPack1.ID = 1U;
  CAN_2_Legs_B.CANPack1.Length = 8U;
  CAN_2_Legs_B.CANPack1.Extended = 0U;
  CAN_2_Legs_B.CANPack1.Remote = 0;
  CAN_2_Legs_B.CANPack1.Data[0] = 0;
  CAN_2_Legs_B.CANPack1.Data[1] = 0;
  CAN_2_Legs_B.CANPack1.Data[2] = 0;
  CAN_2_Legs_B.CANPack1.Data[3] = 0;
  CAN_2_Legs_B.CANPack1.Data[4] = 0;
  CAN_2_Legs_B.CANPack1.Data[5] = 0;
  CAN_2_Legs_B.CANPack1.Data[6] = 0;
  CAN_2_Legs_B.CANPack1.Data[7] = 0;

  {
    (void) std::memcpy((CAN_2_Legs_B.CANPack1.Data), &CAN_2_Legs_B.BytePacking[0],
                       8 * sizeof(uint8_T));
  }

  /* S-Function (sg_IO602_IO691_write_s): '<S2>/CAN Write1' */

  /* Level2 S-Function Block: '<S2>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */

  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[5];
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
  if (!(++CAN_2_Legs_M->Timing.clockTick0)) {
    ++CAN_2_Legs_M->Timing.clockTickH0;
  }

  CAN_2_Legs_M->Timing.t[0] = CAN_2_Legs_M->Timing.clockTick0 *
    CAN_2_Legs_M->Timing.stepSize0 + CAN_2_Legs_M->Timing.clockTickH0 *
    CAN_2_Legs_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void CAN_2_Legs_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&CAN_2_Legs_M->solverInfo,"FixedStepDiscrete");
  CAN_2_Legs_M->solverInfoPtr = (&CAN_2_Legs_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = CAN_2_Legs_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    CAN_2_Legs_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    CAN_2_Legs_M->Timing.sampleTimes = (&CAN_2_Legs_M->Timing.sampleTimesArray[0]);
    CAN_2_Legs_M->Timing.offsetTimes = (&CAN_2_Legs_M->Timing.offsetTimesArray[0]);

    /* task periods */
    CAN_2_Legs_M->Timing.sampleTimes[0] = (0.001);

    /* task offsets */
    CAN_2_Legs_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(CAN_2_Legs_M, &CAN_2_Legs_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = CAN_2_Legs_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    CAN_2_Legs_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(CAN_2_Legs_M, -1);
  CAN_2_Legs_M->Timing.stepSize0 = 0.001;
  CAN_2_Legs_M->solverInfoPtr = (&CAN_2_Legs_M->solverInfo);
  CAN_2_Legs_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&CAN_2_Legs_M->solverInfo, 0.001);
  rtsiSetSolverMode(&CAN_2_Legs_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&CAN_2_Legs_B)), 0,
                     sizeof(B_CAN_2_Legs_T));

  {
    CAN_2_Legs_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    CAN_2_Legs_B.CANPack1 = CAN_DATATYPE_GROUND;
    CAN_2_Legs_B.CANRead_o2_i = CAN_DATATYPE_GROUND;
    CAN_2_Legs_B.CANPack1_i = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&CAN_2_Legs_DW), 0,
                     sizeof(DW_CAN_2_Legs_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &CAN_2_Legs_M->NonInlinedSFcns.sfcnInfo;
    CAN_2_Legs_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(CAN_2_Legs_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &CAN_2_Legs_M->Sizes.numSampTimes);
    CAN_2_Legs_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(CAN_2_Legs_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,CAN_2_Legs_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(CAN_2_Legs_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(CAN_2_Legs_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(CAN_2_Legs_M));
    rtssSetStepSizePtr(sfcnInfo, &CAN_2_Legs_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(CAN_2_Legs_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &CAN_2_Legs_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &CAN_2_Legs_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &CAN_2_Legs_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &CAN_2_Legs_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &CAN_2_Legs_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &CAN_2_Legs_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &CAN_2_Legs_M->solverInfoPtr);
  }

  CAN_2_Legs_M->Sizes.numSFcns = (6);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&CAN_2_Legs_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       6*sizeof(SimStruct));
    CAN_2_Legs_M->childSfunctions =
      (&CAN_2_Legs_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 6; i++) {
        CAN_2_Legs_M->childSfunctions[i] =
          (&CAN_2_Legs_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: CAN_2_Legs/<S1>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = CAN_2_Legs_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &CAN_2_Legs_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &CAN_2_Legs_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, CAN_2_Legs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CAN_2_Legs_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &CAN_2_Legs_B.CANRead_o1_e));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &CAN_2_Legs_B.CANRead_o2_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts, "CAN_2_Legs/Simulink Function1/CAN Read");
      ssSetRTModel(rts,CAN_2_Legs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CAN_2_Legs_cal->CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &CAN_2_Legs_DW.CANRead_PWORK_l);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CAN_2_Legs_DW.CANRead_PWORK_l);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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

    /* Level2 S-Function Block: CAN_2_Legs/<S1>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = CAN_2_Legs_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &CAN_2_Legs_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &CAN_2_Legs_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, CAN_2_Legs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CAN_2_Legs_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &CAN_2_Legs_B.CANPack1_i);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "CAN_2_Legs/Simulink Function1/CAN Write1");
      ssSetRTModel(rts,CAN_2_Legs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CAN_2_Legs_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &CAN_2_Legs_DW.CANWrite1_PWORK_f);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CAN_2_Legs_DW.CANWrite1_PWORK_f);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: CAN_2_Legs/<S2>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = CAN_2_Legs_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &CAN_2_Legs_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &CAN_2_Legs_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, CAN_2_Legs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CAN_2_Legs_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &CAN_2_Legs_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &CAN_2_Legs_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts, "CAN_2_Legs/Simulink Function3/CAN Read");
      ssSetRTModel(rts,CAN_2_Legs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CAN_2_Legs_cal->CANRead_P1_Size_k);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &CAN_2_Legs_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CAN_2_Legs_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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

    /* Level2 S-Function Block: CAN_2_Legs/<S2>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = CAN_2_Legs_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &CAN_2_Legs_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &CAN_2_Legs_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, CAN_2_Legs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CAN_2_Legs_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &CAN_2_Legs_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "CAN_2_Legs/Simulink Function3/CAN Write1");
      ssSetRTModel(rts,CAN_2_Legs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CAN_2_Legs_cal->CANWrite1_P1_Size_d);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &CAN_2_Legs_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CAN_2_Legs_DW.CANWrite1_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: CAN_2_Legs/<Root>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = CAN_2_Legs_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = CAN_2_Legs_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = CAN_2_Legs_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = CAN_2_Legs_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &CAN_2_Legs_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &CAN_2_Legs_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, CAN_2_Legs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CAN_2_Legs_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts, "CAN_2_Legs/CAN Setup ");
      ssSetRTModel(rts,CAN_2_Legs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CAN_2_Legs_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CAN_2_Legs_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CAN_2_Legs_cal->CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &CAN_2_Legs_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CAN_2_Legs_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: CAN_2_Legs/<Root>/CAN Status (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = CAN_2_Legs_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = CAN_2_Legs_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = CAN_2_Legs_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = CAN_2_Legs_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &CAN_2_Legs_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &CAN_2_Legs_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, CAN_2_Legs_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &CAN_2_Legs_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CAN_2_Legs_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &CAN_2_Legs_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Status");
      ssSetPath(rts, "CAN_2_Legs/CAN Status");
      ssSetRTModel(rts,CAN_2_Legs_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 34);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CAN_2_Legs_cal->CANStatus_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CAN_2_Legs_cal->CANStatus_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CAN_2_Legs_cal->CANStatus_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)CAN_2_Legs_cal->CANStatus_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)CAN_2_Legs_cal->CANStatus_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)CAN_2_Legs_cal->CANStatus_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)CAN_2_Legs_cal->CANStatus_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)CAN_2_Legs_cal->CANStatus_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)CAN_2_Legs_cal->CANStatus_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)CAN_2_Legs_cal->CANStatus_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)CAN_2_Legs_cal->CANStatus_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)CAN_2_Legs_cal->CANStatus_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)CAN_2_Legs_cal->CANStatus_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)CAN_2_Legs_cal->CANStatus_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)CAN_2_Legs_cal->CANStatus_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)CAN_2_Legs_cal->CANStatus_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)CAN_2_Legs_cal->CANStatus_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)CAN_2_Legs_cal->CANStatus_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)CAN_2_Legs_cal->CANStatus_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)CAN_2_Legs_cal->CANStatus_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)CAN_2_Legs_cal->CANStatus_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)CAN_2_Legs_cal->CANStatus_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)CAN_2_Legs_cal->CANStatus_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)CAN_2_Legs_cal->CANStatus_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)CAN_2_Legs_cal->CANStatus_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)CAN_2_Legs_cal->CANStatus_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)CAN_2_Legs_cal->CANStatus_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)CAN_2_Legs_cal->CANStatus_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)CAN_2_Legs_cal->CANStatus_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)CAN_2_Legs_cal->CANStatus_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)CAN_2_Legs_cal->CANStatus_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)CAN_2_Legs_cal->CANStatus_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)CAN_2_Legs_cal->CANStatus_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)CAN_2_Legs_cal->CANStatus_P34_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &CAN_2_Legs_DW.CANStatus_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CAN_2_Legs_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 34);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CAN_2_Legs_DW.CANStatus_IWORK[0]);
      }

      /* registration */
      sg_IO602_IO691_status_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant7' */
  CAN_2_Legs_B.Constant7 = CAN_2_Legs_cal->Constant7_Value;

  /* Start for Constant: '<Root>/Constant8' */
  CAN_2_Legs_B.Constant8 = CAN_2_Legs_cal->Constant8_Value;

  /* Start for Constant: '<Root>/Constant1' */
  CAN_2_Legs_B.Constant1 = CAN_2_Legs_cal->Constant1_Value;

  /* Start for Constant: '<Root>/Constant2' */
  CAN_2_Legs_B.Constant2 = CAN_2_Legs_cal->Constant2_Value;

  /* Start for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S1>/CAN Read' */
  /* Level2 S-Function Block: '<S1>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S1>/CAN Write1' */
  /* Level2 S-Function Block: '<S1>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack' */

  /*-----------S-Function Block: <S3>/CAN Unpack -----------------*/

  /* SystemInitialize for Outport: '<S3>/Outport' */
  CAN_2_Legs_B.sf_bytesfloats.position = CAN_2_Legs_cal->Outport_Y0;

  /* SystemInitialize for Outport: '<S3>/Outport1' */
  CAN_2_Legs_B.sf_bytesfloats.velocity = CAN_2_Legs_cal->Outport1_Y0;

  /* SystemInitialize for Outport: '<S3>/Outport2' */
  CAN_2_Legs_B.sf_bytesfloats.I_ff = CAN_2_Legs_cal->Outport2_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S3>/CAN Unpack' incorporates:
   *  Outport: '<S3>/Outport3'
   */
  CAN_2_Legs_B.CANUnpack_o4_f = CAN_2_Legs_cal->Outport3_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S3>/CAN Unpack' incorporates:
   *  Outport: '<S3>/Outport4'
   */
  CAN_2_Legs_B.CANUnpack_o5_m = CAN_2_Legs_cal->Outport4_Y0;

  /* End of SystemInitialize for SubSystem: '<S1>/If Action Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Simulink Function1' */
  /* Start for S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */
  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S2>/CAN Write1' */
  /* Level2 S-Function Block: '<S2>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S6>/CAN Unpack' */

  /*-----------S-Function Block: <S6>/CAN Unpack -----------------*/

  /* SystemInitialize for Outport: '<S6>/Outport' */
  CAN_2_Legs_B.sf_bytesfloats_k.position = CAN_2_Legs_cal->Outport_Y0_e;

  /* SystemInitialize for Outport: '<S6>/Outport1' */
  CAN_2_Legs_B.sf_bytesfloats_k.velocity = CAN_2_Legs_cal->Outport1_Y0_c;

  /* SystemInitialize for Outport: '<S6>/Outport2' */
  CAN_2_Legs_B.sf_bytesfloats_k.I_ff = CAN_2_Legs_cal->Outport2_Y0_j;

  /* SystemInitialize for S-Function (scanunpack): '<S6>/CAN Unpack' incorporates:
   *  Outport: '<S6>/Outport3'
   */
  CAN_2_Legs_B.CANUnpack_o4 = CAN_2_Legs_cal->Outport3_Y0_c;

  /* SystemInitialize for S-Function (scanunpack): '<S6>/CAN Unpack' incorporates:
   *  Outport: '<S6>/Outport4'
   */
  CAN_2_Legs_B.CANUnpack_o5 = CAN_2_Legs_cal->Outport4_Y0_l;

  /* End of SystemInitialize for SubSystem: '<S2>/If Action Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Simulink Function3' */
}

/* Model terminate function */
void CAN_2_Legs_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<Root>/Simulink Function1' */
  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S1>/CAN Read' */
  /* Level2 S-Function Block: '<S1>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S1>/CAN Write1' */
  /* Level2 S-Function Block: '<S1>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<Root>/Simulink Function3' */
  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S2>/CAN Read' */
  /* Level2 S-Function Block: '<S2>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S2>/CAN Write1' */
  /* Level2 S-Function Block: '<S2>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = CAN_2_Legs_M->childSfunctions[5];
    sfcnTerminate(rts);
  }
}

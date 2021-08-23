/*
 * getTorque.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "getTorque".
 *
 * Model version              : 1.9
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Mon Aug 23 16:01:07 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "getTorque.h"
#include "getTorque_private.h"

/* Block signals (default storage) */
B_getTorque_T getTorque_B;

/* Block states (default storage) */
DW_getTorque_T getTorque_DW;

/* Real-time model */
RT_MODEL_getTorque_T getTorque_M_ = RT_MODEL_getTorque_T();
RT_MODEL_getTorque_T *const getTorque_M = &getTorque_M_;

/* Forward declaration for local functions */
static void getTorque_dec2bin(real_T d, char_T s_data[], int32_T s_size[2]);

/*
 * Output and update for atomic system:
 *    '<S6>/bytes -> floats'
 *    '<S9>/bytes -> floats'
 */
void getTorque_bytesfloats(B_bytesfloats_getTorque_T *localB)
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

/* Function for MATLAB Function: '<S4>/floats -> bytes' */
static void getTorque_dec2bin(real_T d, char_T s_data[], int32_T s_size[2])
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
void getTorque_step(void)
{
  real_T b_B[8];
  real_T c[4];
  real_T F[2];
  real_T T_idx_0;
  real_T T_idx_1;
  real_T a_idx_2;
  real_T r;
  real_T t;
  real_T u2;
  uint64_T a;
  uint64_T p2;
  int32_T loop_ub;
  int32_T r1;
  int32_T r2;
  char_T p_data[79];
  char_T kd_data[75];
  char_T kp_data[75];
  char_T t_data[75];
  char_T v_data[75];
  char_T B[64];
  int8_T rtAction;
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

  /* Reset subsysRan breadcrumbs */
  srClearBC(getTorque_DW.IfActionSubsystem_SubsysRanBC_m);

  /* Reset subsysRan breadcrumbs */
  srClearBC(getTorque_DW.IfActionSubsystem_SubsysRanBC);

  /* S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */

  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* Constant: '<Root>/Constant1' */
  getTorque_B.Constant1 = getTorque_cal->Constant1_Value;

  /* Constant: '<Root>/Constant2' */
  getTorque_B.Constant2 = getTorque_cal->Constant2_Value;

  /* Delay: '<Root>/Delay One Step1' */
  getTorque_B.DelayOneStep1 = getTorque_DW.DelayOneStep1_DSTATE;

  /* Delay: '<Root>/Delay One Step' */
  getTorque_B.DelayOneStep = getTorque_DW.DelayOneStep_DSTATE;

  /* Gain: '<Root>/Gain1' */
  getTorque_B.Gain1 = getTorque_cal->Gain1_Gain * getTorque_B.DelayOneStep;

  /* Sin: '<Root>/Sine Wave' */
  getTorque_B.SineWave = std::sin(getTorque_cal->SineWave_Freq *
    getTorque_M->Timing.t[0] + getTorque_cal->SineWave_Phase) *
    getTorque_cal->SineWave_Amp + getTorque_cal->SineWave_Bias;

  /* Saturate: '<Root>/Saturation' */
  T_idx_1 = getTorque_B.SineWave;
  T_idx_0 = getTorque_cal->Saturation_LowerSat;
  u2 = getTorque_cal->Saturation_UpperSat;
  if (T_idx_1 > u2) {
    /* Saturate: '<Root>/Saturation' */
    getTorque_B.Saturation = u2;
  } else if (T_idx_1 < T_idx_0) {
    /* Saturate: '<Root>/Saturation' */
    getTorque_B.Saturation = T_idx_0;
  } else {
    /* Saturate: '<Root>/Saturation' */
    getTorque_B.Saturation = T_idx_1;
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  F[0] = getTorque_cal->Constant6_Value;
  F[1] = getTorque_B.Saturation;
  T_idx_1 = std::cos(getTorque_B.DelayOneStep1);
  t = std::cos(getTorque_B.DelayOneStep1 - getTorque_B.Gain1);
  u2 = std::cos(getTorque_B.DelayOneStep1 - getTorque_B.Gain1);
  a_idx_2 = std::sin(getTorque_B.DelayOneStep1);
  r = std::cos(getTorque_B.DelayOneStep1 - getTorque_B.Gain1);
  T_idx_0 = std::sin(getTorque_B.DelayOneStep1 - getTorque_B.Gain1);
  T_idx_1 = 2.0 * T_idx_1 + 3.0 * t;
  u2 *= 3.0;
  a_idx_2 = -2.0 * a_idx_2 - 3.0 * r;
  T_idx_0 *= -3.0;
  if (std::abs(u2) > std::abs(T_idx_1)) {
    r = T_idx_1 / u2;
    t = 1.0 / (r * T_idx_0 - a_idx_2);
    c[0] = T_idx_0 / u2 * t;
    c[1] = -t;
    c[2] = -a_idx_2 / u2 * t;
    c[3] = r * t;
  } else {
    r = u2 / T_idx_1;
    t = 1.0 / (T_idx_0 - r * a_idx_2);
    c[0] = T_idx_0 / T_idx_1 * t;
    c[1] = -r * t;
    c[2] = -a_idx_2 / T_idx_1 * t;
    c[3] = t;
  }

  if (std::abs(c[1]) > std::abs(c[0])) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }

  r = c[r2] / c[r1];
  T_idx_1 = (F[r2] - F[r1] * r) / (c[r2 + 2] - c[r1 + 2] * r);
  T_idx_0 = (F[r1] - c[r1 + 2] * T_idx_1) / c[r1];
  getTorque_B.T1 = T_idx_0;
  getTorque_B.T2 = T_idx_1;

  /* End of MATLAB Function: '<Root>/MATLAB Function2' */

  /* Outputs for Atomic SubSystem: '<Root>/Simulink Function3' */
  /* S-Function (sg_IO602_IO691_read_s): '<S5>/CAN Read' */

  /* Level2 S-Function Block: '<S5>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* If: '<S5>/If' */
  rtAction = -1;
  if (getTorque_B.CANRead_o1) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<S5>/If Action Subsystem' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* S-Function (scanunpack): '<S9>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S9>/CAN Unpack' */
      uint8_T msgReceived = 0;
      if ((6 == getTorque_B.CANRead_o2.Length) && (getTorque_B.CANRead_o2.ID !=
           INVALID_CAN_ID) ) {
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
                    (getTorque_B.CANRead_o2.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (getTorque_B.CANRead_o2.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o1 = result;
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
                    (getTorque_B.CANRead_o2.Data[4]) & (uint16_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (getTorque_B.CANRead_o2.Data[3]) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o2 = result;
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
                    (getTorque_B.CANRead_o2.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (getTorque_B.CANRead_o2.Data[4]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o3 = result;
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
                  tempValue = tempValue | (uint8_T)(getTorque_B.CANRead_o2.Data
                    [0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o4 = result;
            }
          }
        }
      }

      /* Status port */
      getTorque_B.CANUnpack_o5 = msgReceived;
    }

    /* MATLAB Function: '<S9>/bytes -> floats' */
    getTorque_B.sf_bytesfloats_c.position = getTorque_B.CANUnpack_o1;
    getTorque_B.sf_bytesfloats_c.velocity = getTorque_B.CANUnpack_o2;
    getTorque_B.sf_bytesfloats_c.I_ff = getTorque_B.CANUnpack_o3;
    getTorque_bytesfloats(&getTorque_B.sf_bytesfloats_c);
    srUpdateBC(getTorque_DW.IfActionSubsystem_SubsysRanBC);

    /* End of Outputs for SubSystem: '<S5>/If Action Subsystem' */
  }

  getTorque_DW.If_ActiveSubsystem = rtAction;

  /* End of If: '<S5>/If' */
  /* MATLAB Function: '<S5>/floats -> bytes' incorporates:
   *  Constant: '<Root>/Constant3'
   *  Constant: '<Root>/Constant4'
   */
  T_idx_1 = getTorque_B.Constant1;
  if (!(T_idx_1 < 95.5)) {
    T_idx_1 = 95.5;
  }

  if (!(T_idx_1 > -95.5)) {
    T_idx_1 = -95.5;
  }

  getTorque_dec2bin(std::floor((T_idx_1 - -95.5) * 65535.0 / 191.0), B, c_size);
  rtAction = static_cast<int8_T>(16 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    p_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    p_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_B.Constant2;
  if (!(T_idx_1 < 45.0)) {
    T_idx_1 = 45.0;
  }

  if (!(T_idx_1 > -45.0)) {
    T_idx_1 = -45.0;
  }

  getTorque_dec2bin(std::floor((T_idx_1 - -45.0) * 4095.0 / 90.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    v_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    v_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_cal->Constant3_Value;
  if (!(T_idx_1 < 500.0)) {
    T_idx_1 = 500.0;
  }

  if (!(T_idx_1 > 0.0)) {
    T_idx_1 = 0.0;
  }

  getTorque_dec2bin(std::floor(T_idx_1 * 4095.0 / 500.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    kp_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    kp_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_cal->Constant4_Value;
  if (!(T_idx_1 < 45.0)) {
    T_idx_1 = 45.0;
  }

  if (!(T_idx_1 > -45.0)) {
    T_idx_1 = -45.0;
  }

  getTorque_dec2bin(std::floor(T_idx_1 * 4095.0 / 5.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    kd_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    kd_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_B.T1;
  if (!(T_idx_1 < 45.0)) {
    T_idx_1 = 45.0;
  }

  if (!(T_idx_1 > -45.0)) {
    T_idx_1 = -45.0;
  }

  getTorque_dec2bin(std::floor((T_idx_1 - -18.0) * 4095.0 / 36.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    t_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    t_data[r2 + r1] = B[r2];
  }

  for (r2 = 0; r2 < 64; r2++) {
    B[r2] = '0';
  }

  for (r2 = 0; r2 < 8; r2++) {
    B[r2 << 3] = p_data[r2];
    B[(r2 << 3) + 1] = p_data[r2 + 8];
    B[(r2 << 3) + 2] = v_data[r2];
  }

  B[3] = v_data[8];
  B[35] = kp_data[0];
  B[11] = v_data[9];
  B[43] = kp_data[1];
  B[19] = v_data[10];
  B[51] = kp_data[2];
  B[27] = v_data[11];
  B[59] = kp_data[3];
  for (r2 = 0; r2 < 8; r2++) {
    B[(r2 << 3) + 4] = kp_data[r2 + 4];
    B[(r2 << 3) + 5] = kd_data[r2];
  }

  B[6] = kd_data[8];
  B[38] = t_data[0];
  B[14] = kd_data[9];
  B[46] = t_data[1];
  B[22] = kd_data[10];
  B[54] = t_data[2];
  B[30] = kd_data[11];
  B[62] = t_data[3];
  for (r2 = 0; r2 < 8; r2++) {
    B[(r2 << 3) + 7] = t_data[r2 + 4];
  }

  for (r1 = 0; r1 < 8; r1++) {
    r2 = 1;
    while ((r2 < 8) && b[static_cast<uint8_T>(B[((r2 - 1) << 3) + r1])]) {
      r2++;
    }

    loop_ub = 7;
    while ((loop_ub + 1 > r2) && b[static_cast<uint8_T>(B[(loop_ub << 3) + r1])])
    {
      loop_ub--;
    }

    p2 = 1UL;
    a = 0UL;
    while ((r2 < loop_ub + 1) && b[static_cast<uint8_T>(B[((r2 - 1) << 3) + r1])])
    {
      r2++;
    }

    while (loop_ub + 1 >= r2) {
      if (B[(loop_ub << 3) + r1] == '1') {
        a += p2;
        p2 += p2;
      } else if (B[(loop_ub << 3) + r1] == '0') {
        p2 += p2;
      }

      loop_ub--;
    }

    b_B[r1] = static_cast<real_T>(a);
    T_idx_1 = rt_roundd_snf(b_B[r1]);
    if (T_idx_1 < 256.0) {
      if (T_idx_1 >= 0.0) {
        tmp = static_cast<uint8_T>(T_idx_1);
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    getTorque_B.b[r1] = tmp;
  }

  /* End of MATLAB Function: '<S5>/floats -> bytes' */

  /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  switch (static_cast<int32_T>(getTorque_cal->Constant_Value)) {
   case 1:
    /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
     *  Constant: '<S5>/Constant'
     */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch[r1] = getTorque_cal->Constant_Value_f[r1];
    }
    break;

   case 2:
    /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
     *  Constant: '<S5>/Constant1'
     */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch[r1] = getTorque_cal->Constant1_Value_p[r1];
    }
    break;

   case 3:
    /* MultiPortSwitch: '<S5>/Multiport Switch' */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch[r1] = getTorque_B.b[r1];
    }
    break;

   default:
    /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
     *  Constant: '<S5>/Constant2'
     */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch[r1] = getTorque_cal->Constant2_Value_i[r1];
    }
    break;
  }

  /* End of MultiPortSwitch: '<S5>/Multiport Switch' */

  /* S-Function (slrealtimebytepacking): '<S5>/Byte Packing' */

  /* Byte Packing: <S5>/Byte Packing */
  (void)memcpy((uint8_T*)&getTorque_B.BytePacking[0] + 0, (uint8_T*)
               &getTorque_B.MultiportSwitch[0], 8);

  /* S-Function (scanpack): '<S5>/CAN Pack1' */
  /* S-Function (scanpack): '<S5>/CAN Pack1' */
  getTorque_B.CANPack1.ID = 1U;
  getTorque_B.CANPack1.Length = 8U;
  getTorque_B.CANPack1.Extended = 0U;
  getTorque_B.CANPack1.Remote = 0;
  getTorque_B.CANPack1.Data[0] = 0;
  getTorque_B.CANPack1.Data[1] = 0;
  getTorque_B.CANPack1.Data[2] = 0;
  getTorque_B.CANPack1.Data[3] = 0;
  getTorque_B.CANPack1.Data[4] = 0;
  getTorque_B.CANPack1.Data[5] = 0;
  getTorque_B.CANPack1.Data[6] = 0;
  getTorque_B.CANPack1.Data[7] = 0;

  {
    (void) std::memcpy((getTorque_B.CANPack1.Data), &getTorque_B.BytePacking[0],
                       8 * sizeof(uint8_T));
  }

  /* S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write1' */

  /* Level2 S-Function Block: '<S5>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* Gain: '<Root>/Gain' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  getTorque_B.Gain = getTorque_cal->Gain_Gain * getTorque_cal->Constant7_Value;

  /* Constant: '<Root>/Constant8' */
  getTorque_B.Constant8 = getTorque_cal->Constant8_Value;

  /* Gain: '<Root>/Gain2' */
  getTorque_B.Gain2 = getTorque_cal->Gain2_Gain * getTorque_B.T2;

  /* Outputs for Atomic SubSystem: '<Root>/Simulink Function1' */
  /* S-Function (sg_IO602_IO691_read_s): '<S4>/CAN Read' */

  /* Level2 S-Function Block: '<S4>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* If: '<S4>/If' */
  rtAction = -1;
  if (getTorque_B.CANRead_o1_o) {
    rtAction = 0;

    /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* S-Function (scanunpack): '<S6>/CAN Unpack' */
    {
      /* S-Function (scanunpack): '<S6>/CAN Unpack' */
      uint8_T msgReceived = 0;
      if ((6 == getTorque_B.CANRead_o2_i.Length) && (getTorque_B.CANRead_o2_i.ID
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
                    (getTorque_B.CANRead_o2_i.Data[2]);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (getTorque_B.CANRead_o2_i.Data[1]) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o1_c = result;
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
                    (getTorque_B.CANRead_o2_i.Data[4]) & (uint16_T)(0xF0U)) >> 4);
                  tempValue = tempValue | (uint16_T)((uint16_T)
                    (getTorque_B.CANRead_o2_i.Data[3]) << 4);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o2_i = result;
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
                    (getTorque_B.CANRead_o2_i.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (getTorque_B.CANRead_o2_i.Data[4]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o3_m = result;
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
                    (getTorque_B.CANRead_o2_i.Data[0]);
                }

                unpackedValue = tempValue;
              }

              outValue = (real64_T) (unpackedValue);
            }

            {
              real64_T result = (real64_T) outValue;
              getTorque_B.CANUnpack_o4_n = result;
            }
          }
        }
      }

      /* Status port */
      getTorque_B.CANUnpack_o5_i = msgReceived;
    }

    /* MATLAB Function: '<S6>/bytes -> floats' */
    getTorque_B.sf_bytesfloats.position = getTorque_B.CANUnpack_o1_c;
    getTorque_B.sf_bytesfloats.velocity = getTorque_B.CANUnpack_o2_i;
    getTorque_B.sf_bytesfloats.I_ff = getTorque_B.CANUnpack_o3_m;
    getTorque_bytesfloats(&getTorque_B.sf_bytesfloats);
    srUpdateBC(getTorque_DW.IfActionSubsystem_SubsysRanBC_m);

    /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
  }

  getTorque_DW.If_ActiveSubsystem_j = rtAction;

  /* End of If: '<S4>/If' */
  /* MATLAB Function: '<S4>/floats -> bytes' incorporates:
   *  Constant: '<Root>/Constant10'
   *  Constant: '<Root>/Constant9'
   */
  T_idx_1 = getTorque_B.Gain;
  if (!(T_idx_1 < 95.5)) {
    T_idx_1 = 95.5;
  }

  if (!(T_idx_1 > -95.5)) {
    T_idx_1 = -95.5;
  }

  getTorque_dec2bin(std::floor((T_idx_1 - -95.5) * 65535.0 / 191.0), B, c_size);
  rtAction = static_cast<int8_T>(16 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    p_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    p_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_B.Constant8;
  if (!(T_idx_1 < 45.0)) {
    T_idx_1 = 45.0;
  }

  if (!(T_idx_1 > -45.0)) {
    T_idx_1 = -45.0;
  }

  getTorque_dec2bin(std::floor((T_idx_1 - -45.0) * 4095.0 / 90.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    v_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    v_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_cal->Constant9_Value;
  if (!(T_idx_1 < 500.0)) {
    T_idx_1 = 500.0;
  }

  if (!(T_idx_1 > 0.0)) {
    T_idx_1 = 0.0;
  }

  getTorque_dec2bin(std::floor(T_idx_1 * 4095.0 / 500.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    kp_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    kp_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_cal->Constant10_Value;
  if (!(T_idx_1 < 45.0)) {
    T_idx_1 = 45.0;
  }

  if (!(T_idx_1 > -45.0)) {
    T_idx_1 = -45.0;
  }

  getTorque_dec2bin(std::floor(T_idx_1 * 4095.0 / 5.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    kd_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    kd_data[r2 + r1] = B[r2];
  }

  T_idx_1 = getTorque_B.Gain2;
  if (!(T_idx_1 < 45.0)) {
    T_idx_1 = 45.0;
  }

  if (!(T_idx_1 > -45.0)) {
    T_idx_1 = -45.0;
  }

  getTorque_dec2bin(std::floor((T_idx_1 - -18.0) * 4095.0 / 36.0), B, c_size);
  rtAction = static_cast<int8_T>(12 - c_size[1]);
  r1 = rtAction;
  loop_ub = c_size[1];
  for (r2 = 0; r2 < r1; r2++) {
    t_data[r2] = '0';
  }

  for (r2 = 0; r2 < loop_ub; r2++) {
    t_data[r2 + r1] = B[r2];
  }

  for (r2 = 0; r2 < 64; r2++) {
    B[r2] = '0';
  }

  for (r2 = 0; r2 < 8; r2++) {
    B[r2 << 3] = p_data[r2];
    B[(r2 << 3) + 1] = p_data[r2 + 8];
    B[(r2 << 3) + 2] = v_data[r2];
  }

  B[3] = v_data[8];
  B[35] = kp_data[0];
  B[11] = v_data[9];
  B[43] = kp_data[1];
  B[19] = v_data[10];
  B[51] = kp_data[2];
  B[27] = v_data[11];
  B[59] = kp_data[3];
  for (r2 = 0; r2 < 8; r2++) {
    B[(r2 << 3) + 4] = kp_data[r2 + 4];
    B[(r2 << 3) + 5] = kd_data[r2];
  }

  B[6] = kd_data[8];
  B[38] = t_data[0];
  B[14] = kd_data[9];
  B[46] = t_data[1];
  B[22] = kd_data[10];
  B[54] = t_data[2];
  B[30] = kd_data[11];
  B[62] = t_data[3];
  for (r2 = 0; r2 < 8; r2++) {
    B[(r2 << 3) + 7] = t_data[r2 + 4];
  }

  for (r1 = 0; r1 < 8; r1++) {
    r2 = 1;
    while ((r2 < 8) && b[static_cast<uint8_T>(B[((r2 - 1) << 3) + r1])]) {
      r2++;
    }

    loop_ub = 7;
    while ((loop_ub + 1 > r2) && b[static_cast<uint8_T>(B[(loop_ub << 3) + r1])])
    {
      loop_ub--;
    }

    p2 = 1UL;
    a = 0UL;
    while ((r2 < loop_ub + 1) && b[static_cast<uint8_T>(B[((r2 - 1) << 3) + r1])])
    {
      r2++;
    }

    while (loop_ub + 1 >= r2) {
      if (B[(loop_ub << 3) + r1] == '1') {
        a += p2;
        p2 += p2;
      } else if (B[(loop_ub << 3) + r1] == '0') {
        p2 += p2;
      }

      loop_ub--;
    }

    b_B[r1] = static_cast<real_T>(a);
    T_idx_1 = rt_roundd_snf(b_B[r1]);
    if (T_idx_1 < 256.0) {
      if (T_idx_1 >= 0.0) {
        tmp = static_cast<uint8_T>(T_idx_1);
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    getTorque_B.b_k[r1] = tmp;
  }

  /* End of MATLAB Function: '<S4>/floats -> bytes' */

  /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  switch (static_cast<int32_T>(getTorque_cal->Constant_Value)) {
   case 1:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/Constant'
     */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch_a[r1] = getTorque_cal->Constant_Value_j[r1];
    }
    break;

   case 2:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/Constant1'
     */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch_a[r1] = getTorque_cal->Constant1_Value_h[r1];
    }
    break;

   case 3:
    /* MultiPortSwitch: '<S4>/Multiport Switch' */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch_a[r1] = getTorque_B.b_k[r1];
    }
    break;

   default:
    /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
     *  Constant: '<S4>/Constant2'
     */
    for (r1 = 0; r1 < 8; r1++) {
      getTorque_B.MultiportSwitch_a[r1] = getTorque_cal->Constant2_Value_n[r1];
    }
    break;
  }

  /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

  /* S-Function (slrealtimebytepacking): '<S4>/Byte Packing' */

  /* Byte Packing: <S4>/Byte Packing */
  (void)memcpy((uint8_T*)&getTorque_B.BytePacking_d[0] + 0, (uint8_T*)
               &getTorque_B.MultiportSwitch_a[0], 8);

  /* S-Function (scanpack): '<S4>/CAN Pack1' */
  /* S-Function (scanpack): '<S4>/CAN Pack1' */
  getTorque_B.CANPack1_n.ID = 2U;
  getTorque_B.CANPack1_n.Length = 8U;
  getTorque_B.CANPack1_n.Extended = 0U;
  getTorque_B.CANPack1_n.Remote = 0;
  getTorque_B.CANPack1_n.Data[0] = 0;
  getTorque_B.CANPack1_n.Data[1] = 0;
  getTorque_B.CANPack1_n.Data[2] = 0;
  getTorque_B.CANPack1_n.Data[3] = 0;
  getTorque_B.CANPack1_n.Data[4] = 0;
  getTorque_B.CANPack1_n.Data[5] = 0;
  getTorque_B.CANPack1_n.Data[6] = 0;
  getTorque_B.CANPack1_n.Data[7] = 0;

  {
    (void) std::memcpy((getTorque_B.CANPack1_n.Data),
                       &getTorque_B.BytePacking_d[0],
                       8 * sizeof(uint8_T));
  }

  /* S-Function (sg_IO602_IO691_write_s): '<S4>/CAN Write1' */

  /* Level2 S-Function Block: '<S4>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* SignalConversion generated from: '<S2>/ SFunction ' incorporates:
   *  MATLAB Function: '<Root>/MATLAB Function1'
   */
  getTorque_B.TmpSignalConversionAtSFunctionI[0] =
    getTorque_B.sf_bytesfloats_c.position;
  getTorque_B.TmpSignalConversionAtSFunctionI[1] =
    getTorque_B.sf_bytesfloats.position;

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  getTorque_B.danger = 0.0;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  getTorque_B.GRF = 0.0;
  if (((getTorque_B.sf_bytesfloats_c.position < 0.0) && (2.25 <
        getTorque_B.sf_bytesfloats_c.I_ff)) ||
      ((getTorque_B.sf_bytesfloats_c.position > 0.0) && (-2.25 >
        getTorque_B.sf_bytesfloats_c.I_ff))) {
    getTorque_B.GRF = 1.0;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */
  /* S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */

  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[5];
    sfcnOutputs(rts,0);
  }

  /* Update for Delay: '<Root>/Delay One Step1' */
  getTorque_DW.DelayOneStep1_DSTATE = getTorque_B.sf_bytesfloats_c.position;

  /* Update for Delay: '<Root>/Delay One Step' */
  getTorque_DW.DelayOneStep_DSTATE = getTorque_B.sf_bytesfloats.position;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++getTorque_M->Timing.clockTick0)) {
    ++getTorque_M->Timing.clockTickH0;
  }

  getTorque_M->Timing.t[0] = getTorque_M->Timing.clockTick0 *
    getTorque_M->Timing.stepSize0 + getTorque_M->Timing.clockTickH0 *
    getTorque_M->Timing.stepSize0 * 4294967296.0;

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
    if (!(++getTorque_M->Timing.clockTick1)) {
      ++getTorque_M->Timing.clockTickH1;
    }

    getTorque_M->Timing.t[1] = getTorque_M->Timing.clockTick1 *
      getTorque_M->Timing.stepSize1 + getTorque_M->Timing.clockTickH1 *
      getTorque_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void getTorque_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&getTorque_M->solverInfo,
                          &getTorque_M->Timing.simTimeStep);
    rtsiSetTPtr(&getTorque_M->solverInfo, &rtmGetTPtr(getTorque_M));
    rtsiSetStepSizePtr(&getTorque_M->solverInfo, &getTorque_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&getTorque_M->solverInfo, (&rtmGetErrorStatus
      (getTorque_M)));
    rtsiSetRTModelPtr(&getTorque_M->solverInfo, getTorque_M);
  }

  rtsiSetSimTimeStep(&getTorque_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&getTorque_M->solverInfo,"FixedStepDiscrete");
  getTorque_M->solverInfoPtr = (&getTorque_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = getTorque_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    getTorque_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    getTorque_M->Timing.sampleTimes = (&getTorque_M->Timing.sampleTimesArray[0]);
    getTorque_M->Timing.offsetTimes = (&getTorque_M->Timing.offsetTimesArray[0]);

    /* task periods */
    getTorque_M->Timing.sampleTimes[0] = (0.0);
    getTorque_M->Timing.sampleTimes[1] = (0.1);

    /* task offsets */
    getTorque_M->Timing.offsetTimes[0] = (0.0);
    getTorque_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(getTorque_M, &getTorque_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = getTorque_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    getTorque_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(getTorque_M, -1);
  getTorque_M->Timing.stepSize0 = 0.1;
  getTorque_M->Timing.stepSize1 = 0.1;
  getTorque_M->solverInfoPtr = (&getTorque_M->solverInfo);
  getTorque_M->Timing.stepSize = (0.1);
  rtsiSetFixedStepSize(&getTorque_M->solverInfo, 0.1);
  rtsiSetSolverMode(&getTorque_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&getTorque_B)), 0,
                     sizeof(B_getTorque_T));

  {
    getTorque_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    getTorque_B.CANPack1 = CAN_DATATYPE_GROUND;
    getTorque_B.CANRead_o2_i = CAN_DATATYPE_GROUND;
    getTorque_B.CANPack1_n = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&getTorque_DW), 0,
                     sizeof(DW_getTorque_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &getTorque_M->NonInlinedSFcns.sfcnInfo;
    getTorque_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(getTorque_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &getTorque_M->Sizes.numSampTimes);
    getTorque_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(getTorque_M)[0]);
    getTorque_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(getTorque_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,getTorque_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(getTorque_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(getTorque_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(getTorque_M));
    rtssSetStepSizePtr(sfcnInfo, &getTorque_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(getTorque_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &getTorque_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &getTorque_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &getTorque_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &getTorque_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &getTorque_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &getTorque_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &getTorque_M->solverInfoPtr);
  }

  getTorque_M->Sizes.numSFcns = (6);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&getTorque_M->NonInlinedSFcns.childSFunctions[0]), 0,
                       6*sizeof(SimStruct));
    getTorque_M->childSfunctions =
      (&getTorque_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 6; i++) {
        getTorque_M->childSfunctions[i] =
          (&getTorque_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: getTorque/<S4>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = getTorque_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = getTorque_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = getTorque_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = getTorque_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &getTorque_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &getTorque_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, getTorque_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &getTorque_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &getTorque_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &getTorque_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &getTorque_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &getTorque_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &getTorque_B.CANRead_o1_o));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &getTorque_B.CANRead_o2_i));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts, "getTorque/Simulink Function1/CAN Read");
      ssSetRTModel(rts,getTorque_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &getTorque_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)getTorque_cal->CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &getTorque_DW.CANRead_PWORK_l);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &getTorque_DW.CANRead_PWORK_l);
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

    /* Level2 S-Function Block: getTorque/<S4>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = getTorque_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = getTorque_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = getTorque_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = getTorque_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &getTorque_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &getTorque_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, getTorque_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &getTorque_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &getTorque_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &getTorque_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &getTorque_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &getTorque_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &getTorque_B.CANPack1_n);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "getTorque/Simulink Function1/CAN Write1");
      ssSetRTModel(rts,getTorque_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &getTorque_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)getTorque_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &getTorque_DW.CANWrite1_PWORK_l);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &getTorque_DW.CANWrite1_PWORK_l);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: getTorque/<S5>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = getTorque_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = getTorque_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = getTorque_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = getTorque_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &getTorque_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &getTorque_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, getTorque_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &getTorque_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &getTorque_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &getTorque_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &getTorque_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &getTorque_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *) &getTorque_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &getTorque_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts, "getTorque/Simulink Function3/CAN Read");
      ssSetRTModel(rts,getTorque_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &getTorque_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)getTorque_cal->CANRead_P1_Size_o);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &getTorque_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &getTorque_DW.CANRead_PWORK);
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

    /* Level2 S-Function Block: getTorque/<S5>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = getTorque_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = getTorque_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = getTorque_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = getTorque_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &getTorque_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &getTorque_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, getTorque_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &getTorque_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &getTorque_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &getTorque_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &getTorque_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &getTorque_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &getTorque_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &getTorque_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "getTorque/Simulink Function3/CAN Write1");
      ssSetRTModel(rts,getTorque_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &getTorque_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)getTorque_cal->CANWrite1_P1_Size_c);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &getTorque_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &getTorque_DW.CANWrite1_PWORK);
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

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: getTorque/<Root>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = getTorque_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = getTorque_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = getTorque_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = getTorque_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &getTorque_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &getTorque_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, getTorque_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &getTorque_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &getTorque_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &getTorque_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &getTorque_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &getTorque_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts, "getTorque/CAN Setup ");
      ssSetRTModel(rts,getTorque_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &getTorque_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)getTorque_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)getTorque_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)getTorque_cal->CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &getTorque_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &getTorque_DW.CANSetup_PWORK);
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

    /* Level2 S-Function Block: getTorque/<Root>/CAN Status (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = getTorque_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod = getTorque_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset = getTorque_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap = getTorque_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &getTorque_M->NonInlinedSFcns.blkInfo2[5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &getTorque_M->NonInlinedSFcns.inputOutputPortInfo2[5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, getTorque_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &getTorque_M->NonInlinedSFcns.methods2[5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &getTorque_M->NonInlinedSFcns.methods3[5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &getTorque_M->NonInlinedSFcns.methods4[5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &getTorque_M->NonInlinedSFcns.statesInfo2[5]);
        ssSetPeriodicStatesInfo(rts,
          &getTorque_M->NonInlinedSFcns.periodicStatesInfo[5]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Status");
      ssSetPath(rts, "getTorque/CAN Status");
      ssSetRTModel(rts,getTorque_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &getTorque_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 34);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)getTorque_cal->CANStatus_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)getTorque_cal->CANStatus_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)getTorque_cal->CANStatus_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)getTorque_cal->CANStatus_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)getTorque_cal->CANStatus_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)getTorque_cal->CANStatus_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)getTorque_cal->CANStatus_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)getTorque_cal->CANStatus_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)getTorque_cal->CANStatus_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)getTorque_cal->CANStatus_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)getTorque_cal->CANStatus_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)getTorque_cal->CANStatus_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)getTorque_cal->CANStatus_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)getTorque_cal->CANStatus_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)getTorque_cal->CANStatus_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)getTorque_cal->CANStatus_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)getTorque_cal->CANStatus_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)getTorque_cal->CANStatus_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)getTorque_cal->CANStatus_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)getTorque_cal->CANStatus_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)getTorque_cal->CANStatus_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)getTorque_cal->CANStatus_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)getTorque_cal->CANStatus_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)getTorque_cal->CANStatus_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)getTorque_cal->CANStatus_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)getTorque_cal->CANStatus_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)getTorque_cal->CANStatus_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)getTorque_cal->CANStatus_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)getTorque_cal->CANStatus_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)getTorque_cal->CANStatus_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)getTorque_cal->CANStatus_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)getTorque_cal->CANStatus_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)getTorque_cal->CANStatus_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)getTorque_cal->CANStatus_P34_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &getTorque_DW.CANStatus_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &getTorque_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 34);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &getTorque_DW.CANStatus_IWORK[0]);
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

  /* Start for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant1' */
  getTorque_B.Constant1 = getTorque_cal->Constant1_Value;

  /* Start for Constant: '<Root>/Constant2' */
  getTorque_B.Constant2 = getTorque_cal->Constant2_Value;

  /* Start for Constant: '<Root>/Constant8' */
  getTorque_B.Constant8 = getTorque_cal->Constant8_Value;

  /* Start for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[5];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Delay: '<Root>/Delay One Step1' */
  getTorque_DW.DelayOneStep1_DSTATE =
    getTorque_cal->DelayOneStep1_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay One Step' */
  getTorque_DW.DelayOneStep_DSTATE =
    getTorque_cal->DelayOneStep_InitialCondition;

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S5>/CAN Read' */
  /* Level2 S-Function Block: '<S5>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for If: '<S5>/If' */
  getTorque_DW.If_ActiveSubsystem = -1;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write1' */
  /* Level2 S-Function Block: '<S5>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S9>/CAN Unpack' */

  /*-----------S-Function Block: <S9>/CAN Unpack -----------------*/

  /* SystemInitialize for Outport: '<S9>/Outport' */
  getTorque_B.sf_bytesfloats_c.position = getTorque_cal->Outport_Y0_c;

  /* SystemInitialize for Outport: '<S9>/Outport1' */
  getTorque_B.sf_bytesfloats_c.velocity = getTorque_cal->Outport1_Y0_e;

  /* SystemInitialize for Outport: '<S9>/Outport2' */
  getTorque_B.sf_bytesfloats_c.I_ff = getTorque_cal->Outport2_Y0_l;

  /* SystemInitialize for S-Function (scanunpack): '<S9>/CAN Unpack' incorporates:
   *  Outport: '<S9>/Outport3'
   */
  getTorque_B.CANUnpack_o4 = getTorque_cal->Outport3_Y0_n;

  /* SystemInitialize for S-Function (scanunpack): '<S9>/CAN Unpack' incorporates:
   *  Outport: '<S9>/Outport4'
   */
  getTorque_B.CANUnpack_o5 = getTorque_cal->Outport4_Y0_d;

  /* End of SystemInitialize for SubSystem: '<S5>/If Action Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Simulink Function3' */
  /* Start for S-Function (sg_IO602_IO691_read_s): '<S4>/CAN Read' */
  /* Level2 S-Function Block: '<S4>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for If: '<S4>/If' */
  getTorque_DW.If_ActiveSubsystem_j = -1;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S4>/CAN Write1' */
  /* Level2 S-Function Block: '<S4>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S6>/CAN Unpack' */

  /*-----------S-Function Block: <S6>/CAN Unpack -----------------*/

  /* SystemInitialize for Outport: '<S6>/Outport' */
  getTorque_B.sf_bytesfloats.position = getTorque_cal->Outport_Y0;

  /* SystemInitialize for Outport: '<S6>/Outport1' */
  getTorque_B.sf_bytesfloats.velocity = getTorque_cal->Outport1_Y0;

  /* SystemInitialize for Outport: '<S6>/Outport2' */
  getTorque_B.sf_bytesfloats.I_ff = getTorque_cal->Outport2_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S6>/CAN Unpack' incorporates:
   *  Outport: '<S6>/Outport3'
   */
  getTorque_B.CANUnpack_o4_n = getTorque_cal->Outport3_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S6>/CAN Unpack' incorporates:
   *  Outport: '<S6>/Outport4'
   */
  getTorque_B.CANUnpack_o5_i = getTorque_cal->Outport4_Y0;

  /* End of SystemInitialize for SubSystem: '<S4>/If Action Subsystem' */
  /* End of SystemInitialize for SubSystem: '<Root>/Simulink Function1' */
}

/* Model terminate function */
void getTorque_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<Root>/Simulink Function3' */
  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S5>/CAN Read' */
  /* Level2 S-Function Block: '<S5>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write1' */
  /* Level2 S-Function Block: '<S5>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Atomic SubSystem: '<Root>/Simulink Function1' */
  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S4>/CAN Read' */
  /* Level2 S-Function Block: '<S4>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S4>/CAN Write1' */
  /* Level2 S-Function Block: '<S4>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = getTorque_M->childSfunctions[5];
    sfcnTerminate(rts);
  }
}

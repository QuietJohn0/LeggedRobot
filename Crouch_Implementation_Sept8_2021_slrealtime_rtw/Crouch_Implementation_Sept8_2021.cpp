/*
 * Crouch_Implementation_Sept8_2021.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Crouch_Implementation_Sept8_2021".
 *
 * Model version              : 1.38
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Wed Sep  8 13:57:04 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Crouch_Implementation_Sept8_2021.h"
#include "Crouch_Implementation_Sept8_2021_private.h"

/* Named constants for Chart: '<Root>/Chart' */
const uint32_T Crouch_Impleme_IN_FinalShutdown = 3U;
const uint32_T Crouch_Implementa_IN_Deinitiate = 2U;
const uint32_T Crouch_Implementa_IN_ToPosition = 2U;
const int32_T Crouch_Implementatio_CALL_EVENT = -1;
const uint32_T Crouch_Implementatio_IN_Command = 1U;
const uint32_T Crouch_Implementation_IN_Crouch = 1U;
const uint32_T Crouch_Implementation_IN_Flight = 1U;
const uint32_T Crouch_Implementation_IN_Stance = 4U;
const uint32_T Crouch_Implementation_S_IN_Idle = 2U;
const uint32_T Crouch_Implementation_S_IN_Init = 4U;
const uint32_T Crouch_Implementation_S_IN_Jump = 2U;
const uint32_T Crouch_Implementation_S_IN_Zero = 6U;
const uint32_T Crouch_Implementation_Se_IN_Sit = 3U;
const uint32_T Crouch_Implementation__IN_Idle1 = 1U;
const uint32_T Crouch_Implementation__IN_Stand = 5U;
const uint32_T Crouch_Implementation__IN_Start = 5U;

/* Block signals (default storage) */
B_Crouch_Implementation_Sept8_2021_T Crouch_Implementation_Sept8_2021_B;

/* Block states (default storage) */
DW_Crouch_Implementation_Sept8_2021_T Crouch_Implementation_Sept8_2021_DW;

/* Real-time model */
RT_MODEL_Crouch_Implementation_Sept8_2021_T Crouch_Implementation_Sept8_2021_M_ =
  RT_MODEL_Crouch_Implementation_Sept8_2021_T();
RT_MODEL_Crouch_Implementation_Sept8_2021_T *const
  Crouch_Implementation_Sept8_2021_M = &Crouch_Implementation_Sept8_2021_M_;

/* Forward declaration for local functions */
static void Crouch_Implementation_S_dec2bin(real_T d, char_T s_data[], int32_T
  s_size[2]);

/* Forward declaration for local functions */
static real_T Crouch_Implementation_Sept_getT(real_T p, real_T Kp, real_T Kd,
  real_T Tff, real_T currP, real_T currV);
static void Crouch_Implementation_Se_mpower(const real_T a[4], real_T c[4]);
static void Crouch_Implementation_Sept_getF(real_T pos1, real_T pos2, real_T Tc1,
  real_T Tc2, real_T *calcF, real_T *calcFX);
static void Crouch_Implementation_getTorque(real_T pos1, real_T pos2, real_T
  currTime, real_T StartF, real_T *Torque1, real_T *Torque2, real_T *y);
static void Crouch_Implementation_Se_Stance(void);

/* Function for MATLAB Function: '<S4>/floats -> bytes' */
static void Crouch_Implementation_S_dec2bin(real_T d, char_T s_data[], int32_T
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

/*
 * Output and update for atomic system:
 *    '<S4>/floats -> bytes'
 *    '<S5>/floats -> bytes'
 */
void Crouch_Implementati_floatsbytes(real_T rtu_position, real_T rtu_velocity,
  real_T rtu_K_p, real_T rtu_K_d, real_T rtu_T_ff,
  B_floatsbytes_Crouch_Implemen_T *localB)
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

  Crouch_Implementation_S_dec2bin(std::floor((y - -95.5) * 65535.0 / 191.0), B,
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

  if (rtu_velocity < 45.0) {
    y = rtu_velocity;
  } else {
    y = 45.0;
  }

  if (!(y > -45.0)) {
    y = -45.0;
  }

  Crouch_Implementation_S_dec2bin(std::floor((y - -45.0) * 4095.0 / 90.0), B,
    c_size);
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

  Crouch_Implementation_S_dec2bin(std::floor(y * 4095.0 / 500.0), B, c_size);
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

  Crouch_Implementation_S_dec2bin(std::floor(y * 4095.0 / 5.0), B, c_size);
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

  Crouch_Implementation_S_dec2bin(std::floor((y - -18.0) * 4095.0 / 36.0), B,
    c_size);
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

/* Function for Chart: '<Root>/Chart' */
static real_T Crouch_Implementation_Sept_getT(real_T p, real_T Kp, real_T Kd,
  real_T Tff, real_T currP, real_T currV)
{
  return ((p - currP) * Kp + (0.0 - currV) * Kd) + Tff;
}

/* Function for Chart: '<Root>/Chart' */
static void Crouch_Implementation_Se_mpower(const real_T a[4], real_T c[4])
{
  real_T r;
  real_T t;
  if (std::abs(a[1]) > std::abs(a[0])) {
    r = a[0] / a[1];
    t = 1.0 / (r * a[3] - a[2]);
    c[0] = a[3] / a[1] * t;
    c[1] = -t;
    c[2] = -a[2] / a[1] * t;
    c[3] = r * t;
  } else {
    r = a[1] / a[0];
    t = 1.0 / (a[3] - r * a[2]);
    c[0] = a[3] / a[0] * t;
    c[1] = -r * t;
    c[2] = -a[2] / a[0] * t;
    c[3] = t;
  }
}

/* Function for Chart: '<Root>/Chart' */
static void Crouch_Implementation_Sept_getF(real_T pos1, real_T pos2, real_T Tc1,
  real_T Tc2, real_T *calcF, real_T *calcFX)
{
  real_T a[4];
  real_T tmp_5[4];
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;
  tmp = std::cos(pos1);
  tmp_0 = std::cos(pos1 + pos2);
  tmp_1 = std::cos(pos1 + pos2);
  tmp_2 = std::sin(pos1);
  tmp_3 = std::sin(pos1 + pos2);
  tmp_4 = std::sin(pos1 + pos2);
  tmp_5[0] = 0.14986 * tmp + 0.18796 * tmp_0;
  tmp_5[1] = 0.18796 * tmp_1;
  tmp_5[2] = -0.14986 * tmp_2 - 0.18796 * tmp_3;
  tmp_5[3] = -0.18796 * tmp_4;
  Crouch_Implementation_Se_mpower(tmp_5, a);
  *calcF = a[0] * Tc1;
  *calcF += a[2] * Tc2;
  *calcFX = *calcF;
  *calcF = a[1] * Tc1;
  *calcF += a[3] * Tc2;
}

/* Function for Chart: '<Root>/Chart' */
static void Crouch_Implementation_getTorque(real_T pos1, real_T pos2, real_T
  currTime, real_T StartF, real_T *Torque1, real_T *Torque2, real_T *y)
{
  real_T A[4];
  real_T tmp_4[4];
  real_T F[2];
  real_T a21;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  int32_T r1;
  int32_T r2;
  *y = std::sin(62.831853071795862 * currTime + std::asin(StartF / 350.0)) *
    350.0;
  if (*y < 0.0) {
    *y = 0.0;
  }

  F[0] = 0.0;
  F[1] = *y;
  a21 = std::cos(pos1);
  tmp = std::cos(pos1 + pos2);
  tmp_0 = std::cos(pos1 + pos2);
  tmp_1 = std::sin(pos1);
  tmp_2 = std::sin(pos1 + pos2);
  tmp_3 = std::sin(pos1 + pos2);
  tmp_4[0] = 0.14986 * a21 + 0.18796 * tmp;
  tmp_4[1] = 0.18796 * tmp_0;
  tmp_4[2] = -0.14986 * tmp_1 - 0.18796 * tmp_2;
  tmp_4[3] = -0.18796 * tmp_3;
  Crouch_Implementation_Se_mpower(tmp_4, A);
  if (std::abs(A[1]) > std::abs(A[0])) {
    r1 = 1;
    r2 = 0;
  } else {
    r1 = 0;
    r2 = 1;
  }

  a21 = A[r2] / A[r1];
  *Torque2 = (F[r2] - F[r1] * a21) / (A[r2 + 2] - A[r1 + 2] * a21);
  *Torque1 = (F[r1] - A[r1 + 2] * *Torque2) / A[r1];
}

/* Function for Chart: '<Root>/Chart' */
static void Crouch_Implementation_Se_Stance(void)
{
  real_T T1;
  real_T T2;
  real_T exitY;
  boolean_T sf_internal_predicateOutput;
  if (Crouch_Implementation_Sept8_2021_DW.hop == 1.0) {
    Crouch_Implementation_Sept8_2021_DW.pf = -0.7;
    Crouch_Implementation_Sept8_2021_DW.is_Stance = 0U;
    Crouch_Implementation_Sept8_2021_B.T1 = 0.0;
    Crouch_Implementation_Sept8_2021_B.T2 = 0.0;
    Crouch_Implementation_Sept8_2021_DW.hop++;
    Crouch_Implementation_Sept8_2021_DW.is_Command =
      Crouch_Implementation_Se_IN_Sit;
    Crouch_Implementation_Sept8_2021_B.Kp1 = 25.0;
    Crouch_Implementation_Sept8_2021_B.Kp2 = 25.0;
    Crouch_Implementation_Sept8_2021_B.Kd1 = 0.1;
    Crouch_Implementation_Sept8_2021_B.Kd2 = 0.1;
    Crouch_Implementation_Sept8_2021_DW.tstep = 3.0;
    Crouch_Implementation_Sept8_2021_DW.to =
      (((Crouch_Implementation_Sept8_2021_M->Timing.clockTick1+
         Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1* 4294967296.0)) *
       0.001);
    Crouch_Implementation_Sept8_2021_B.theta1 =
      Crouch_Implementation_Sept8_2021_B.Delay;
    Crouch_Implementation_Sept8_2021_DW.po1 =
      Crouch_Implementation_Sept8_2021_B.theta1;
    Crouch_Implementation_Sept8_2021_DW.slope1 =
      (Crouch_Implementation_Sept8_2021_DW.pf -
       Crouch_Implementation_Sept8_2021_DW.po1) /
      Crouch_Implementation_Sept8_2021_DW.tstep;
    Crouch_Implementation_Sept8_2021_B.theta2 =
      Crouch_Implementation_Sept8_2021_B.Delay1;
    Crouch_Implementation_Sept8_2021_DW.po2 =
      Crouch_Implementation_Sept8_2021_B.theta2;
    Crouch_Implementation_Sept8_2021_DW.slope2 =
      (Crouch_Implementation_Sept8_2021_DW.Th2Th1 *
       Crouch_Implementation_Sept8_2021_DW.pf -
       Crouch_Implementation_Sept8_2021_DW.po2) /
      Crouch_Implementation_Sept8_2021_DW.tstep;
  } else {
    sf_internal_predicateOutput =
      ((Crouch_Implementation_Sept8_2021_DW.temporalCounter_i1 >= 3) &&
       (((((Crouch_Implementation_Sept8_2021_M->Timing.clockTick1+
            Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1* 4294967296.0))
          * 0.001) - Crouch_Implementation_Sept8_2021_DW.time != 0.0) &&
        (Crouch_Implementation_Sept8_2021_B.exitY == 0.0) &&
        (Crouch_Implementation_Sept8_2021_DW.jumped == 1.0)));
    if (sf_internal_predicateOutput) {
      Crouch_Implementation_Sept8_2021_DW.pf = -0.35;
      Crouch_Implementation_Sept8_2021_DW.is_Stance = 0U;
      Crouch_Implementation_Sept8_2021_B.T1 = 0.0;
      Crouch_Implementation_Sept8_2021_B.T2 = 0.0;
      Crouch_Implementation_Sept8_2021_DW.hop++;
      Crouch_Implementation_Sept8_2021_DW.is_Command =
        Crouch_Implementation_IN_Flight;
      Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
      Crouch_Implementation_Sept8_2021_DW.Idle = 0.0;
      Crouch_Implementation_Sept8_2021_DW.is_Flight =
        Crouch_Implementa_IN_ToPosition;
      Crouch_Implementation_Sept8_2021_B.Kp1 = 22.75;
      Crouch_Implementation_Sept8_2021_B.Kp2 = 17.0;
      Crouch_Implementation_Sept8_2021_B.Kd1 = 0.95;
      Crouch_Implementation_Sept8_2021_B.Kd2 = 1.45;
      Crouch_Implementation_Sept8_2021_DW.tstep = 0.1;
      Crouch_Implementation_Sept8_2021_DW.to =
        (((Crouch_Implementation_Sept8_2021_M->Timing.clockTick1+
           Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1* 4294967296.0))
         * 0.001);
      Crouch_Implementation_Sept8_2021_B.theta1 =
        Crouch_Implementation_Sept8_2021_B.Delay;
      Crouch_Implementation_Sept8_2021_DW.po1 =
        Crouch_Implementation_Sept8_2021_B.theta1;
      Crouch_Implementation_Sept8_2021_DW.slope1 =
        (Crouch_Implementation_Sept8_2021_DW.pf -
         Crouch_Implementation_Sept8_2021_DW.po1) /
        Crouch_Implementation_Sept8_2021_DW.tstep;
      Crouch_Implementation_Sept8_2021_B.theta2 =
        Crouch_Implementation_Sept8_2021_B.Delay1;
      Crouch_Implementation_Sept8_2021_DW.po2 =
        Crouch_Implementation_Sept8_2021_B.theta2;
      Crouch_Implementation_Sept8_2021_DW.slope2 =
        (Crouch_Implementation_Sept8_2021_DW.Th2Th1 *
         Crouch_Implementation_Sept8_2021_DW.pf -
         Crouch_Implementation_Sept8_2021_DW.po2) /
        Crouch_Implementation_Sept8_2021_DW.tstep;
    } else if (Crouch_Implementation_Sept8_2021_DW.is_Stance ==
               Crouch_Implementation_IN_Crouch) {
      if (((Crouch_Implementation_Sept8_2021_B.theta1 >=
            Crouch_Implementation_Sept8_2021_DW.pf) &&
           (Crouch_Implementation_Sept8_2021_DW.slope1 > 0.0)) ||
          ((Crouch_Implementation_Sept8_2021_B.theta1 <=
            Crouch_Implementation_Sept8_2021_DW.pf) &&
           (Crouch_Implementation_Sept8_2021_DW.slope1 < 0.0))) {
        Crouch_Implementation_Sept8_2021_B.theta1 =
          Crouch_Implementation_Sept8_2021_DW.pf;
        Crouch_Implementation_Sept8_2021_B.theta2 =
          Crouch_Implementation_Sept8_2021_B.theta1 *
          Crouch_Implementation_Sept8_2021_DW.Th2Th1;
        Crouch_Implementation_Sept8_2021_DW.is_Stance =
          Crouch_Implementation_S_IN_Jump;
        Crouch_Implementation_Sept8_2021_DW.FStart =
          Crouch_Implementation_Sept8_2021_B.GRF_e;
        Crouch_Implementation_Sept8_2021_B.T1 =
          Crouch_Implementation_Sept8_2021_B.Tcalc1;
        Crouch_Implementation_Sept8_2021_B.T2 =
          Crouch_Implementation_Sept8_2021_B.Tcalc2;
        Crouch_Implementation_Sept8_2021_DW.time =
          (((Crouch_Implementation_Sept8_2021_M->Timing.clockTick1+
             Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1*
             4294967296.0)) * 0.001);
        Crouch_Implementation_Sept8_2021_B.Kp1 = 0.0;
        Crouch_Implementation_Sept8_2021_B.Kp2 = 0.0;
        Crouch_Implementation_Sept8_2021_B.Kd1 = 0.0;
        Crouch_Implementation_Sept8_2021_B.Kd2 = 0.0;
        Crouch_Implementation_Sept8_2021_B.exitY = 1.0;
        Crouch_Implementation_Sept8_2021_DW.jumped = 1.0;
      } else {
        Crouch_Implementation_Sept8_2021_B.theta1 =
          ((((Crouch_Implementation_Sept8_2021_M->Timing.clockTick1+
              Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1*
              4294967296.0)) * 0.001) - Crouch_Implementation_Sept8_2021_DW.to) *
          Crouch_Implementation_Sept8_2021_DW.slope1 +
          Crouch_Implementation_Sept8_2021_DW.po1;
        Crouch_Implementation_Sept8_2021_B.theta2 =
          ((((Crouch_Implementation_Sept8_2021_M->Timing.clockTick1+
              Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1*
              4294967296.0)) * 0.001) - Crouch_Implementation_Sept8_2021_DW.to) *
          Crouch_Implementation_Sept8_2021_DW.slope2 +
          Crouch_Implementation_Sept8_2021_DW.po2;
      }
    } else {
      /* case IN_Jump: */
      Crouch_Implementation_getTorque(Crouch_Implementation_Sept8_2021_B.Delay,
        Crouch_Implementation_Sept8_2021_B.Delay1,
        (((Crouch_Implementation_Sept8_2021_M->Timing.clockTick1+
           Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1* 4294967296.0))
         * 0.001) - Crouch_Implementation_Sept8_2021_DW.time,
        Crouch_Implementation_Sept8_2021_DW.FStart, &T1, &T2, &exitY);
      Crouch_Implementation_Sept8_2021_B.T1 = T1;
      Crouch_Implementation_Sept8_2021_B.T2 = T2;
      Crouch_Implementation_Sept8_2021_B.exitY = exitY;
    }
  }
}

/* Model step function */
void Crouch_Implementation_Sept8_2021_step(void)
{
  {
    real_T I_ff;
    real_T position;
    real_T velocity;
    real_T *lastU;
    int32_T s6_iter;
    boolean_T sf_internal_predicateOutput;

    /* S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */

    /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* Delay: '<Root>/Delay' */
    Crouch_Implementation_Sept8_2021_B.Delay =
      Crouch_Implementation_Sept8_2021_DW.Delay_DSTATE;

    /* Delay: '<Root>/Delay1' */
    Crouch_Implementation_Sept8_2021_B.Delay1 =
      Crouch_Implementation_Sept8_2021_DW.Delay1_DSTATE;

    /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
     *  WhileIterator: '<S6>/While Iterator'
     */
    s6_iter = 1;
    do {
      Crouch_Implementation_Sept8_2021_B.WhileIterator = s6_iter;

      /* Level2 S-Function Block: '<S6>/CAN Read' (sg_IO602_IO691_read_s) */
      {
        SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[2];
        sfcnOutputs(rts,0);
      }

      {
        /* S-Function (scanunpack): '<S10>/CAN Unpack' */
        uint8_T msgReceived = 0;
        if ((6 == Crouch_Implementation_Sept8_2021_B.CANRead_o2.Length) &&
            (Crouch_Implementation_Sept8_2021_B.CANRead_o2.ID != INVALID_CAN_ID)
            ) {
          if ((2 == Crouch_Implementation_Sept8_2021_B.CANRead_o2.ID) && (0U ==
               Crouch_Implementation_Sept8_2021_B.CANRead_o2.Extended) ) {
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[2]);
                      tempValue = tempValue | (uint16_T)((uint16_T)
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[1]) <<
                        8);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o1 = result;
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[4])
                        & (uint16_T)(0xF0U)) >> 4);
                      tempValue = tempValue | (uint16_T)((uint16_T)
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[3]) <<
                        4);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o2 = result;
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[5]);
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[4])
                        & (uint16_T)(0xFU)) << 8);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o3 = result;
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[0]);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o4 = result;
                }
              }
            }
          }
        }

        /* Status port */
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o5 = msgReceived;
      }

      Crouch_Implementation_Sept8_2021_B.position =
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o1;
      Crouch_Implementation_Sept8_2021_B.velocity =
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o2;
      Crouch_Implementation_Sept8_2021_B.I_ff =
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o3;
      I_ff = Crouch_Implementation_Sept8_2021_B.I_ff;
      velocity = Crouch_Implementation_Sept8_2021_B.velocity;
      position = Crouch_Implementation_Sept8_2021_B.position;
      Crouch_Implementation_Sept8_2021_B.I_ff = I_ff;
      Crouch_Implementation_Sept8_2021_B.velocity = velocity;
      Crouch_Implementation_Sept8_2021_B.position = position;
      Crouch_Implementation_Sept8_2021_B.position =
        Crouch_Implementation_Sept8_2021_B.position * 191.0 / 65535.0 + -95.5;
      Crouch_Implementation_Sept8_2021_B.velocity =
        Crouch_Implementation_Sept8_2021_B.velocity * 90.0 / 4095.0 + -45.0;
      Crouch_Implementation_Sept8_2021_B.I_ff =
        Crouch_Implementation_Sept8_2021_B.I_ff * 80.0 / 4095.0 + -40.0;

      {
        /* S-Function (scanunpack): '<S9>/CAN Unpack' */
        uint8_T msgReceived = 0;
        if ((6 == Crouch_Implementation_Sept8_2021_B.CANRead_o2.Length) &&
            (Crouch_Implementation_Sept8_2021_B.CANRead_o2.ID != INVALID_CAN_ID)
            ) {
          if ((1 == Crouch_Implementation_Sept8_2021_B.CANRead_o2.ID) && (0U ==
               Crouch_Implementation_Sept8_2021_B.CANRead_o2.Extended) ) {
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[2]);
                      tempValue = tempValue | (uint16_T)((uint16_T)
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[1]) <<
                        8);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o1_f = result;
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[4])
                        & (uint16_T)(0xF0U)) >> 4);
                      tempValue = tempValue | (uint16_T)((uint16_T)
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[3]) <<
                        4);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o2_l = result;
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[5]);
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[4])
                        & (uint16_T)(0xFU)) << 8);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o3_k = result;
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
                        (Crouch_Implementation_Sept8_2021_B.CANRead_o2.Data[0]);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real64_T) (unpackedValue);
                }

                {
                  real64_T result = (real64_T) outValue;
                  Crouch_Implementation_Sept8_2021_B.CANUnpack_o4_i = result;
                }
              }
            }
          }
        }

        /* Status port */
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o5_p = msgReceived;
      }

      Crouch_Implementation_Sept8_2021_B.position_j =
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o1_f;
      Crouch_Implementation_Sept8_2021_B.velocity_h =
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o2_l;
      Crouch_Implementation_Sept8_2021_B.I_ff_o =
        Crouch_Implementation_Sept8_2021_B.CANUnpack_o3_k;
      I_ff = Crouch_Implementation_Sept8_2021_B.I_ff_o;
      velocity = Crouch_Implementation_Sept8_2021_B.velocity_h;
      position = Crouch_Implementation_Sept8_2021_B.position_j;
      Crouch_Implementation_Sept8_2021_B.I_ff_o = I_ff;
      Crouch_Implementation_Sept8_2021_B.velocity_h = velocity;
      Crouch_Implementation_Sept8_2021_B.position_j = position;
      Crouch_Implementation_Sept8_2021_B.position_j =
        Crouch_Implementation_Sept8_2021_B.position_j * 191.0 / 65535.0 + -95.5;
      Crouch_Implementation_Sept8_2021_B.velocity_h =
        Crouch_Implementation_Sept8_2021_B.velocity_h * 90.0 / 4095.0 + -45.0;
      Crouch_Implementation_Sept8_2021_B.I_ff_o =
        Crouch_Implementation_Sept8_2021_B.I_ff_o * 80.0 / 4095.0 + -40.0;
      Crouch_Implementation_Sept8_2021_B.Gain_m =
        Crouch_Implementation_Sept8_cal->Gain_Gain *
        Crouch_Implementation_Sept8_2021_B.position;
      s6_iter++;
    } while (Crouch_Implementation_Sept8_2021_B.CANRead_o1);

    /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */

    /* SignalConversion generated from: '<S3>/ SFunction ' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function1'
     */
    Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI[0] =
      Crouch_Implementation_Sept8_2021_B.position_j;
    Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI[1] =
      Crouch_Implementation_Sept8_2021_B.Gain_m;

    /* MATLAB Function: '<Root>/MATLAB Function1' */
    Crouch_Implementation_Sept8_2021_B.danger = 0.0;
    if ((0 <
         ((Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI[0]
           > 2.0) +
          (Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI[0]
           < -2.0)) -
         (Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI[0] <=
          -95.5)) || (0 <
                      ((Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI
                        [1] > 2.0) +
                       (Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI
                        [1] < -2.0)) -
                      (Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctionI
                       [1] <= -95.5))) {
      Crouch_Implementation_Sept8_2021_B.danger = 1.0;
    }

    /* Constant: '<Root>/Constant' */
    Crouch_Implementation_Sept8_2021_B.Constant =
      Crouch_Implementation_Sept8_cal->Constant_Value;

    /* Chart: '<Root>/Chart' */
    if (Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 < 8191U) {
      Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 =
        static_cast<uint16_T>
        (Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 + 1U);
    }

    Crouch_Implementation_Sept8_2021_DW.sfEvent =
      Crouch_Implementatio_CALL_EVENT;
    if (Crouch_Implementation_Sept8_2021_DW.temporalCounter_i1 < 3U) {
      Crouch_Implementation_Sept8_2021_DW.temporalCounter_i1 =
        static_cast<uint8_T>
        (Crouch_Implementation_Sept8_2021_DW.temporalCounter_i1 + 1U);
    }

    if (Crouch_Implementation_Sept8_2021_DW.is_active_c8_Crouch_Implementat ==
        0U) {
      Crouch_Implementation_Sept8_2021_DW.is_active_c8_Crouch_Implementat = 1U;
      Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
        Crouch_Implementation__IN_Start;
      Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
    } else {
      switch
        (Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep) {
       case Crouch_Implementatio_IN_Command:
        Crouch_Implementation_Sept8_2021_B.c = 3.0;
        if ((Crouch_Implementation_Sept8_2021_DW.done == 1.0) ||
            (Crouch_Implementation_Sept8_2021_B.Constant == 4.0) ||
            (Crouch_Implementation_Sept8_2021_B.danger == 1.0)) {
          if (Crouch_Implementation_Sept8_2021_DW.is_Command ==
              Crouch_Implementation_IN_Stance) {
            Crouch_Implementation_Sept8_2021_DW.is_Stance = 0U;
            Crouch_Implementation_Sept8_2021_B.T1 = 0.0;
            Crouch_Implementation_Sept8_2021_B.T2 = 0.0;
            Crouch_Implementation_Sept8_2021_DW.hop++;
            Crouch_Implementation_Sept8_2021_DW.is_Command = 0U;
          } else {
            Crouch_Implementation_Sept8_2021_DW.is_Flight = 0U;
            Crouch_Implementation_Sept8_2021_DW.is_Command = 0U;
          }

          Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
            Crouch_Impleme_IN_FinalShutdown;
          Crouch_Implementation_Sept8_2021_B.Kp1 = 0.0;
          Crouch_Implementation_Sept8_2021_B.Kp2 = 0.0;
          Crouch_Implementation_Sept8_2021_B.theta1 = 0.0;
          Crouch_Implementation_Sept8_2021_B.theta2 = 0.0;
          Crouch_Implementation_Sept8_2021_B.T1 = 0.0;
          Crouch_Implementation_Sept8_2021_B.T2 = 0.0;
        } else {
          Crouch_Implementation_Sept8_2021_B.Tcalc1 =
            Crouch_Implementation_Sept_getT
            (Crouch_Implementation_Sept8_2021_B.theta1,
             Crouch_Implementation_Sept8_2021_B.Kp1,
             Crouch_Implementation_Sept8_2021_B.Kd1,
             Crouch_Implementation_Sept8_2021_B.T1,
             Crouch_Implementation_Sept8_2021_B.Delay,
             Crouch_Implementation_Sept8_2021_B.velocity_h);
          Crouch_Implementation_Sept8_2021_B.Tcalc2 =
            Crouch_Implementation_Sept_getT
            (Crouch_Implementation_Sept8_2021_B.theta2,
             Crouch_Implementation_Sept8_2021_B.Kp2,
             Crouch_Implementation_Sept8_2021_B.Kd2,
             Crouch_Implementation_Sept8_2021_B.T2,
             Crouch_Implementation_Sept8_2021_B.Delay1,
             Crouch_Implementation_Sept8_2021_B.velocity);
          Crouch_Implementation_Sept_getF
            (Crouch_Implementation_Sept8_2021_B.Delay,
             Crouch_Implementation_Sept8_2021_B.Delay1,
             Crouch_Implementation_Sept8_2021_B.Tcalc1,
             Crouch_Implementation_Sept8_2021_B.Tcalc2, &I_ff, &velocity);
          Crouch_Implementation_Sept8_2021_B.GRF_e = I_ff;
          Crouch_Implementation_Sept8_2021_B.calcForceX = velocity;
          switch (Crouch_Implementation_Sept8_2021_DW.is_Command) {
           case Crouch_Implementation_IN_Flight:
            sf_internal_predicateOutput =
              ((Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 >= 5000U)
               && (Crouch_Implementation_Sept8_2021_DW.Idle == 1.0));
            if (sf_internal_predicateOutput) {
              Crouch_Implementation_Sept8_2021_DW.is_Flight = 0U;
              Crouch_Implementation_Sept8_2021_DW.is_Command =
                Crouch_Implementation_IN_Stance;
              Crouch_Implementation_Sept8_2021_DW.temporalCounter_i1 = 0U;
              Crouch_Implementation_Sept8_2021_DW.jumped = 0.0;
              Crouch_Implementation_Sept8_2021_DW.pf = -0.7;
              Crouch_Implementation_Sept8_2021_DW.is_Stance =
                Crouch_Implementation_IN_Crouch;
              Crouch_Implementation_Sept8_2021_DW.to =
                Crouch_Implementation_Sept8_2021_M->Timing.t[1];
              Crouch_Implementation_Sept8_2021_DW.tstep = 3.0;
              Crouch_Implementation_Sept8_2021_B.theta1 =
                Crouch_Implementation_Sept8_2021_B.Delay;
              Crouch_Implementation_Sept8_2021_DW.po1 =
                Crouch_Implementation_Sept8_2021_B.theta1;
              Crouch_Implementation_Sept8_2021_DW.slope1 =
                (Crouch_Implementation_Sept8_2021_DW.pf -
                 Crouch_Implementation_Sept8_2021_DW.po1) /
                Crouch_Implementation_Sept8_2021_DW.tstep;
              Crouch_Implementation_Sept8_2021_B.theta2 =
                Crouch_Implementation_Sept8_2021_B.Delay1;
              Crouch_Implementation_Sept8_2021_DW.po2 =
                Crouch_Implementation_Sept8_2021_B.theta2;
              Crouch_Implementation_Sept8_2021_DW.slope2 =
                (Crouch_Implementation_Sept8_2021_DW.Th2Th1 *
                 Crouch_Implementation_Sept8_2021_DW.pf -
                 Crouch_Implementation_Sept8_2021_DW.po2) /
                Crouch_Implementation_Sept8_2021_DW.tstep;
            } else if (Crouch_Implementation_Sept8_2021_DW.is_Flight ==
                       Crouch_Implementation__IN_Idle1) {
              if (Crouch_Implementation_Sept8_2021_B.GRF_e > 0.0) {
                Crouch_Implementation_Sept8_2021_DW.Idle = 1.0;
                Crouch_Implementation_Sept8_2021_DW.is_Flight =
                  Crouch_Implementation__IN_Idle1;
              }

              /* case IN_ToPosition: */
            } else if (((Crouch_Implementation_Sept8_2021_B.theta1 >=
                         Crouch_Implementation_Sept8_2021_DW.pf) &&
                        (Crouch_Implementation_Sept8_2021_DW.slope1 > 0.0)) ||
                       ((Crouch_Implementation_Sept8_2021_B.theta1 <=
                         Crouch_Implementation_Sept8_2021_DW.pf) &&
                        (Crouch_Implementation_Sept8_2021_DW.slope1 < 0.0))) {
              Crouch_Implementation_Sept8_2021_DW.is_Flight =
                Crouch_Implementation__IN_Idle1;
            } else {
              Crouch_Implementation_Sept8_2021_B.theta1 =
                (Crouch_Implementation_Sept8_2021_M->Timing.t[1] -
                 Crouch_Implementation_Sept8_2021_DW.to) *
                Crouch_Implementation_Sept8_2021_DW.slope1 +
                Crouch_Implementation_Sept8_2021_DW.po1;
              Crouch_Implementation_Sept8_2021_B.theta2 =
                (Crouch_Implementation_Sept8_2021_M->Timing.t[1] -
                 Crouch_Implementation_Sept8_2021_DW.to) *
                Crouch_Implementation_Sept8_2021_DW.slope2 +
                Crouch_Implementation_Sept8_2021_DW.po2;
            }
            break;

           case Crouch_Implementation_S_IN_Idle:
            if (Crouch_Implementation_Sept8_2021_B.Constant == 3.0) {
              Crouch_Implementation_Sept8_2021_DW.hop = 0.0;
              Crouch_Implementation_Sept8_2021_DW.is_Command =
                Crouch_Implementation_IN_Stance;
              Crouch_Implementation_Sept8_2021_DW.temporalCounter_i1 = 0U;
              Crouch_Implementation_Sept8_2021_DW.jumped = 0.0;
              Crouch_Implementation_Sept8_2021_DW.pf = -0.7;
              Crouch_Implementation_Sept8_2021_DW.is_Stance =
                Crouch_Implementation_IN_Crouch;
              Crouch_Implementation_Sept8_2021_DW.to =
                Crouch_Implementation_Sept8_2021_M->Timing.t[1];
              Crouch_Implementation_Sept8_2021_DW.tstep = 3.0;
              Crouch_Implementation_Sept8_2021_B.theta1 =
                Crouch_Implementation_Sept8_2021_B.Delay;
              Crouch_Implementation_Sept8_2021_DW.po1 =
                Crouch_Implementation_Sept8_2021_B.theta1;
              Crouch_Implementation_Sept8_2021_DW.slope1 =
                (Crouch_Implementation_Sept8_2021_DW.pf -
                 Crouch_Implementation_Sept8_2021_DW.po1) /
                Crouch_Implementation_Sept8_2021_DW.tstep;
              Crouch_Implementation_Sept8_2021_B.theta2 =
                Crouch_Implementation_Sept8_2021_B.Delay1;
              Crouch_Implementation_Sept8_2021_DW.po2 =
                Crouch_Implementation_Sept8_2021_B.theta2;
              Crouch_Implementation_Sept8_2021_DW.slope2 =
                (Crouch_Implementation_Sept8_2021_DW.Th2Th1 *
                 Crouch_Implementation_Sept8_2021_DW.pf -
                 Crouch_Implementation_Sept8_2021_DW.po2) /
                Crouch_Implementation_Sept8_2021_DW.tstep;
            }
            break;

           case Crouch_Implementation_Se_IN_Sit:
            if (((Crouch_Implementation_Sept8_2021_B.theta1 >=
                  Crouch_Implementation_Sept8_2021_DW.pf) &&
                 (Crouch_Implementation_Sept8_2021_DW.slope1 > 0.0)) ||
                ((Crouch_Implementation_Sept8_2021_B.theta1 <=
                  Crouch_Implementation_Sept8_2021_DW.pf) &&
                 (Crouch_Implementation_Sept8_2021_DW.slope1 < 0.0))) {
              Crouch_Implementation_Sept8_2021_DW.done = 1.0;
              Crouch_Implementation_Sept8_2021_DW.pf = -0.35;
              Crouch_Implementation_Sept8_2021_DW.is_Command =
                Crouch_Implementation__IN_Stand;
              Crouch_Implementation_Sept8_2021_DW.to =
                Crouch_Implementation_Sept8_2021_M->Timing.t[1];
              Crouch_Implementation_Sept8_2021_DW.tstep = 3.0;
              Crouch_Implementation_Sept8_2021_B.theta1 =
                Crouch_Implementation_Sept8_2021_B.Delay;
              Crouch_Implementation_Sept8_2021_DW.po1 =
                Crouch_Implementation_Sept8_2021_B.theta1;
              Crouch_Implementation_Sept8_2021_DW.slope1 =
                (Crouch_Implementation_Sept8_2021_DW.pf -
                 Crouch_Implementation_Sept8_2021_DW.po1) /
                Crouch_Implementation_Sept8_2021_DW.tstep;
              Crouch_Implementation_Sept8_2021_B.theta2 =
                Crouch_Implementation_Sept8_2021_B.Delay1;
              Crouch_Implementation_Sept8_2021_DW.po2 =
                Crouch_Implementation_Sept8_2021_B.theta2;
              Crouch_Implementation_Sept8_2021_DW.slope2 =
                (Crouch_Implementation_Sept8_2021_DW.Th2Th1 *
                 Crouch_Implementation_Sept8_2021_DW.pf -
                 Crouch_Implementation_Sept8_2021_DW.po2) /
                Crouch_Implementation_Sept8_2021_DW.tstep;
            } else {
              Crouch_Implementation_Sept8_2021_B.theta1 =
                (Crouch_Implementation_Sept8_2021_M->Timing.t[1] -
                 Crouch_Implementation_Sept8_2021_DW.to) *
                Crouch_Implementation_Sept8_2021_DW.slope1 +
                Crouch_Implementation_Sept8_2021_DW.po1;
              Crouch_Implementation_Sept8_2021_B.theta2 =
                (Crouch_Implementation_Sept8_2021_M->Timing.t[1] -
                 Crouch_Implementation_Sept8_2021_DW.to) *
                Crouch_Implementation_Sept8_2021_DW.slope2 +
                Crouch_Implementation_Sept8_2021_DW.po2;
            }
            break;

           case Crouch_Implementation_IN_Stance:
            Crouch_Implementation_Se_Stance();
            break;

           default:
            /* case IN_Stand: */
            if (((Crouch_Implementation_Sept8_2021_B.theta1 >=
                  Crouch_Implementation_Sept8_2021_DW.pf) &&
                 (Crouch_Implementation_Sept8_2021_DW.slope1 > 0.0)) ||
                ((Crouch_Implementation_Sept8_2021_B.theta1 <=
                  Crouch_Implementation_Sept8_2021_DW.pf) &&
                 (Crouch_Implementation_Sept8_2021_DW.slope1 < 0.0))) {
              Crouch_Implementation_Sept8_2021_B.theta1 =
                Crouch_Implementation_Sept8_2021_DW.pf;
              Crouch_Implementation_Sept8_2021_B.theta2 =
                Crouch_Implementation_Sept8_2021_B.theta1 *
                Crouch_Implementation_Sept8_2021_DW.Th2Th1;
              Crouch_Implementation_Sept8_2021_DW.is_Command =
                Crouch_Implementation_S_IN_Idle;
            } else {
              Crouch_Implementation_Sept8_2021_B.theta1 =
                (Crouch_Implementation_Sept8_2021_M->Timing.t[1] -
                 Crouch_Implementation_Sept8_2021_DW.to) *
                Crouch_Implementation_Sept8_2021_DW.slope1 +
                Crouch_Implementation_Sept8_2021_DW.po1;
              Crouch_Implementation_Sept8_2021_B.theta2 =
                (Crouch_Implementation_Sept8_2021_M->Timing.t[1] -
                 Crouch_Implementation_Sept8_2021_DW.to) *
                Crouch_Implementation_Sept8_2021_DW.slope2 +
                Crouch_Implementation_Sept8_2021_DW.po2;
            }
            break;
          }
        }
        break;

       case Crouch_Implementa_IN_Deinitiate:
        Crouch_Implementation_Sept8_2021_B.c = 4.0;
        if (Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 >= 3000U) {
          Crouch_Implementation_Sept8_2021_B.stop = 1.0;
          Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
            Crouch_Implementa_IN_Deinitiate;
          Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
          Crouch_Implementation_Sept8_2021_B.c = 4.0;
        }
        break;

       case Crouch_Impleme_IN_FinalShutdown:
        Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
          Crouch_Implementa_IN_Deinitiate;
        Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
        Crouch_Implementation_Sept8_2021_B.c = 4.0;
        break;

       case Crouch_Implementation_S_IN_Init:
        Crouch_Implementation_Sept8_2021_B.c = 2.0;
        if (Crouch_Implementation_Sept8_2021_B.Constant == 2.0) {
          Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
            Crouch_Implementatio_IN_Command;
          Crouch_Implementation_Sept8_2021_B.c = 3.0;
          Crouch_Implementation_Sept8_2021_DW.pf = -0.35;
          Crouch_Implementation_Sept8_2021_DW.is_Command =
            Crouch_Implementation__IN_Stand;
          Crouch_Implementation_Sept8_2021_DW.to =
            Crouch_Implementation_Sept8_2021_M->Timing.t[1];
          Crouch_Implementation_Sept8_2021_DW.tstep = 3.0;
          Crouch_Implementation_Sept8_2021_B.theta1 =
            Crouch_Implementation_Sept8_2021_B.Delay;
          Crouch_Implementation_Sept8_2021_DW.po1 =
            Crouch_Implementation_Sept8_2021_B.theta1;
          Crouch_Implementation_Sept8_2021_DW.slope1 =
            (Crouch_Implementation_Sept8_2021_DW.pf -
             Crouch_Implementation_Sept8_2021_DW.po1) /
            Crouch_Implementation_Sept8_2021_DW.tstep;
          Crouch_Implementation_Sept8_2021_B.theta2 =
            Crouch_Implementation_Sept8_2021_B.Delay1;
          Crouch_Implementation_Sept8_2021_DW.po2 =
            Crouch_Implementation_Sept8_2021_B.theta2;
          Crouch_Implementation_Sept8_2021_DW.slope2 =
            (Crouch_Implementation_Sept8_2021_DW.Th2Th1 *
             Crouch_Implementation_Sept8_2021_DW.pf -
             Crouch_Implementation_Sept8_2021_DW.po2) /
            Crouch_Implementation_Sept8_2021_DW.tstep;
        } else if ((Crouch_Implementation_Sept8_2021_B.Constant == 4.0) ||
                   (Crouch_Implementation_Sept8_2021_B.danger == 1.0)) {
          Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
            Crouch_Impleme_IN_FinalShutdown;
          Crouch_Implementation_Sept8_2021_B.Kp1 = 0.0;
          Crouch_Implementation_Sept8_2021_B.Kp2 = 0.0;
          Crouch_Implementation_Sept8_2021_B.theta1 = 0.0;
          Crouch_Implementation_Sept8_2021_B.theta2 = 0.0;
          Crouch_Implementation_Sept8_2021_B.T1 = 0.0;
          Crouch_Implementation_Sept8_2021_B.T2 = 0.0;
        }
        break;

       case Crouch_Implementation__IN_Start:
        if (Crouch_Implementation_Sept8_2021_B.Constant == 0.0) {
          Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
            Crouch_Implementation_S_IN_Zero;
          Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
          Crouch_Implementation_Sept8_2021_B.c = 1.0;
        } else if (Crouch_Implementation_Sept8_2021_B.Constant == 1.0) {
          Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
            Crouch_Implementation_S_IN_Init;
          Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
          Crouch_Implementation_Sept8_2021_B.c = 2.0;
        }
        break;

       default:
        /* case IN_Zero: */
        Crouch_Implementation_Sept8_2021_B.c = 1.0;
        if (Crouch_Implementation_Sept8_2021_B.Constant == 1.0) {
          Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep =
            Crouch_Implementation_S_IN_Init;
          Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
          Crouch_Implementation_Sept8_2021_B.c = 2.0;
        }
        break;
      }
    }

    /* End of Chart: '<Root>/Chart' */
    /* Gain: '<Root>/Gain' */
    Crouch_Implementation_Sept8_2021_B.Gain =
      Crouch_Implementation_Sept8_cal->Gain_Gain_j *
      Crouch_Implementation_Sept8_2021_B.theta2;

    /* Constant: '<Root>/Constant8' */
    Crouch_Implementation_Sept8_2021_B.Constant8 =
      Crouch_Implementation_Sept8_cal->Constant8_Value;

    /* Outputs for Atomic SubSystem: '<Root>/Simulink Function1' */
    /* MATLAB Function: '<S4>/floats -> bytes' */
    Crouch_Implementati_floatsbytes(Crouch_Implementation_Sept8_2021_B.Gain,
      Crouch_Implementation_Sept8_2021_B.Constant8,
      Crouch_Implementation_Sept8_2021_B.Kp2,
      Crouch_Implementation_Sept8_2021_B.Kd2,
      Crouch_Implementation_Sept8_2021_B.T2,
      &Crouch_Implementation_Sept8_2021_B.sf_floatsbytes);

    /* MultiPortSwitch: '<S4>/Multiport Switch' */
    switch (static_cast<int32_T>(Crouch_Implementation_Sept8_2021_B.c)) {
     case 1:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant'
       */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch_f[s6_iter] =
          Crouch_Implementation_Sept8_cal->Constant_Value_l[s6_iter];
      }
      break;

     case 2:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant1'
       */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch_f[s6_iter] =
          Crouch_Implementation_Sept8_cal->Constant1_Value[s6_iter];
      }
      break;

     case 3:
      /* MultiPortSwitch: '<S4>/Multiport Switch' */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch_f[s6_iter] =
          Crouch_Implementation_Sept8_2021_B.sf_floatsbytes.b[s6_iter];
      }
      break;

     default:
      /* MultiPortSwitch: '<S4>/Multiport Switch' incorporates:
       *  Constant: '<S4>/Constant2'
       */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch_f[s6_iter] =
          Crouch_Implementation_Sept8_cal->Constant2_Value_g[s6_iter];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S4>/Multiport Switch' */

    /* S-Function (slrealtimebytepacking): '<S4>/Byte Packing' */

    /* Byte Packing: <S4>/Byte Packing */
    (void)memcpy((uint8_T*)&Crouch_Implementation_Sept8_2021_B.BytePacking_o[0]
                 + 0, (uint8_T*)
                 &Crouch_Implementation_Sept8_2021_B.MultiportSwitch_f[0], 8);

    /* S-Function (scanpack): '<S4>/CAN Pack1' */
    /* S-Function (scanpack): '<S4>/CAN Pack1' */
    Crouch_Implementation_Sept8_2021_B.CANmsg2.ID = 2U;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Length = 8U;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Extended = 0U;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Remote = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[0] = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[1] = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[2] = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[3] = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[4] = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[5] = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[6] = 0;
    Crouch_Implementation_Sept8_2021_B.CANmsg2.Data[7] = 0;

    {
      (void) std::memcpy((Crouch_Implementation_Sept8_2021_B.CANmsg2.Data),
                         &Crouch_Implementation_Sept8_2021_B.BytePacking_o[0],
                         8 * sizeof(uint8_T));
    }

    /* S-Function (sg_IO602_IO691_write_s): '<S4>/CAN Write1' */

    /* Level2 S-Function Block: '<S4>/CAN Write1' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<Root>/Constant2' */
    Crouch_Implementation_Sept8_2021_B.Constant2 =
      Crouch_Implementation_Sept8_cal->Constant2_Value;

    /* Outputs for Atomic SubSystem: '<Root>/Simulink Function3' */
    /* MATLAB Function: '<S5>/floats -> bytes' */
    Crouch_Implementati_floatsbytes(Crouch_Implementation_Sept8_2021_B.theta1,
      Crouch_Implementation_Sept8_2021_B.Constant2,
      Crouch_Implementation_Sept8_2021_B.Kp1,
      Crouch_Implementation_Sept8_2021_B.Kd1,
      Crouch_Implementation_Sept8_2021_B.T1,
      &Crouch_Implementation_Sept8_2021_B.sf_floatsbytes_o);

    /* MultiPortSwitch: '<S5>/Multiport Switch' */
    switch (static_cast<int32_T>(Crouch_Implementation_Sept8_2021_B.c)) {
     case 1:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant'
       */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch[s6_iter] =
          Crouch_Implementation_Sept8_cal->Constant_Value_i[s6_iter];
      }
      break;

     case 2:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant1'
       */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch[s6_iter] =
          Crouch_Implementation_Sept8_cal->Constant1_Value_e[s6_iter];
      }
      break;

     case 3:
      /* MultiPortSwitch: '<S5>/Multiport Switch' */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch[s6_iter] =
          Crouch_Implementation_Sept8_2021_B.sf_floatsbytes_o.b[s6_iter];
      }
      break;

     default:
      /* MultiPortSwitch: '<S5>/Multiport Switch' incorporates:
       *  Constant: '<S5>/Constant2'
       */
      for (s6_iter = 0; s6_iter < 8; s6_iter++) {
        Crouch_Implementation_Sept8_2021_B.MultiportSwitch[s6_iter] =
          Crouch_Implementation_Sept8_cal->Constant2_Value_k[s6_iter];
      }
      break;
    }

    /* End of MultiPortSwitch: '<S5>/Multiport Switch' */

    /* S-Function (slrealtimebytepacking): '<S5>/Byte Packing' */

    /* Byte Packing: <S5>/Byte Packing */
    (void)memcpy((uint8_T*)&Crouch_Implementation_Sept8_2021_B.BytePacking[0] +
                 0, (uint8_T*)
                 &Crouch_Implementation_Sept8_2021_B.MultiportSwitch[0], 8);

    /* S-Function (scanpack): '<S5>/CAN Pack1' */
    /* S-Function (scanpack): '<S5>/CAN Pack1' */
    Crouch_Implementation_Sept8_2021_B.CANPack1.ID = 1U;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Length = 8U;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Extended = 0U;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Remote = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[0] = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[1] = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[2] = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[3] = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[4] = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[5] = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[6] = 0;
    Crouch_Implementation_Sept8_2021_B.CANPack1.Data[7] = 0;

    {
      (void) std::memcpy((Crouch_Implementation_Sept8_2021_B.CANPack1.Data),
                         &Crouch_Implementation_Sept8_2021_B.BytePacking[0],
                         8 * sizeof(uint8_T));
    }

    /* S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write1' */

    /* Level2 S-Function Block: '<S5>/CAN Write1' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* Stop: '<Root>/Stop Simulation' */
    if (Crouch_Implementation_Sept8_2021_B.stop != 0.0) {
      rtmSetStopRequested(Crouch_Implementation_Sept8_2021_M, 1);
    }

    /* End of Stop: '<Root>/Stop Simulation' */
    /* Derivative: '<Root>/Current1Derivative' */
    if ((Crouch_Implementation_Sept8_2021_DW.TimeStampA >=
         Crouch_Implementation_Sept8_2021_M->Timing.t[0]) &&
        (Crouch_Implementation_Sept8_2021_DW.TimeStampB >=
         Crouch_Implementation_Sept8_2021_M->Timing.t[0])) {
      /* Derivative: '<Root>/Current1Derivative' */
      Crouch_Implementation_Sept8_2021_B.Current1Derivative = 0.0;
    } else {
      I_ff = Crouch_Implementation_Sept8_2021_DW.TimeStampA;
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeA;
      if (Crouch_Implementation_Sept8_2021_DW.TimeStampA <
          Crouch_Implementation_Sept8_2021_DW.TimeStampB) {
        if (Crouch_Implementation_Sept8_2021_DW.TimeStampB <
            Crouch_Implementation_Sept8_2021_M->Timing.t[0]) {
          I_ff = Crouch_Implementation_Sept8_2021_DW.TimeStampB;
          lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB;
        }
      } else if (Crouch_Implementation_Sept8_2021_DW.TimeStampA >=
                 Crouch_Implementation_Sept8_2021_M->Timing.t[0]) {
        I_ff = Crouch_Implementation_Sept8_2021_DW.TimeStampB;
        lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB;
      }

      I_ff = Crouch_Implementation_Sept8_2021_M->Timing.t[0] - I_ff;

      /* Derivative: '<Root>/Current1Derivative' */
      Crouch_Implementation_Sept8_2021_B.Current1Derivative =
        (Crouch_Implementation_Sept8_2021_B.I_ff_o - *lastU) / I_ff;
    }

    /* End of Derivative: '<Root>/Current1Derivative' */
    /* Derivative: '<Root>/Current2Derivative' */
    if ((Crouch_Implementation_Sept8_2021_DW.TimeStampA_o >=
         Crouch_Implementation_Sept8_2021_M->Timing.t[0]) &&
        (Crouch_Implementation_Sept8_2021_DW.TimeStampB_m >=
         Crouch_Implementation_Sept8_2021_M->Timing.t[0])) {
      /* Derivative: '<Root>/Current2Derivative' */
      Crouch_Implementation_Sept8_2021_B.Current2Derivative = 0.0;
    } else {
      I_ff = Crouch_Implementation_Sept8_2021_DW.TimeStampA_o;
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeA_d;
      if (Crouch_Implementation_Sept8_2021_DW.TimeStampA_o <
          Crouch_Implementation_Sept8_2021_DW.TimeStampB_m) {
        if (Crouch_Implementation_Sept8_2021_DW.TimeStampB_m <
            Crouch_Implementation_Sept8_2021_M->Timing.t[0]) {
          I_ff = Crouch_Implementation_Sept8_2021_DW.TimeStampB_m;
          lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB_p;
        }
      } else if (Crouch_Implementation_Sept8_2021_DW.TimeStampA_o >=
                 Crouch_Implementation_Sept8_2021_M->Timing.t[0]) {
        I_ff = Crouch_Implementation_Sept8_2021_DW.TimeStampB_m;
        lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB_p;
      }

      I_ff = Crouch_Implementation_Sept8_2021_M->Timing.t[0] - I_ff;

      /* Derivative: '<Root>/Current2Derivative' */
      Crouch_Implementation_Sept8_2021_B.Current2Derivative =
        (Crouch_Implementation_Sept8_2021_B.I_ff - *lastU) / I_ff;
    }

    /* End of Derivative: '<Root>/Current2Derivative' */
    /* SignalConversion generated from: '<S2>/ SFunction ' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function'
     */
    Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_l[0] =
      Crouch_Implementation_Sept8_2021_B.I_ff_o;
    Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_l[1] =
      Crouch_Implementation_Sept8_2021_B.I_ff;

    /* SignalConversion generated from: '<S2>/ SFunction ' incorporates:
     *  MATLAB Function: '<Root>/MATLAB Function'
     */
    Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_i[0] =
      Crouch_Implementation_Sept8_2021_B.position_j;
    Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_i[1] =
      Crouch_Implementation_Sept8_2021_B.Gain_m;

    /* MATLAB Function: '<Root>/MATLAB Function' */
    Crouch_Implementation_Sept8_2021_B.GRF = 0.0;
    if (((Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_i[0] <
          0.0) && (2.25 <
                   Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_l
                   [0]) &&
         (Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_i[1] >
          0.0) && (-1.2 >
                   Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_l
                   [1])) ||
        ((Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_i[0] >
          0.0) && (-2.25 >
                   Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_l
                   [0]) &&
         (Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_i[1] <
          0.0) && (1.2 <
                   Crouch_Implementation_Sept8_2021_B.TmpSignalConversionAtSFunctio_l
                   [1]))) {
      Crouch_Implementation_Sept8_2021_B.GRF = 1.0;
    }

    /* Clock: '<Root>/Clock' */
    Crouch_Implementation_Sept8_2021_B.Clock =
      Crouch_Implementation_Sept8_2021_M->Timing.t[0];

    /* S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */

    /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }
  }

  {
    real_T *lastU;

    /* Update for Delay: '<Root>/Delay' */
    Crouch_Implementation_Sept8_2021_DW.Delay_DSTATE =
      Crouch_Implementation_Sept8_2021_B.position_j;

    /* Update for Delay: '<Root>/Delay1' */
    Crouch_Implementation_Sept8_2021_DW.Delay1_DSTATE =
      Crouch_Implementation_Sept8_2021_B.Gain_m;

    /* Update for Derivative: '<Root>/Current1Derivative' */
    if (Crouch_Implementation_Sept8_2021_DW.TimeStampA == (rtInf)) {
      Crouch_Implementation_Sept8_2021_DW.TimeStampA =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeA;
    } else if (Crouch_Implementation_Sept8_2021_DW.TimeStampB == (rtInf)) {
      Crouch_Implementation_Sept8_2021_DW.TimeStampB =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB;
    } else if (Crouch_Implementation_Sept8_2021_DW.TimeStampA <
               Crouch_Implementation_Sept8_2021_DW.TimeStampB) {
      Crouch_Implementation_Sept8_2021_DW.TimeStampA =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeA;
    } else {
      Crouch_Implementation_Sept8_2021_DW.TimeStampB =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB;
    }

    *lastU = Crouch_Implementation_Sept8_2021_B.I_ff_o;

    /* End of Update for Derivative: '<Root>/Current1Derivative' */

    /* Update for Derivative: '<Root>/Current2Derivative' */
    if (Crouch_Implementation_Sept8_2021_DW.TimeStampA_o == (rtInf)) {
      Crouch_Implementation_Sept8_2021_DW.TimeStampA_o =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeA_d;
    } else if (Crouch_Implementation_Sept8_2021_DW.TimeStampB_m == (rtInf)) {
      Crouch_Implementation_Sept8_2021_DW.TimeStampB_m =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB_p;
    } else if (Crouch_Implementation_Sept8_2021_DW.TimeStampA_o <
               Crouch_Implementation_Sept8_2021_DW.TimeStampB_m) {
      Crouch_Implementation_Sept8_2021_DW.TimeStampA_o =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeA_d;
    } else {
      Crouch_Implementation_Sept8_2021_DW.TimeStampB_m =
        Crouch_Implementation_Sept8_2021_M->Timing.t[0];
      lastU = &Crouch_Implementation_Sept8_2021_DW.LastUAtTimeB_p;
    }

    *lastU = Crouch_Implementation_Sept8_2021_B.I_ff;

    /* End of Update for Derivative: '<Root>/Current2Derivative' */
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
  if (!(++Crouch_Implementation_Sept8_2021_M->Timing.clockTick0)) {
    ++Crouch_Implementation_Sept8_2021_M->Timing.clockTickH0;
  }

  Crouch_Implementation_Sept8_2021_M->Timing.t[0] =
    Crouch_Implementation_Sept8_2021_M->Timing.clockTick0 *
    Crouch_Implementation_Sept8_2021_M->Timing.stepSize0 +
    Crouch_Implementation_Sept8_2021_M->Timing.clockTickH0 *
    Crouch_Implementation_Sept8_2021_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Crouch_Implementation_Sept8_2021_M->Timing.clockTick1)) {
      ++Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1;
    }

    Crouch_Implementation_Sept8_2021_M->Timing.t[1] =
      Crouch_Implementation_Sept8_2021_M->Timing.clockTick1 *
      Crouch_Implementation_Sept8_2021_M->Timing.stepSize1 +
      Crouch_Implementation_Sept8_2021_M->Timing.clockTickH1 *
      Crouch_Implementation_Sept8_2021_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
void Crouch_Implementation_Sept8_2021_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Crouch_Implementation_Sept8_2021_M->solverInfo,
                          &Crouch_Implementation_Sept8_2021_M->Timing.simTimeStep);
    rtsiSetTPtr(&Crouch_Implementation_Sept8_2021_M->solverInfo, &rtmGetTPtr
                (Crouch_Implementation_Sept8_2021_M));
    rtsiSetStepSizePtr(&Crouch_Implementation_Sept8_2021_M->solverInfo,
                       &Crouch_Implementation_Sept8_2021_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Crouch_Implementation_Sept8_2021_M->solverInfo,
                          (&rtmGetErrorStatus(Crouch_Implementation_Sept8_2021_M)));
    rtsiSetRTModelPtr(&Crouch_Implementation_Sept8_2021_M->solverInfo,
                      Crouch_Implementation_Sept8_2021_M);
  }

  rtsiSetSimTimeStep(&Crouch_Implementation_Sept8_2021_M->solverInfo,
                     MAJOR_TIME_STEP);
  rtsiSetSolverName(&Crouch_Implementation_Sept8_2021_M->solverInfo,
                    "FixedStepDiscrete");
  Crouch_Implementation_Sept8_2021_M->solverInfoPtr =
    (&Crouch_Implementation_Sept8_2021_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      Crouch_Implementation_Sept8_2021_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    Crouch_Implementation_Sept8_2021_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap
      [0]);
    Crouch_Implementation_Sept8_2021_M->Timing.sampleTimes =
      (&Crouch_Implementation_Sept8_2021_M->Timing.sampleTimesArray[0]);
    Crouch_Implementation_Sept8_2021_M->Timing.offsetTimes =
      (&Crouch_Implementation_Sept8_2021_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Crouch_Implementation_Sept8_2021_M->Timing.sampleTimes[0] = (0.0);
    Crouch_Implementation_Sept8_2021_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    Crouch_Implementation_Sept8_2021_M->Timing.offsetTimes[0] = (0.0);
    Crouch_Implementation_Sept8_2021_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(Crouch_Implementation_Sept8_2021_M,
             &Crouch_Implementation_Sept8_2021_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      Crouch_Implementation_Sept8_2021_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    Crouch_Implementation_Sept8_2021_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Crouch_Implementation_Sept8_2021_M, -1);
  Crouch_Implementation_Sept8_2021_M->Timing.stepSize0 = 0.001;
  Crouch_Implementation_Sept8_2021_M->Timing.stepSize1 = 0.001;
  Crouch_Implementation_Sept8_2021_M->solverInfoPtr =
    (&Crouch_Implementation_Sept8_2021_M->solverInfo);
  Crouch_Implementation_Sept8_2021_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&Crouch_Implementation_Sept8_2021_M->solverInfo, 0.001);
  rtsiSetSolverMode(&Crouch_Implementation_Sept8_2021_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&Crouch_Implementation_Sept8_2021_B)),
                     0,
                     sizeof(B_Crouch_Implementation_Sept8_2021_T));

  {
    Crouch_Implementation_Sept8_2021_B.CANRead_o2 = CAN_DATATYPE_GROUND;
    Crouch_Implementation_Sept8_2021_B.CANPack1 = CAN_DATATYPE_GROUND;
    Crouch_Implementation_Sept8_2021_B.CANmsg2 = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&Crouch_Implementation_Sept8_2021_DW),
                     0,
                     sizeof(DW_Crouch_Implementation_Sept8_2021_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.sfcnInfo;
    Crouch_Implementation_Sept8_2021_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (Crouch_Implementation_Sept8_2021_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Crouch_Implementation_Sept8_2021_M->Sizes.numSampTimes);
    Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.taskTimePtrs[0] =
      &(rtmGetTPtr(Crouch_Implementation_Sept8_2021_M)[0]);
    Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.taskTimePtrs[1] =
      &(rtmGetTPtr(Crouch_Implementation_Sept8_2021_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,
                   Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Crouch_Implementation_Sept8_2021_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Crouch_Implementation_Sept8_2021_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Crouch_Implementation_Sept8_2021_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &Crouch_Implementation_Sept8_2021_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Crouch_Implementation_Sept8_2021_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Crouch_Implementation_Sept8_2021_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Crouch_Implementation_Sept8_2021_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Crouch_Implementation_Sept8_2021_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &Crouch_Implementation_Sept8_2021_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Crouch_Implementation_Sept8_2021_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Crouch_Implementation_Sept8_2021_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &Crouch_Implementation_Sept8_2021_M->solverInfoPtr);
  }

  Crouch_Implementation_Sept8_2021_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       5*sizeof(SimStruct));
    Crouch_Implementation_Sept8_2021_M->childSfunctions =
      (&Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        Crouch_Implementation_Sept8_2021_M->childSfunctions[i] =
          (&Crouch_Implementation_Sept8_2021_M->
           NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: Crouch_Implementation_Sept8_2021/<S4>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Crouch_Implementation_Sept8_2021_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Crouch_Implementation_Sept8_2021_B.CANmsg2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts,
                "Crouch_Implementation_Sept8_2021/Simulink Function1/CAN Write1");
      ssSetRTModel(rts,Crouch_Implementation_Sept8_2021_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &Crouch_Implementation_Sept8_2021_DW.CANWrite1_PWORK_f);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &Crouch_Implementation_Sept8_2021_DW.CANWrite1_PWORK_f);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Crouch_Implementation_Sept8_2021/<S5>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Crouch_Implementation_Sept8_2021_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &Crouch_Implementation_Sept8_2021_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts,
                "Crouch_Implementation_Sept8_2021/Simulink Function3/CAN Write1");
      ssSetRTModel(rts,Crouch_Implementation_Sept8_2021_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANWrite1_P1_Size_d);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &Crouch_Implementation_Sept8_2021_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Crouch_Implementation_Sept8_2021_DW.CANWrite1_PWORK);
      }

      /* registration */
      sg_IO602_IO691_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: Crouch_Implementation_Sept8_2021/<S6>/CAN Read (sg_IO602_IO691_read_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Crouch_Implementation_Sept8_2021_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &Crouch_Implementation_Sept8_2021_B.CANRead_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &Crouch_Implementation_Sept8_2021_B.CANRead_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Read");
      ssSetPath(rts,
                "Crouch_Implementation_Sept8_2021/While Iterator Subsystem/CAN Read");
      ssSetRTModel(rts,Crouch_Implementation_Sept8_2021_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANRead_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &Crouch_Implementation_Sept8_2021_DW.CANRead_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Crouch_Implementation_Sept8_2021_DW.CANRead_PWORK);
      }

      /* registration */
      sg_IO602_IO691_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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

    /* Level2 S-Function Block: Crouch_Implementation_Sept8_2021/<Root>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Crouch_Implementation_Sept8_2021_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts, "Crouch_Implementation_Sept8_2021/CAN Setup ");
      ssSetRTModel(rts,Crouch_Implementation_Sept8_2021_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &Crouch_Implementation_Sept8_2021_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Crouch_Implementation_Sept8_2021_DW.CANSetup_PWORK);
      }

      /* registration */
      sg_IO602_IO691_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: Crouch_Implementation_Sept8_2021/<Root>/CAN Status (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Crouch_Implementation_Sept8_2021_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Status");
      ssSetPath(rts, "Crouch_Implementation_Sept8_2021/CAN Status");
      ssSetRTModel(rts,Crouch_Implementation_Sept8_2021_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 34);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       Crouch_Implementation_Sept8_cal->CANStatus_P34_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &Crouch_Implementation_Sept8_2021_DW.CANStatus_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Crouch_Implementation_Sept8_2021_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 34);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Crouch_Implementation_Sept8_2021_DW.CANStatus_IWORK
                   [0]);
      }

      /* registration */
      sg_IO602_IO691_status_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
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
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Constant: '<Root>/Constant' */
  Crouch_Implementation_Sept8_2021_B.Constant =
    Crouch_Implementation_Sept8_cal->Constant_Value;

  /* Start for Constant: '<Root>/Constant8' */
  Crouch_Implementation_Sept8_2021_B.Constant8 =
    Crouch_Implementation_Sept8_cal->Constant8_Value;

  /* Start for Constant: '<Root>/Constant2' */
  Crouch_Implementation_Sept8_2021_B.Constant2 =
    Crouch_Implementation_Sept8_cal->Constant2_Value;

  /* Start for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for Delay: '<Root>/Delay' */
  Crouch_Implementation_Sept8_2021_DW.Delay_DSTATE =
    Crouch_Implementation_Sept8_cal->Delay_InitialCondition;

  /* InitializeConditions for Delay: '<Root>/Delay1' */
  Crouch_Implementation_Sept8_2021_DW.Delay1_DSTATE =
    Crouch_Implementation_Sept8_cal->Delay1_InitialCondition;

  /* InitializeConditions for Derivative: '<Root>/Current1Derivative' */
  Crouch_Implementation_Sept8_2021_DW.TimeStampA = (rtInf);
  Crouch_Implementation_Sept8_2021_DW.TimeStampB = (rtInf);

  /* InitializeConditions for Derivative: '<Root>/Current2Derivative' */
  Crouch_Implementation_Sept8_2021_DW.TimeStampA_o = (rtInf);
  Crouch_Implementation_Sept8_2021_DW.TimeStampB_m = (rtInf);

  /* Start for S-Function (sg_IO602_IO691_read_s): '<S6>/CAN Read' */
  /* Level2 S-Function Block: '<S6>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* SystemInitialize for Atomic SubSystem: '<S6>/If Action Subsystem1' */
  /* Start for S-Function (scanunpack): '<S10>/CAN Unpack' */

  /*-----------S-Function Block: <S10>/CAN Unpack -----------------*/

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem1' */

  /* SystemInitialize for Atomic SubSystem: '<S6>/If Action Subsystem' */
  /* Start for S-Function (scanunpack): '<S9>/CAN Unpack' */

  /*-----------S-Function Block: <S9>/CAN Unpack -----------------*/

  /* End of SystemInitialize for SubSystem: '<S6>/If Action Subsystem' */

  /* SystemInitialize for Outport: '<S6>/P1' */
  Crouch_Implementation_Sept8_2021_B.position_j =
    Crouch_Implementation_Sept8_cal->P1_Y0;

  /* SystemInitialize for Outport: '<S6>/V1' */
  Crouch_Implementation_Sept8_2021_B.velocity_h =
    Crouch_Implementation_Sept8_cal->V1_Y0;

  /* SystemInitialize for Outport: '<S6>/Curr1' */
  Crouch_Implementation_Sept8_2021_B.I_ff_o =
    Crouch_Implementation_Sept8_cal->Curr1_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S9>/CAN Unpack' incorporates:
   *  Outport: '<S6>/ID1'
   */
  Crouch_Implementation_Sept8_2021_B.CANUnpack_o4_i =
    Crouch_Implementation_Sept8_cal->ID1_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S9>/CAN Unpack' incorporates:
   *  Outport: '<S6>/Status1'
   */
  Crouch_Implementation_Sept8_2021_B.CANUnpack_o5_p =
    Crouch_Implementation_Sept8_cal->Status1_Y0;

  /* SystemInitialize for Gain: '<S6>/Gain' incorporates:
   *  Outport: '<S6>/P2'
   */
  Crouch_Implementation_Sept8_2021_B.Gain_m =
    Crouch_Implementation_Sept8_cal->P2_Y0;

  /* SystemInitialize for Outport: '<S6>/V2' */
  Crouch_Implementation_Sept8_2021_B.velocity =
    Crouch_Implementation_Sept8_cal->V2_Y0;

  /* SystemInitialize for Outport: '<S6>/Curr2' */
  Crouch_Implementation_Sept8_2021_B.I_ff =
    Crouch_Implementation_Sept8_cal->Curr2_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S10>/CAN Unpack' incorporates:
   *  Outport: '<S6>/ID2'
   */
  Crouch_Implementation_Sept8_2021_B.CANUnpack_o4 =
    Crouch_Implementation_Sept8_cal->ID2_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S10>/CAN Unpack' incorporates:
   *  Outport: '<S6>/Status2'
   */
  Crouch_Implementation_Sept8_2021_B.CANUnpack_o5 =
    Crouch_Implementation_Sept8_cal->Status2_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/While Iterator Subsystem' */

  /* SystemInitialize for Chart: '<Root>/Chart' */
  Crouch_Implementation_Sept8_2021_DW.sfEvent = Crouch_Implementatio_CALL_EVENT;
  Crouch_Implementation_Sept8_2021_DW.is_Command = 0U;
  Crouch_Implementation_Sept8_2021_DW.is_Flight = 0U;
  Crouch_Implementation_Sept8_2021_DW.is_Stance = 0U;
  Crouch_Implementation_Sept8_2021_DW.temporalCounter_i1 = 0U;
  Crouch_Implementation_Sept8_2021_DW.temporalCounter_i2 = 0U;
  Crouch_Implementation_Sept8_2021_DW.is_active_c8_Crouch_Implementat = 0U;
  Crouch_Implementation_Sept8_2021_DW.is_c8_Crouch_Implementation_Sep = 0U;
  Crouch_Implementation_Sept8_2021_DW.done = 0.0;
  Crouch_Implementation_Sept8_2021_DW.pf = 0.0;
  Crouch_Implementation_Sept8_2021_DW.tstep = 0.0;
  Crouch_Implementation_Sept8_2021_DW.to = 0.0;
  Crouch_Implementation_Sept8_2021_DW.po1 = 0.0;
  Crouch_Implementation_Sept8_2021_DW.po2 = 0.0;
  Crouch_Implementation_Sept8_2021_DW.slope1 = 0.0;
  Crouch_Implementation_Sept8_2021_DW.slope2 = 0.0;
  Crouch_Implementation_Sept8_2021_DW.Idle = 0.0;
  Crouch_Implementation_Sept8_2021_DW.hop = 0.0;
  Crouch_Implementation_Sept8_2021_DW.time = 0.0;
  Crouch_Implementation_Sept8_2021_DW.FStart = 0.0;
  Crouch_Implementation_Sept8_2021_DW.Th2Th1 = -1.8;
  Crouch_Implementation_Sept8_2021_DW.jumped = 0.0;
  Crouch_Implementation_Sept8_2021_B.stop = 0.0;
  Crouch_Implementation_Sept8_2021_B.theta1 = 0.0;
  Crouch_Implementation_Sept8_2021_B.theta2 = 0.0;
  Crouch_Implementation_Sept8_2021_B.c = 0.0;
  Crouch_Implementation_Sept8_2021_B.T1 = 0.0;
  Crouch_Implementation_Sept8_2021_B.T2 = 0.0;
  Crouch_Implementation_Sept8_2021_B.Kp1 = 25.0;
  Crouch_Implementation_Sept8_2021_B.Kp2 = 25.0;
  Crouch_Implementation_Sept8_2021_B.Kd1 = 0.1;
  Crouch_Implementation_Sept8_2021_B.Kd2 = 0.1;
  Crouch_Implementation_Sept8_2021_B.exitY = 0.0;
  Crouch_Implementation_Sept8_2021_B.Tcalc1 = 0.0;
  Crouch_Implementation_Sept8_2021_B.Tcalc2 = 0.0;
  Crouch_Implementation_Sept8_2021_B.calcForceX = 0.0;
  Crouch_Implementation_Sept8_2021_B.GRF_e = 0.0;

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S4>/CAN Write1' */
  /* Level2 S-Function Block: '<S4>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write1' */
  /* Level2 S-Function Block: '<S5>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
void Crouch_Implementation_Sept8_2021_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for Iterator SubSystem: '<Root>/While Iterator Subsystem' */

  /* Terminate for S-Function (sg_IO602_IO691_read_s): '<S6>/CAN Read' */
  /* Level2 S-Function Block: '<S6>/CAN Read' (sg_IO602_IO691_read_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/While Iterator Subsystem' */

  /* Terminate for Atomic SubSystem: '<Root>/Simulink Function1' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S4>/CAN Write1' */
  /* Level2 S-Function Block: '<S4>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Simulink Function1' */

  /* Terminate for Atomic SubSystem: '<Root>/Simulink Function3' */

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<S5>/CAN Write1' */
  /* Level2 S-Function Block: '<S5>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<Root>/Simulink Function3' */

  /* Terminate for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = Crouch_Implementation_Sept8_2021_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}

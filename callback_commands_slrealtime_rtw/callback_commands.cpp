/*
 * callback_commands.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "callback_commands".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Jul 30 16:33:31 2021
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "callback_commands.h"
#include "callback_commands_private.h"

/* Block signals (default storage) */
B_callback_commands_T callback_commands_B;

/* Block states (default storage) */
DW_callback_commands_T callback_commands_DW;

/* Real-time model */
RT_MODEL_callback_commands_T callback_commands_M_ = RT_MODEL_callback_commands_T
  ();
RT_MODEL_callback_commands_T *const callback_commands_M = &callback_commands_M_;

/* Forward declaration for local functions */
static void callback_commands_dec2bin(real_T d, char_T s_data[], int32_T s_size
  [2]);

/* Function for MATLAB Function: '<Root>/floats -> bytes' */
static void callback_commands_dec2bin(real_T d, char_T s_data[], int32_T s_size
  [2])
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
void callback_commands_step(void)
{
  real_T b_B[8];
  real_T u0;
  uint64_T a;
  uint64_T p2;
  int32_T first;
  int32_T i;
  int32_T loop_ub;
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

  /* S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */

  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = callback_commands_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  for (i = 0; i < 5; i++) {
    /* Constant: '<Root>/Constant4' */
    callback_commands_B.Constant4[i] = callback_commands_cal->Constant4_Value[i];
  }

  /* MATLAB Function: '<Root>/floats -> bytes' */
  u0 = callback_commands_B.Constant4[0];
  if (!(u0 < 95.5)) {
    u0 = 95.5;
  }

  if (!(u0 > -95.5)) {
    u0 = -95.5;
  }

  callback_commands_dec2bin(std::floor((u0 - -95.5) * 65535.0 / 191.0), B,
    c_size);
  outsize_idx_1 = static_cast<int8_T>(16 - c_size[1]);
  i = outsize_idx_1;
  loop_ub = c_size[1];
  for (first = 0; first < i; first++) {
    p_data[first] = '0';
  }

  for (first = 0; first < loop_ub; first++) {
    p_data[first + i] = B[first];
  }

  u0 = callback_commands_B.Constant4[1];
  if (!(u0 < 45.0)) {
    u0 = 45.0;
  }

  if (!(u0 > -45.0)) {
    u0 = -45.0;
  }

  callback_commands_dec2bin(std::floor((u0 - -45.0) * 4095.0 / 90.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  i = outsize_idx_1;
  loop_ub = c_size[1];
  for (first = 0; first < i; first++) {
    v_data[first] = '0';
  }

  for (first = 0; first < loop_ub; first++) {
    v_data[first + i] = B[first];
  }

  u0 = callback_commands_B.Constant4[2];
  if (!(u0 < 500.0)) {
    u0 = 500.0;
  }

  if (!(u0 > 0.0)) {
    u0 = 0.0;
  }

  callback_commands_dec2bin(std::floor(u0 * 4095.0 / 500.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  i = outsize_idx_1;
  loop_ub = c_size[1];
  for (first = 0; first < i; first++) {
    kp_data[first] = '0';
  }

  for (first = 0; first < loop_ub; first++) {
    kp_data[first + i] = B[first];
  }

  u0 = callback_commands_B.Constant4[3];
  if (!(u0 < 45.0)) {
    u0 = 45.0;
  }

  if (!(u0 > -45.0)) {
    u0 = -45.0;
  }

  callback_commands_dec2bin(std::floor(u0 * 4095.0 / 5.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  i = outsize_idx_1;
  loop_ub = c_size[1];
  for (first = 0; first < i; first++) {
    kd_data[first] = '0';
  }

  for (first = 0; first < loop_ub; first++) {
    kd_data[first + i] = B[first];
  }

  u0 = callback_commands_B.Constant4[4];
  if (!(u0 < 45.0)) {
    u0 = 45.0;
  }

  if (!(u0 > -45.0)) {
    u0 = -45.0;
  }

  callback_commands_dec2bin(std::floor((u0 - -18.0) * 4095.0 / 36.0), B, c_size);
  outsize_idx_1 = static_cast<int8_T>(12 - c_size[1]);
  i = outsize_idx_1;
  loop_ub = c_size[1];
  for (first = 0; first < i; first++) {
    t_data[first] = '0';
  }

  for (first = 0; first < loop_ub; first++) {
    t_data[first + i] = B[first];
  }

  for (first = 0; first < 64; first++) {
    B[first] = '0';
  }

  for (first = 0; first < 8; first++) {
    B[first << 3] = p_data[first];
    B[(first << 3) + 1] = p_data[first + 8];
    B[(first << 3) + 2] = v_data[first];
  }

  B[3] = v_data[8];
  B[35] = kp_data[0];
  B[11] = v_data[9];
  B[43] = kp_data[1];
  B[19] = v_data[10];
  B[51] = kp_data[2];
  B[27] = v_data[11];
  B[59] = kp_data[3];
  for (first = 0; first < 8; first++) {
    B[(first << 3) + 4] = kp_data[first + 4];
    B[(first << 3) + 5] = kd_data[first];
  }

  B[6] = kd_data[8];
  B[38] = t_data[0];
  B[14] = kd_data[9];
  B[46] = t_data[1];
  B[22] = kd_data[10];
  B[54] = t_data[2];
  B[30] = kd_data[11];
  B[62] = t_data[3];
  for (first = 0; first < 8; first++) {
    B[(first << 3) + 7] = t_data[first + 4];
  }

  for (i = 0; i < 8; i++) {
    first = 1;
    while ((first < 8) && b[static_cast<uint8_T>(B[((first - 1) << 3) + i])]) {
      first++;
    }

    loop_ub = 7;
    while ((loop_ub + 1 > first) && b[static_cast<uint8_T>(B[(loop_ub << 3) + i])])
    {
      loop_ub--;
    }

    p2 = 1UL;
    a = 0UL;
    while ((first < loop_ub + 1) && b[static_cast<uint8_T>(B[((first - 1) << 3)
            + i])]) {
      first++;
    }

    while (loop_ub + 1 >= first) {
      if (B[(loop_ub << 3) + i] == '1') {
        a += p2;
        p2 += p2;
      } else if (B[(loop_ub << 3) + i] == '0') {
        p2 += p2;
      }

      loop_ub--;
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

    callback_commands_B.b[i] = tmp;
  }

  /* End of MATLAB Function: '<Root>/floats -> bytes' */

  /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  switch (static_cast<int32_T>(callback_commands_P.c)) {
   case 1:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Constant'
     */
    for (i = 0; i < 8; i++) {
      callback_commands_B.MultiportSwitch[i] =
        callback_commands_cal->Constant_Value[i];
    }
    break;

   case 2:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Constant1'
     */
    for (i = 0; i < 8; i++) {
      callback_commands_B.MultiportSwitch[i] =
        callback_commands_cal->Constant1_Value[i];
    }
    break;

   case 3:
    /* MultiPortSwitch: '<Root>/Multiport Switch' */
    for (i = 0; i < 8; i++) {
      callback_commands_B.MultiportSwitch[i] = callback_commands_B.b[i];
    }
    break;

   default:
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Constant: '<Root>/Constant2'
     */
    for (i = 0; i < 8; i++) {
      callback_commands_B.MultiportSwitch[i] =
        callback_commands_cal->Constant2_Value[i];
    }
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch' */

  /* S-Function (slrealtimebytepacking): '<Root>/Byte Packing' */

  /* Byte Packing: <Root>/Byte Packing */
  (void)memcpy((uint8_T*)&callback_commands_B.BytePacking[0] + 0, (uint8_T*)
               &callback_commands_B.MultiportSwitch[0], 8);

  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  /* S-Function (scanpack): '<Root>/CAN Pack1' */
  callback_commands_B.CANPack1.ID = 1U;
  callback_commands_B.CANPack1.Length = 8U;
  callback_commands_B.CANPack1.Extended = 0U;
  callback_commands_B.CANPack1.Remote = 0;
  callback_commands_B.CANPack1.Data[0] = 0;
  callback_commands_B.CANPack1.Data[1] = 0;
  callback_commands_B.CANPack1.Data[2] = 0;
  callback_commands_B.CANPack1.Data[3] = 0;
  callback_commands_B.CANPack1.Data[4] = 0;
  callback_commands_B.CANPack1.Data[5] = 0;
  callback_commands_B.CANPack1.Data[6] = 0;
  callback_commands_B.CANPack1.Data[7] = 0;

  {
    (void) std::memcpy((callback_commands_B.CANPack1.Data),
                       &callback_commands_B.BytePacking[0],
                       8 * sizeof(uint8_T));
  }

  /* S-Function (sg_IO602_IO691_write_s): '<Root>/CAN Write1' */

  /* Level2 S-Function Block: '<Root>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = callback_commands_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */

  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = callback_commands_M->childSfunctions[2];
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
  if (!(++callback_commands_M->Timing.clockTick0)) {
    ++callback_commands_M->Timing.clockTickH0;
  }

  callback_commands_M->Timing.t[0] = callback_commands_M->Timing.clockTick0 *
    callback_commands_M->Timing.stepSize0 +
    callback_commands_M->Timing.clockTickH0 *
    callback_commands_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void callback_commands_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&callback_commands_M->solverInfo,"FixedStepDiscrete");
  callback_commands_M->solverInfoPtr = (&callback_commands_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = callback_commands_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    callback_commands_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    callback_commands_M->Timing.sampleTimes =
      (&callback_commands_M->Timing.sampleTimesArray[0]);
    callback_commands_M->Timing.offsetTimes =
      (&callback_commands_M->Timing.offsetTimesArray[0]);

    /* task periods */
    callback_commands_M->Timing.sampleTimes[0] = (0.02);

    /* task offsets */
    callback_commands_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(callback_commands_M, &callback_commands_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = callback_commands_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    callback_commands_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(callback_commands_M, -1);
  callback_commands_M->Timing.stepSize0 = 0.02;
  callback_commands_M->solverInfoPtr = (&callback_commands_M->solverInfo);
  callback_commands_M->Timing.stepSize = (0.02);
  rtsiSetFixedStepSize(&callback_commands_M->solverInfo, 0.02);
  rtsiSetSolverMode(&callback_commands_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&callback_commands_B)), 0,
                     sizeof(B_callback_commands_T));

  {
    callback_commands_B.CANPack1 = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&callback_commands_DW), 0,
                     sizeof(DW_callback_commands_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &callback_commands_M->NonInlinedSFcns.sfcnInfo;
    callback_commands_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(callback_commands_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &callback_commands_M->Sizes.numSampTimes);
    callback_commands_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (callback_commands_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,callback_commands_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(callback_commands_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(callback_commands_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (callback_commands_M));
    rtssSetStepSizePtr(sfcnInfo, &callback_commands_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(callback_commands_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &callback_commands_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &callback_commands_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &callback_commands_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &callback_commands_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &callback_commands_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &callback_commands_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &callback_commands_M->solverInfoPtr);
  }

  callback_commands_M->Sizes.numSFcns = (3);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&callback_commands_M->NonInlinedSFcns.childSFunctions[0]),
                       0,
                       3*sizeof(SimStruct));
    callback_commands_M->childSfunctions =
      (&callback_commands_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    callback_commands_M->childSfunctions[0] =
      (&callback_commands_M->NonInlinedSFcns.childSFunctions[0]);
    callback_commands_M->childSfunctions[1] =
      (&callback_commands_M->NonInlinedSFcns.childSFunctions[1]);
    callback_commands_M->childSfunctions[2] =
      (&callback_commands_M->NonInlinedSFcns.childSFunctions[2]);

    /* Level2 S-Function Block: callback_commands/<Root>/CAN Setup  (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = callback_commands_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = callback_commands_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = callback_commands_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = callback_commands_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &callback_commands_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &callback_commands_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, callback_commands_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &callback_commands_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &callback_commands_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &callback_commands_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &callback_commands_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &callback_commands_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup ");
      ssSetPath(rts, "callback_commands/CAN Setup ");
      ssSetRTModel(rts,callback_commands_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &callback_commands_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)callback_commands_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)callback_commands_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)callback_commands_cal->CANSetup_P3_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &callback_commands_DW.CANSetup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &callback_commands_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &callback_commands_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &callback_commands_DW.CANSetup_PWORK);
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

    /* Level2 S-Function Block: callback_commands/<Root>/CAN Write1 (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = callback_commands_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = callback_commands_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = callback_commands_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = callback_commands_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &callback_commands_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &callback_commands_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, callback_commands_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &callback_commands_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &callback_commands_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &callback_commands_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &callback_commands_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &callback_commands_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &callback_commands_M->NonInlinedSFcns.Sfcn1.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &callback_commands_M->NonInlinedSFcns.Sfcn1.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &callback_commands_M->NonInlinedSFcns.Sfcn1.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &callback_commands_B.CANPack1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "CAN Write1");
      ssSetPath(rts, "callback_commands/CAN Write1");
      ssSetRTModel(rts,callback_commands_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &callback_commands_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 1);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       callback_commands_cal->CANWrite1_P1_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &callback_commands_DW.CANWrite1_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &callback_commands_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &callback_commands_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &callback_commands_DW.CANWrite1_PWORK);
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

    /* Level2 S-Function Block: callback_commands/<Root>/CAN Status (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = callback_commands_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = callback_commands_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = callback_commands_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = callback_commands_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &callback_commands_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &callback_commands_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, callback_commands_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &callback_commands_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &callback_commands_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &callback_commands_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &callback_commands_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &callback_commands_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Status");
      ssSetPath(rts, "callback_commands/CAN Status");
      ssSetRTModel(rts,callback_commands_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &callback_commands_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 34);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       callback_commands_cal->CANStatus_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       callback_commands_cal->CANStatus_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       callback_commands_cal->CANStatus_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       callback_commands_cal->CANStatus_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       callback_commands_cal->CANStatus_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       callback_commands_cal->CANStatus_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       callback_commands_cal->CANStatus_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       callback_commands_cal->CANStatus_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       callback_commands_cal->CANStatus_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       callback_commands_cal->CANStatus_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       callback_commands_cal->CANStatus_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       callback_commands_cal->CANStatus_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       callback_commands_cal->CANStatus_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       callback_commands_cal->CANStatus_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       callback_commands_cal->CANStatus_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       callback_commands_cal->CANStatus_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       callback_commands_cal->CANStatus_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       callback_commands_cal->CANStatus_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       callback_commands_cal->CANStatus_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       callback_commands_cal->CANStatus_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       callback_commands_cal->CANStatus_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       callback_commands_cal->CANStatus_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       callback_commands_cal->CANStatus_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       callback_commands_cal->CANStatus_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       callback_commands_cal->CANStatus_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       callback_commands_cal->CANStatus_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       callback_commands_cal->CANStatus_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       callback_commands_cal->CANStatus_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       callback_commands_cal->CANStatus_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       callback_commands_cal->CANStatus_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       callback_commands_cal->CANStatus_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       callback_commands_cal->CANStatus_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       callback_commands_cal->CANStatus_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       callback_commands_cal->CANStatus_P34_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &callback_commands_DW.CANStatus_IWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &callback_commands_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &callback_commands_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 34);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &callback_commands_DW.CANStatus_IWORK[0]);
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

  {
    int32_T i;

    /* Start for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
    /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
    {
      SimStruct *rts = callback_commands_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    for (i = 0; i < 5; i++) {
      /* Start for Constant: '<Root>/Constant4' */
      callback_commands_B.Constant4[i] = callback_commands_cal->
        Constant4_Value[i];
    }

    /* Start for S-Function (sg_IO602_IO691_write_s): '<Root>/CAN Write1' */
    /* Level2 S-Function Block: '<Root>/CAN Write1' (sg_IO602_IO691_write_s) */
    {
      SimStruct *rts = callback_commands_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
    /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
    {
      SimStruct *rts = callback_commands_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }
}

/* Model terminate function */
void callback_commands_terminate(void)
{
  /* Terminate for S-Function (sg_IO602_IO691_setup_s): '<Root>/CAN Setup ' */
  /* Level2 S-Function Block: '<Root>/CAN Setup ' (sg_IO602_IO691_setup_s) */
  {
    SimStruct *rts = callback_commands_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_write_s): '<Root>/CAN Write1' */
  /* Level2 S-Function Block: '<Root>/CAN Write1' (sg_IO602_IO691_write_s) */
  {
    SimStruct *rts = callback_commands_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO602_IO691_status_s): '<Root>/CAN Status' */
  /* Level2 S-Function Block: '<Root>/CAN Status' (sg_IO602_IO691_status_s) */
  {
    SimStruct *rts = callback_commands_M->childSfunctions[2];
    sfcnTerminate(rts);
  }
}

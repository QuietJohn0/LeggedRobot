#ifndef RTW_HEADER_Callback_test_cal_h_
#define RTW_HEADER_Callback_test_cal_h_
#include "rtwtypes.h"
#include "Callback_test_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct Callback_test_cal_type {
  real_T SineWave_Amp;                 /* Expression: 1
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
};

/* Storage class 'PageSwitching' */
extern Callback_test_cal_type Callback_test_cal_impl;
extern Callback_test_cal_type *Callback_test_cal;

#endif                                 /* RTW_HEADER_Callback_test_cal_h_ */

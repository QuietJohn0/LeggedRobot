#include "Callback_test_calintf.h"
#include "Callback_test.h"
#include "Callback_test_cal.h"

extern Callback_test_cal_type Callback_test_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Callback_test_cal_impl, (void**)&Callback_test_cal, sizeof
      (Callback_test_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

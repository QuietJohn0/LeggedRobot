#include "getTorque_calintf.h"
#include "getTorque.h"
#include "getTorque_cal.h"

extern getTorque_cal_type getTorque_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&getTorque_cal_impl, (void**)&getTorque_cal, sizeof
      (getTorque_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

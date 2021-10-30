#include "CAN_2_Legs_calintf.h"
#include "CAN_2_Legs.h"
#include "CAN_2_Legs_cal.h"

extern CAN_2_Legs_cal_type CAN_2_Legs_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&CAN_2_Legs_cal_impl, (void**)&CAN_2_Legs_cal, sizeof
      (CAN_2_Legs_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

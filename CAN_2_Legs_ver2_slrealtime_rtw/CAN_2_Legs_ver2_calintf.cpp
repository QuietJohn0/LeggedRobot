#include "CAN_2_Legs_ver2_calintf.h"
#include "CAN_2_Legs_ver2.h"
#include "CAN_2_Legs_ver2_cal.h"

extern CAN_2_Legs_ver2_cal_type CAN_2_Legs_ver2_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&CAN_2_Legs_ver2_cal_impl, (void**)&CAN_2_Legs_ver2_cal, sizeof
      (CAN_2_Legs_ver2_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

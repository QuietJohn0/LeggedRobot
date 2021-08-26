#include "CAN_2_Legs_whileloop_johnmessingabout_calintf.h"
#include "CAN_2_Legs_whileloop_johnmessingabout.h"
#include "CAN_2_Legs_whileloop_johnmessingabout_cal.h"

extern CAN_2_Legs_whileloop_j_cal_type CAN_2_Legs_whileloop_j_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&CAN_2_Legs_whileloop_j_cal_impl, (void**)
      &CAN_2_Legs_whileloop_johnme_cal, sizeof(CAN_2_Legs_whileloop_j_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

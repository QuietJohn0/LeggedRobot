#include "CAN_2_Legs_stateflow_calintf.h"
#include "CAN_2_Legs_stateflow.h"
#include "CAN_2_Legs_stateflow_cal.h"

extern CAN_2_Legs_stateflow_cal_type CAN_2_Legs_stateflow_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&CAN_2_Legs_stateflow_cal_impl, (void**)&CAN_2_Legs_stateflow_cal,
      sizeof(CAN_2_Legs_stateflow_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

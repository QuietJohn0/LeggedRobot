#include "Raw_Data_CAN_Subsystem_calintf.h"
#include "Raw_Data_CAN_Subsystem.h"
#include "Raw_Data_CAN_Subsystem_cal.h"

extern Raw_Data_CAN_Subsystem_cal_type Raw_Data_CAN_Subsystem_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Raw_Data_CAN_Subsystem_cal_impl, (void**)
      &Raw_Data_CAN_Subsystem_cal, sizeof(Raw_Data_CAN_Subsystem_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

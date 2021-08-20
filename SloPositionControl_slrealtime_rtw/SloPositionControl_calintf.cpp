#include "SloPositionControl_calintf.h"
#include "SloPositionControl.h"
#include "SloPositionControl_cal.h"

extern SloPositionControl_cal_type SloPositionControl_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&SloPositionControl_cal_impl, (void**)&SloPositionControl_cal,
      sizeof(SloPositionControl_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

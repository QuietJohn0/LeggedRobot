#include "Crouch_Implementation_Sept8_2021_calintf.h"
#include "Crouch_Implementation_Sept8_2021.h"
#include "Crouch_Implementation_Sept8_2021_cal.h"

extern Crouch_Implementation__cal_type Crouch_Implementation__cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Crouch_Implementation__cal_impl, (void**)
      &Crouch_Implementation_Sept8_cal, sizeof(Crouch_Implementation__cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

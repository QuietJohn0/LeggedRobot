#include "Main_Sept1_2021_calintf.h"
#include "Main_Sept1_2021.h"
#include "Main_Sept1_2021_cal.h"

extern Main_Sept1_2021_cal_type Main_Sept1_2021_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Main_Sept1_2021_cal_impl, (void**)&Main_Sept1_2021_cal, sizeof
      (Main_Sept1_2021_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

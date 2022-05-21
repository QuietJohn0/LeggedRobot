#include "Main_Sept1_2021_2_calintf.h"
#include "Main_Sept1_2021_2.h"
#include "Main_Sept1_2021_2_cal.h"

extern Main_Sept1_2021_2_cal_type Main_Sept1_2021_2_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Main_Sept1_2021_2_cal_impl, (void**)&Main_Sept1_2021_2_cal, sizeof
      (Main_Sept1_2021_2_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

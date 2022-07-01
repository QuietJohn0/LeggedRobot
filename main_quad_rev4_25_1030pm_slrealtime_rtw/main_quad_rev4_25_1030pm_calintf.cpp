#include "main_quad_rev4_25_1030pm_calintf.h"
#include "main_quad_rev4_25_1030pm.h"
#include "main_quad_rev4_25_1030pm_cal.h"

extern main_quad_rev4_25_1030_cal_type main_quad_rev4_25_1030_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&main_quad_rev4_25_1030_cal_impl, (void**)
      &main_quad_rev4_25_1030pm_cal, sizeof(main_quad_rev4_25_1030_cal_type), 2
    }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

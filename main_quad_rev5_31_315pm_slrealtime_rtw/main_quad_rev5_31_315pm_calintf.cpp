#include "main_quad_rev5_31_315pm_calintf.h"
#include "main_quad_rev5_31_315pm.h"
#include "main_quad_rev5_31_315pm_cal.h"

extern main_quad_rev5_31_315p_cal_type main_quad_rev5_31_315p_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&main_quad_rev5_31_315p_cal_impl, (void**)
      &main_quad_rev5_31_315pm_cal, sizeof(main_quad_rev5_31_315p_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

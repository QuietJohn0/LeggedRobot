#include "main_quad_rev3_24_330pm_calintf.h"
#include "main_quad_rev3_24_330pm.h"
#include "main_quad_rev3_24_330pm_cal.h"

extern main_quad_rev3_24_330p_cal_type main_quad_rev3_24_330p_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&main_quad_rev3_24_330p_cal_impl, (void**)
      &main_quad_rev3_24_330pm_cal, sizeof(main_quad_rev3_24_330p_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

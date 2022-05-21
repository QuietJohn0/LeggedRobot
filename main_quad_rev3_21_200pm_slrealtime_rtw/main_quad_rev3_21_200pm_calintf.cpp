#include "main_quad_rev3_21_200pm_calintf.h"
#include "main_quad_rev3_21_200pm.h"
#include "main_quad_rev3_21_200pm_cal.h"

extern main_quad_rev3_21_200p_cal_type main_quad_rev3_21_200p_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&main_quad_rev3_21_200p_cal_impl, (void**)
      &main_quad_rev3_21_200pm_cal, sizeof(main_quad_rev3_21_200p_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

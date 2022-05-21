#include "main_quad_rev1_calintf.h"
#include "main_quad_rev1.h"
#include "main_quad_rev1_cal.h"

extern main_quad_rev1_cal_type main_quad_rev1_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&main_quad_rev1_cal_impl, (void**)&main_quad_rev1_cal, sizeof
      (main_quad_rev1_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

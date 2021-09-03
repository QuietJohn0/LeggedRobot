#include "Optimization_Implementation_Sept1_2021_calintf.h"
#include "Optimization_Implementation_Sept1_2021.h"
#include "Optimization_Implementation_Sept1_2021_cal.h"

extern Optimization_Implement_cal_type Optimization_Implement_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Optimization_Implement_cal_impl, (void**)
      &Optimization_Implementation_cal, sizeof(Optimization_Implement_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

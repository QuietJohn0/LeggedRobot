#include "callback_commands_calintf.h"
#include "callback_commands.h"
#include "callback_commands_cal.h"

extern callback_commands_cal_type callback_commands_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&callback_commands_cal_impl, (void**)&callback_commands_cal, sizeof
      (callback_commands_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime

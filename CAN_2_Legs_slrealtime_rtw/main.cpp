/* Main generated for Simulink Real-Time model CAN_2_Legs */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "CAN_2_Legs.h"
#include "CAN_2_Legs_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(CAN_2_Legs_step), slrealtime::TaskInfo::PERIODIC, 0.1, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo CAN_2_Legs_Info =
{
    "CAN_2_Legs",
    CAN_2_Legs_initialize,
    CAN_2_Legs_terminate,
    []()->char const*& { return CAN_2_Legs_M->errorStatus; },
    []()->unsigned char& { return CAN_2_Legs_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, CAN_2_Legs_Info);
}

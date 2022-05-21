/* Main generated for Simulink Real-Time model Main_Sept1_2021_2 */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "Main_Sept1_2021_2.h"
#include "Main_Sept1_2021_2_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(Main_Sept1_2021_2_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo Main_Sept1_2021_2_Info =
{
    "Main_Sept1_2021_2",
    Main_Sept1_2021_2_initialize,
    Main_Sept1_2021_2_terminate,
    []()->char const*& { return Main_Sept1_2021_2_M->errorStatus; },
    []()->unsigned char& { return Main_Sept1_2021_2_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, Main_Sept1_2021_2_Info);
}

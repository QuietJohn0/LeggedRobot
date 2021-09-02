/* Main generated for Simulink Real-Time model Main_Sept1_2021 */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "Main_Sept1_2021.h"
#include "Main_Sept1_2021_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(Main_Sept1_2021_step), slrealtime::TaskInfo::PERIODIC, 0.1, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo Main_Sept1_2021_Info =
{
    "Main_Sept1_2021",
    Main_Sept1_2021_initialize,
    Main_Sept1_2021_terminate,
    []()->char const*& { return Main_Sept1_2021_M->errorStatus; },
    []()->unsigned char& { return Main_Sept1_2021_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, Main_Sept1_2021_Info);
}

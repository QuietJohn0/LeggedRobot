/* Main generated for Simulink Real-Time model Optimization_Implementation_Sept1_2021 */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "Optimization_Implementation_Sept1_2021.h"
#include "Optimization_Implementation_Sept1_2021_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(Optimization_Implementation_Sept1_2021_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo Optimization_Implementation_Sept1_2021_Info =
{
    "Optimization_Implementation_Sept1_2021",
    Optimization_Implementation_Sept1_2021_initialize,
    Optimization_Implementation_Sept1_2021_terminate,
    []()->char const*& { return Optimization_Implementation_Sept1_2021_M->errorStatus; },
    []()->unsigned char& { return Optimization_Implementation_Sept1_2021_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, Optimization_Implementation_Sept1_2021_Info);
}

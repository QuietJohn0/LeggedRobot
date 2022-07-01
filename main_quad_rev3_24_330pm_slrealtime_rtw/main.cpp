/* Main generated for Simulink Real-Time model main_quad_rev3_24_330pm */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "main_quad_rev3_24_330pm.h"
#include "main_quad_rev3_24_330pm_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(main_quad_rev3_24_330pm_step), slrealtime::TaskInfo::PERIODIC, 0.005, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo main_quad_rev3_24_330pm_Info =
{
    "main_quad_rev3_24_330pm",
    main_quad_rev3_24_330pm_initialize,
    main_quad_rev3_24_330pm_terminate,
    []()->char const*& { return main_quad_rev3_24_330pm_M->errorStatus; },
    []()->unsigned char& { return main_quad_rev3_24_330pm_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, main_quad_rev3_24_330pm_Info);
}

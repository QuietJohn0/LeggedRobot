/* Main generated for Simulink Real-Time model main_quad_rev1 */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "main_quad_rev1.h"
#include "main_quad_rev1_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(main_quad_rev1_step), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo main_quad_rev1_Info =
{
    "main_quad_rev1",
    main_quad_rev1_initialize,
    main_quad_rev1_terminate,
    []()->char const*& { return main_quad_rev1_M->errorStatus; },
    []()->unsigned char& { return main_quad_rev1_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, main_quad_rev1_Info);
}

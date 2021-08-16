/* Main generated for Simulink Real-Time model Callback_test */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "Callback_test.h"
#include "Callback_test_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(Callback_test_step), slrealtime::TaskInfo::PERIODIC, 0.2, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo Callback_test_Info =
{
    "Callback_test",
    Callback_test_initialize,
    Callback_test_terminate,
    []()->char const*& { return Callback_test_M->errorStatus; },
    []()->unsigned char& { return Callback_test_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, Callback_test_Info);
}

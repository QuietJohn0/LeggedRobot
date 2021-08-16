/* Main generated for Simulink Real-Time model callback_commands */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "callback_commands.h"
#include "callback_commands_calintf.h"

/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(callback_commands_step), slrealtime::TaskInfo::PERIODIC, 0.02, 0, 40);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo callback_commands_Info =
{
    "callback_commands",
    callback_commands_initialize,
    callback_commands_terminate,
    []()->char const*& { return callback_commands_M->errorStatus; },
    []()->unsigned char& { return callback_commands_M->Timing.stopRequestedFlag; },
    { task_1 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, callback_commands_Info);
}

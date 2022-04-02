#include "verilated_config.h"
#include <stdio.h>

#define VL_PURE
#define VL_MT_SAFE
# define VL_PRINTF_MT VL_PRINTF
# define VL_PRINTF printf

// As found in include/verilated.cpp
// but skip the Verilated:: and VerilatedImp:: class membership
const char* productName() VL_PURE { return VERILATOR_PRODUCT; }
const char* productVersion() VL_PURE { return VERILATOR_VERSION; }
void versionDump() VL_MT_SAFE {
    VL_PRINTF_MT("  Version: %s %s\n", productName(), productVersion());
}

int main()
{
versionDump();
}

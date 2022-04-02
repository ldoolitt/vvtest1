#include "verilated_config.h"
#include <stdio.h>
#include <string>
#include <sstream>
#include "config_build.h"
#include "config_rev.h"

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

// as found in src/V3String.h
template <class T> std::string cvtToStr(const T& t) {
    std::ostringstream os;
    os << t;
    return os.str();
}

// As found in src/VlcMain.cpp
std::string version() {
    std::string ver = DTVERSION;
    ver += " rev " + cvtToStr(DTVERSION_rev);
    return ver;
}

int main()
{
// versionDump();
cout << version() << endl;
}

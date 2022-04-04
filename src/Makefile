srcdir = .
PYTHON3 = /usr/bin/python3
incdir = $(srcdir)/../include

vpath %.h .
vpath %.cpp .
CXXFLAGS = -Wall -I ../include -I . -I $(incdir)

UNDER_GIT = $(wildcard ${srcdir}/../.git/logs/HEAD)

ifneq ($(VERILATOR_NO_OPT_BUILD),1)  # Faster laptop development... don't rebuild each commit
 ifneq ($(UNDER_GIT),)  # If local git tree... else don't burden users
GIT_CHANGE_DEP = ${srcdir}/../.git/logs/HEAD
 endif
endif

all: vvtest1

prefiles::
prefiles:: config_rev.h
# This output goes into srcdir if locally configured, as we need to distribute it as part of the kit.
config_rev.h:   ${srcdir}/config_rev $(GIT_CHANGE_DEP)
	$(PYTHON3) ${srcdir}/config_rev ${srcdir} >$@

vvtest1: config_rev.h

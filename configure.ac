# DESCRIPTION: Process this file with autoconf to produce a configure script.

AC_INIT([Vvtest1],[4.221 devel],
        [https://verilator.org],
        [verilator],[https://verilator.org])
# When releasing, also update header of Changes file
# and commit using "devel release" or "Version bump" message
# Then 'make maintainer-dist'

AC_CONFIG_HEADER(src/config_build.h)
AC_CONFIG_FILES(Makefile src/Makefile include/verilated_config.h verilator-config-version.cmake)

# Version
AC_MSG_RESULT([configuring for $PACKAGE_STRING])
PACKAGE_VERSION_NUMBER=`AS_ECHO("$PACKAGE_VERSION") | sed 's/ .*//g'`
AC_SUBST(PACKAGE_VERSION_NUMBER)
AC_DEFINE_UNQUOTED([PACKAGE_VERSION_NUMBER_STRING],["$PACKAGE_VERSION_NUMBER"],[Package version as a number])
VERILATOR_VERSION_INTEGER=`AS_ECHO("$PACKAGE_VERSION") | [sed 's/\([0-9]\)\.\([0-9][0-9][0-9]\) .*/\1\2000/g']`
AC_SUBST(VERILATOR_VERSION_INTEGER)

AC_PATH_PROG(PYTHON3,python3)
if test "x$PYTHON3" = "x" ; then
   AC_MSG_ERROR([Cannot find "python3" in your PATH, please install it])
fi

AC_OUTPUT
AC_MSG_RESULT([Now type 'make'.])

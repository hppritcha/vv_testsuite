#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.59])
AC_INIT([OpenShmem Verfication and Validation TestSuite], [0.9], [mvapich-discuss@cse.ohio-state.edu])
AC_CONFIG_SRCDIR([cray/sma1/align.c])
AC_CONFIG_AUX_DIR(config)
AC_CONFIG_MACRO_DIR(config)
AC_CONFIG_HEADERS(config.h)

AM_INIT_AUTOMAKE([1.11 dist-bzip2 foreign -Wall -Werror subdir-objects parallel-tests tar-ustar])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AC_ARG_WITH([oshrun-launcher],
    [AC_HELP_STRING([--with-oshrun-launcher],
                    [Set launcher to be used by oshrun launcher wrapper. (default: auto)])])

AC_ARG_ENABLE([fortran],
    [AC_HELP_STRING([--disable-fortran],
                    [Disable building the Fortran bindings (default: enabled)])])

# Checks for oshcc
AC_PROG_CC([oshcc])
# Checks for oshfort
AS_IF([test "$enable_fortran" != "no"],
      [PAC_PROG_FC_CRAY_POINTER([FC=oshfort
                                 FCFLAGS="$FCFLAGS $CRAYPTR_FCFLAGS"],
                                [FC=])],
      [FC=])

# Checks for oshCC
AC_PROG_CXX([oshCC])

# Checks for oshrun
AC_CHECK_PROG([OSHRUN], [oshrun], [oshrun])
AS_IF([test "$OSHRUN" != ""],
     [ TEST_RUNNER='oshrun -np $(NPROCS)'],[echo "nothing to set"])
AC_SUBST(TEST_RUNNER)

# Checks for libraries.
#AC_SEARCH_LIBS([sqrt], [m])

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h string.h sys/time.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_INLINE

# Checks for library functions.
AC_CHECK_FUNC([shmem_barrier_all], [oshm_library=yes])
AC_CHECK_FUNC([shmemx_int_put_nb], [oshmx_have_put_nb=yes])
AC_CHECK_FUNC([shmemx_broadcast], [oshmx_have_broadcast=yes])

AS_IF([test "$oshmx_have_put_nb" = "yes"],
      [AC_DEFINE([OSHMX_HAVE_PUT_NB], [1], [Defined to 1 shmemx_int_put_nb is defined ])],
      [AC_DEFINE([OSHMX_HAVE_PUT_NB], [0], [Defined to 1 shmemx_int_put_nb is defined ])])

AS_IF([test "$oshmx_have_broadcast" = "yes"],
      [AC_DEFINE([OSHMX_HAVE_BROADCAST], [1], [Defined to 1 shmemx_broadcast is defined ])],
      [AC_DEFINE([OSHMX_HAVE_BROADCAST], [0], [Defined to 1 shmemx_broadcast is defined ])])

AM_CONDITIONAL([OSHM], [test "$oshm_library" = "yes"])
AM_CONDITIONAL([HAVE_CXX], [test "$enable_cxx" != "no" ])
AM_CONDITIONAL([HAVE_FORTRAN], [test "$FC" != ""])

AC_CONFIG_FILES([Makefile
                 cray/Makefile
                 cray/sma1/Makefile
                 cray/sma2/Makefile
                 uh/Makefile
                 uh/error_tests/Makefile
                 uh/error_tests/Fortran/atomic/Makefile
                 uh/error_tests/Fortran/Makefile
                 uh/error_tests/Fortran/transfer/Makefile
                 uh/feature_tests/Makefile
                 uh/feature_tests/C/Makefile
                 uh/feature_tests/Fortran/Makefile
                 uh/feature_tests/Fortran/accessibility/Makefile
                 uh/feature_tests/Fortran/alloc/Makefile
                 uh/feature_tests/Fortran/atomic/Makefile
                 uh/feature_tests/Fortran/broadcast/Makefile
                 uh/feature_tests/Fortran/collect/Makefile
                 uh/feature_tests/Fortran/reductions/Makefile
                 uh/feature_tests/Fortran/transfer/Makefile
])
AC_OUTPUT

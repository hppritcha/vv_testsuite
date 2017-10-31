dnl
dnl
dnl /*D
dnl PAC_PROG_FC_CRAY_POINTER - Check if Fortran supports Cray-style pointer.
dnl                            If so, set pac_cv_prog_fc_has_pointer to yes
dnl                            and find out if any extra compiler flag is
dnl                            needed and set it as CRAYPTR_FCFLAGS.
dnl                            i.e. CRAYPTR_FCFLAGS is meaningful only if
dnl                            pac_cv_prog_fc_has_pointer = yes.
dnl
dnl Synopsis:
dnl   PAC_PROG_FC_CRAY_POINTER([action-if-true],[action-if-false])
dnl D*/
AC_DEFUN([PAC_PROG_FC_CRAY_POINTER],[
AC_CACHE_CHECK([whether Fortran 90 supports Cray-style pointer],
pac_cv_prog_fc_has_pointer,[
AC_LANG_PUSH([Fortran])
AC_LANG_CONFTEST([
    AC_LANG_PROGRAM([],[
        integer M
        pointer (MPTR,M)
        data MPTR/0/
    ])
])
saved_FCFLAGS="$FCFLAGS"
pac_cv_prog_fc_has_pointer=no
CRAYPTR_FCFLAGS=""
for ptrflag in '' '-fcray-pointer' ; do
    FCFLAGS="$saved_FCFLAGS $ptrflag"
    AC_COMPILE_IFELSE([],[
        pac_cv_prog_fc_has_pointer=yes
        CRAYPTR_FCFLAGS="$ptrflag"
        break
    ])
done
dnl Restore FCFLAGS first, since user may not want to modify FCFLAGS
FCFLAGS="$saved_FCFLAGS"
dnl remove conftest after ac_lang_conftest
rm -f conftest.$ac_ext
AC_LANG_POP([Fortran])
])
if test "$pac_cv_prog_fc_has_pointer" = "yes" ; then
    AC_MSG_CHECKING([for Fortran 90 compiler flag for Cray-style pointer])
    if test "X$CRAYPTR_FCFLAGS" != "X" ; then
        AC_MSG_RESULT([$CRAYPTR_FCFLAGS])
    else
        AC_MSG_RESULT([none])
    fi
    ifelse([$1],[],[:],[$1])
else
    ifelse([$2],[],[:],[$2])
fi
])


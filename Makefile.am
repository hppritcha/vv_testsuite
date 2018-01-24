# -*- Makefile -*-
#

ACLOCAL_AMFLAGS = -I config

EXTRA_DIST = README NEWS

BUILT_SOURCES = alarm_glue.mod
CLEANFILES =*.mod

alarm_glue.mod: test_utils/alarm_glue.f90
	$(FC) -c $<

SUBDIRS =

check_PROGRAMS = \
	cray/sma1/align \
	cray/sma1/all_and_int_ext \
	cray/sma1/all_max_double_ext \
	cray/sma1/all_min_double_ext \
	cray/sma1/all_or_int_ext \
	cray/sma1/all_prod_double_ext \
	cray/sma1/all_sum_double_ext \
	cray/sma1/all_xor_int_ext \
	cray/sma1/shmalloc_loop \
	cray/sma1/shmalloc_shrealloc \
	cray/sma1/shmem_both_put_nb_size \
	cray/sma1/shmem_broadcast_all \
	cray/sma1/shmem_finc_cswap \
	cray/sma1/shmem_finc_fadd \
	cray/sma1/shmem_finc_only \
	cray/sma1/shmem_finc_swap \
	cray/sma1/shmem_global_exit \
	cray/sma1/shmem_lock_set_clear \
	cray/sma1/shmem_lock_test_clear \
	cray/sma1/shmem_long_finc_only \
	cray/sma1/shmem_long_finc_swap \
	cray/sma1/shmem_num_get \
	cray/sma1/shmem_num_put \
	cray/sma1/shmem_num_put_nb \
	cray/sma1/shmem_num_put_nb_size \
	cray/sma1/shmem_num_put_size \
	cray/sma1/shmem_swap_only \
	cray/sma1/shmem_type_g \
	cray/sma1/shmem_type_get \
	cray/sma1/shmem_type_p \
	cray/sma1/shmem_type_put \
	cray/sma1/shmem_type_put_nb


check_PROGRAMS += \
	cray/sma2/all_and_alltypes \
	cray/sma2/all_max_alltypes \
	cray/sma2/all_min_alltypes \
	cray/sma2/all_or_alltypes \
	cray/sma2/all_prod_alltypes \
	cray/sma2/all_sum_alltypes \
	cray/sma2/all_xor_alltypes

cray_sma2_all_and_alltypes_SOURCES = cray/sma2/all_and_alltypes.cpp
cray_sma2_all_max_alltypes_SOURCES = cray/sma2/all_max_alltypes.cpp
cray_sma2_all_min_alltypes_SOURCES = cray/sma2/all_min_alltypes.cpp
cray_sma2_all_or_alltypes_SOURCES = cray/sma2/all_or_alltypes.cpp
cray_sma2_all_prod_alltypes_SOURCES = cray/sma2/all_prod_alltypes.cpp
cray_sma2_all_sum_alltypes_SOURCES = cray/sma2/all_sum_alltypes.cpp
cray_sma2_all_xor_alltypes_SOURCES = cray/sma2/all_xor_alltypes.cpp

check_PROGRAMS += \
	sos/unit/hello \
	sos/unit/pi \
	sos/unit/micro_unit_shmem \
	sos/unit/circular_shift \
	sos/unit/accessible_ping \
	sos/unit/max_reduction \
	sos/unit/big_reduction \
	sos/unit/to_all \
	sos/unit/strided_put \
	sos/unit/barrier \
	sos/unit/bcast \
	sos/unit/put1 \
	sos/unit/get1 \
	sos/unit/swap1 \
	sos/unit/ping \
	sos/unit/pingpong \
	sos/unit/shmalloc \
	sos/unit/shmem_calloc \
	sos/unit/shrealloc \
	sos/unit/shmemalign \
	sos/unit/get_g \
	sos/unit/iput32 \
	sos/unit/iput64 \
	sos/unit/iput128 \
	sos/unit/iput_short \
	sos/unit/iput_double \
	sos/unit/iput_float \
	sos/unit/iput_long \
	sos/unit/iput_longdouble \
	sos/unit/iput_longlong \
	sos/unit/sping \
	sos/unit/pingpong-short \
	sos/unit/ipgm \
	sos/unit/iput-iget \
	sos/unit/swapm \
	sos/unit/cswap \
	sos/unit/waituntil \
	sos/unit/atomic_inc \
	sos/unit/set_lock \
	sos/unit/test_lock \
	sos/unit/test_lock_cswap \
	sos/unit/fcollect64 \
	sos/unit/bigput \
	sos/unit/bigget \
	sos/unit/ns \
	sos/unit/bcast_flood \
	sos/unit/lfinc \
	sos/unit/shmem_info \
	sos/unit/global_exit \
	sos/unit/asym_alloc \
	sos/unit/set_fetch \
	sos/unit/alltoall \
	sos/unit/alltoalls \
	sos/unit/c11_test_shmem_g \
	sos/unit/c11_test_shmem_get \
	sos/unit/c11_test_shmem_p \
	sos/unit/c11_test_shmem_put \
	sos/unit/c11_test_shmem_atomic_fetch \
	sos/unit/c11_test_shmem_atomic_set \
	sos/unit/c11_test_shmem_atomic_add \
	sos/unit/c11_test_shmem_atomic_inc \
	sos/unit/c11_test_shmem_atomic_and \
	sos/unit/c11_test_shmem_atomic_or \
	sos/unit/c11_test_shmem_atomic_xor \
	sos/unit/c11_test_shmem_atomic_swap \
	sos/unit/c11_test_shmem_atomic_cswap \
	sos/unit/c11_test_shmem_wait_until \
	sos/unit/c11_test_shmem_test \
	sos/unit/get_nbi \
	sos/unit/put_nbi \
	sos/unit/rma_coverage \
	sos/unit/collect \
	sos/unit/repeated_barriers \
	sos/unit/repeated_syncs \
	sos/unit/broadcast_active_set \
	sos/unit/reduce_active_set \
	sos/unit/collect_active_set \
	sos/unit/pcontrol \
	sos/unit/atomic_bitwise \
	sos/unit/nop_collectives \
	sos/unit/self_collectives \
	sos/unit/zero_comm \
	sos/unit/sync-size \
	sos/unit/shmem_ctx_pipelined_reduce \
	sos/unit/many-ctx \
	sos/unit/shmem_test

XFAIL_TESTS = sos/unit/global_exit

if HAVE_CXX

# SOS C++ Tests

check_PROGRAMS += \
	sos/unit/cxx_test_shmem_complex \
	sos/unit/cxx_test_shmem_g \
	sos/unit/cxx_test_shmem_get \
	sos/unit/cxx_test_shmem_p \
	sos/unit/cxx_test_shmem_put \
	sos/unit/cxx_test_shmem_atomic_fetch \
	sos/unit/cxx_test_shmem_atomic_set \
	sos/unit/cxx_test_shmem_atomic_add \
	sos/unit/cxx_test_shmem_atomic_inc \
	sos/unit/cxx_test_shmem_atomic_and \
	sos/unit/cxx_test_shmem_atomic_or \
	sos/unit/cxx_test_shmem_atomic_xor \
	sos/unit/cxx_test_shmem_atomic_swap \
	sos/unit/cxx_test_shmem_atomic_cswap \
	sos/unit/cxx_test_shmem_wait_until \
	sos/unit/cxx_test_shmem_test

sos_unit_cxx_test_shmem_complex_SOURCES = sos/unit/cxx_test_shmem_complex.cpp
sos_unit_cxx_test_shmem_g_SOURCES = sos/unit/cxx_test_shmem_g.cpp
sos_unit_cxx_test_shmem_get_SOURCES = sos/unit/cxx_test_shmem_get.cpp
sos_unit_cxx_test_shmem_p_SOURCES = sos/unit/cxx_test_shmem_p.cpp
sos_unit_cxx_test_shmem_put_SOURCES = sos/unit/cxx_test_shmem_put.cpp
sos_unit_cxx_test_shmem_atomic_fetch_SOURCES = sos/unit/cxx_test_shmem_atomic_fetch.cpp
sos_unit_cxx_test_shmem_atomic_set_SOURCES = sos/unit/cxx_test_shmem_atomic_set.cpp
sos_unit_cxx_test_shmem_atomic_add_SOURCES = sos/unit/cxx_test_shmem_atomic_add.cpp
sos_unit_cxx_test_shmem_atomic_inc_SOURCES = sos/unit/cxx_test_shmem_atomic_inc.cpp
sos_unit_cxx_test_shmem_atomic_and_SOURCES = sos/unit/cxx_test_shmem_atomic_and.cpp
sos_unit_cxx_test_shmem_atomic_or_SOURCES = sos/unit/cxx_test_shmem_atomic_or.cpp
sos_unit_cxx_test_shmem_atomic_xor_SOURCES = sos/unit/cxx_test_shmem_atomic_xor.cpp
sos_unit_cxx_test_shmem_atomic_swap_SOURCES = sos/unit/cxx_test_shmem_atomic_swap.cpp
sos_unit_cxx_test_shmem_atomic_cswap_SOURCES = sos/unit/cxx_test_shmem_atomic_cswap.cpp
sos_unit_cxx_test_shmem_wait_until_SOURCES = sos/unit/cxx_test_shmem_wait_until.cpp
sos_unit_cxx_test_shmem_test_SOURCES = sos/unit/cxx_test_shmem_test.cpp
endif

if HAVE_FORTRAN
check_PROGRAMS += \
	sos/unit/hello_f \
	sos/unit/shmem_info_f \
	sos/unit/complex_reductions_f \
	sos/unit/set_fetch_f

# Fortran Tests (only .c tests use automatic _SOURCES)
sos_unit_hello_f_SOURCES = sos/unit/hello_f.f90
sos_unit_complex_reductions_f_SOURCES = sos/unit/complex_reductions_f.f90
sos_unit_shmem_info_f_SOURCES = sos/unit/shmem_info_f.f90
sos_unit_set_fetch_f_SOURCES = sos/unit/set_fetch_f.f90
endif

check_PROGRAMS += \
	uh/feature_tests/C/test_shmem_accessible \
	uh/feature_tests/C/test_shmem_atomics \
	uh/feature_tests/C/test_shmem_barrier \
	uh/feature_tests/C/test_shmem_broadcast \
	uh/feature_tests/C/test_shmem_collects \
	uh/feature_tests/C/test_shmem_finalize \
	uh/feature_tests/C/test_shmem_get \
	uh/feature_tests/C/test_shmem_get_globals \
	uh/feature_tests/C/test_shmem_get_shmem_malloc \
	uh/feature_tests/C/test_shmem_global_exit \
	uh/feature_tests/C/test_shmem_lock \
	uh/feature_tests/C/test_shmem_put \
	uh/feature_tests/C/test_shmem_put_globals \
	uh/feature_tests/C/test_shmem_put_shmem_malloc \
	uh/feature_tests/C/test_shmem_query \
	uh/feature_tests/C/test_shmem_reduction \
	uh/feature_tests/C/test_shmem_synchronization \
	uh/feature_tests/C/test_shmem_zero_get \
	uh/feature_tests/C/test_shmem_zero_put

XFAIL_TESTS += uh/feature_tests/C/test_shmem_global_exit

check_PROGRAMS += \
	uh/performance_tests/micro_benchmarks/barrier_performance \
	uh/performance_tests/micro_benchmarks/broadcast32_performance \
	uh/performance_tests/micro_benchmarks/collect32_performance \
	uh/performance_tests/micro_benchmarks/fcollect32_performance \
	uh/performance_tests/micro_benchmarks/get_performance \
	uh/performance_tests/micro_benchmarks/put_performance

if HAVE_FORTRAN
check_PROGRAMS += \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_01 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_02 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_char \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_double \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_int4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_int8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_logical \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_real4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_real8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_char \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_double \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_int4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_int8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_logical \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_real4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_real8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_char \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_double \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_int4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_int8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_logical \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_real4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_real8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_char \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_double \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_int4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_int8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_logical \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_real4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_real8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_char \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_double \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_int4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_int8 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_logical \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_real4 \
	uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_real8 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_char \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_double\
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_int4 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_int8 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_logical \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_real4 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_real8 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_char \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_double \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_int4 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_int8 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_logical \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_real4 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_real8 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_char \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_double \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_int4 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_int8 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_logical \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_real4 \
	uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_real8 \
	uh/feature_tests/Fortran/atomic/test_shmem_add_01_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_add_01_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_add_02_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_add_02_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_add_03_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_add_03_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_cswap_01_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_cswap_01_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_cswap_02_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_cswap_02_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_cswap_03_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_cswap_03_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_fadd_01_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_fadd_01_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_finc_01_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_finc_01_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_finc_02_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_finc_02_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_finc_03_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_finc_03_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_inc_01_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_inc_01_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_inc_02_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_inc_02_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_inc_03_int4  \
	uh/feature_tests/Fortran/atomic/test_shmem_inc_03_int8  \
	uh/feature_tests/Fortran/atomic/test_shmem_swap_01_int4 \
	uh/feature_tests/Fortran/atomic/test_shmem_swap_01_int8 \
	uh/feature_tests/Fortran/atomic/test_shmem_swap_02_int4 \
	uh/feature_tests/Fortran/atomic/test_shmem_swap_02_int8 \
	uh/feature_tests/Fortran/atomic/test_shmem_swap_03_int4 \
	uh/feature_tests/Fortran/atomic/test_shmem_swap_03_int8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_char \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_double \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_int4  \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_int8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_logical \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_real4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_real8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_char  \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_double \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_int4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_int8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_logical \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_real4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_real8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_char \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_double \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_int4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_int8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_logical \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_real4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_real8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_char \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_double \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_int4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_int8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_logical \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_real4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_real8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_char \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_double \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_int4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_int8 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_logical \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_real4 \
	uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_real8 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_01_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_01_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_02_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_02_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_03_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_03_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_04_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_04_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_01_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_01_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_02_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_02_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_03_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_03_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_04_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_add_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_add_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_cswap_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_cswap_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_05_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_05_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_05_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_05_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_05_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_05_int8 \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_char \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_char \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_char \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_char \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_real4

XFAIL_TESTS += \
	uh/error_tests/Fortran/atomic/test_shmem_add_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_add_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_cswap_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_cswap_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_05_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_finc_05_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_05_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_inc_05_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_04_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_04_int8 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_05_int4 \
	uh/error_tests/Fortran/atomic/test_shmem_swap_05_int8 \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_char \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_get_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_char \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_get_05_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iput_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iput_05_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iget_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_iget_05_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_char \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_double \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_logical \
	uh/error_tests/Fortran/transfer/test_shmem_put_04_real4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_char \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_double \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_int4 \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_logical \
	uh/error_tests/Fortran/transfer/test_shmem_put_05_real4 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_04_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_collect_04_int8 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_04_int4 \
	uh/feature_tests/Fortran/collect/test_shmem_fcollect_04_int8

uh_error_tests_Fortran_atomic_test_shmem_add_04_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_add_04_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_add_04_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_add_04_int8.f90
uh_error_tests_Fortran_atomic_test_shmem_cswap_04_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_cswap_04_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_cswap_04_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_cswap_04_int8.f90
uh_error_tests_Fortran_atomic_test_shmem_finc_04_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_finc_04_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_finc_04_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_finc_04_int8.f90
uh_error_tests_Fortran_atomic_test_shmem_finc_05_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_finc_05_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_finc_05_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_finc_05_int8.f90
uh_error_tests_Fortran_atomic_test_shmem_inc_04_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_inc_04_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_inc_04_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_inc_04_int8.f90
uh_error_tests_Fortran_atomic_test_shmem_inc_05_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_inc_05_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_inc_05_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_inc_05_int8.f90
uh_error_tests_Fortran_atomic_test_shmem_swap_04_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_swap_04_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_swap_04_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_swap_04_int8.f90
uh_error_tests_Fortran_atomic_test_shmem_swap_05_int4_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_swap_05_int4.f90
uh_error_tests_Fortran_atomic_test_shmem_swap_05_int8_SOURCES = uh/error_tests/Fortran/atomic/test_shmem_swap_05_int8.f90
uh_error_tests_Fortran_transfer_test_shmem_get_04_char_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_04_char.f90
uh_error_tests_Fortran_transfer_test_shmem_get_04_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_04_double.f90
uh_error_tests_Fortran_transfer_test_shmem_get_04_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_04_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_get_04_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_04_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_get_04_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_04_real4.f90
uh_error_tests_Fortran_transfer_test_shmem_get_05_char_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_05_char.f90
uh_error_tests_Fortran_transfer_test_shmem_get_05_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_05_double.f90
uh_error_tests_Fortran_transfer_test_shmem_get_05_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_05_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_get_05_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_05_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_get_05_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_get_05_real4.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_04_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_04_double.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_04_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_04_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_04_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_04_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_04_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_04_real4.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_05_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_05_double.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_05_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_05_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_05_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_05_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_iget_05_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iget_05_real4.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_04_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_04_double.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_04_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_04_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_04_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_04_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_04_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_04_real4.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_05_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_05_double.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_05_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_05_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_05_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_05_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_iput_05_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_iput_05_real4.f90
uh_error_tests_Fortran_transfer_test_shmem_put_04_char_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_04_char.f90
uh_error_tests_Fortran_transfer_test_shmem_put_04_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_04_double.f90
uh_error_tests_Fortran_transfer_test_shmem_put_04_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_04_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_put_04_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_04_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_put_04_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_04_real4.f90
uh_error_tests_Fortran_transfer_test_shmem_put_05_char_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_05_char.f90
uh_error_tests_Fortran_transfer_test_shmem_put_05_double_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_05_double.f90
uh_error_tests_Fortran_transfer_test_shmem_put_05_int4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_05_int4.f90
uh_error_tests_Fortran_transfer_test_shmem_put_05_logical_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_05_logical.f90
uh_error_tests_Fortran_transfer_test_shmem_put_05_real4_SOURCES = uh/error_tests/Fortran/transfer/test_shmem_put_05_real4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_01_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_01.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_02_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_02.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_01_char_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_char.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_01_double_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_double.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_01_int4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_int4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_01_int8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_int8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_01_logical_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_logical.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_01_real4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_real4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_01_real8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_01_real8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_02_char_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_char.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_02_double_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_double.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_02_int4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_int4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_02_int8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_int8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_02_logical_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_logical.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_02_real4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_real4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_02_real8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_02_real8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_03_char_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_char.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_03_double_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_double.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_03_int4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_int4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_03_int8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_int8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_03_logical_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_logical.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_03_real4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_real4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_03_real8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_03_real8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_04_char_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_char.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_04_double_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_double.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_04_int4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_int4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_04_int8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_int8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_04_logical_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_logical.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_04_real4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_real4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_04_real8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_04_real8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_05_char_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_char.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_05_double_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_double.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_05_int4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_int4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_05_int8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_int8.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_05_logical_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_logical.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_05_real4_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_real4.f90
uh_feature_tests_Fortran_accessibility_test_shmem_acc_mem_05_real8_SOURCES = uh/feature_tests/Fortran/accessibility/test_shmem_acc_mem_05_real8.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_01_char_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_char.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_01_double_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_double.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_01_int4_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_int4.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_01_int8_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_int8.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_01_logical_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_logical.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_01_real4_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_real4.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_01_real8_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_01_real8.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_02_char_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_char.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_02_double_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_double.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_02_int4_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_int4.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_02_int8_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_int8.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_02_logical_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_logical.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_02_real4_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_real4.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_02_real8_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_02_real8.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_03_char_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_char.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_03_double_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_double.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_03_int4_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_int4.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_03_int8_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_int8.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_03_logical_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_logical.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_03_real4_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_real4.f90
uh_feature_tests_Fortran_alloc_test_shmem_shpalloc_03_real8_SOURCES = uh/feature_tests/Fortran/alloc/test_shmem_shpalloc_03_real8.f90
uh_feature_tests_Fortran_atomic_test_shmem_add_01_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_add_01_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_add_01_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_add_01_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_cswap_01_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_cswap_01_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_cswap_01_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_cswap_01_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_fadd_01_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_fadd_01_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_fadd_01_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_fadd_01_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_finc_01_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_finc_01_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_finc_01_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_finc_01_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_inc_01_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_inc_01_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_inc_01_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_inc_01_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_swap_01_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_swap_01_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_swap_01_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_swap_01_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_add_02_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_add_02_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_add_02_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_add_02_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_cswap_02_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_cswap_02_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_cswap_02_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_cswap_02_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_finc_02_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_finc_02_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_finc_02_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_finc_02_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_inc_02_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_inc_02_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_inc_02_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_inc_02_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_swap_02_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_swap_02_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_swap_02_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_swap_02_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_add_03_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_add_03_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_add_03_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_add_03_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_cswap_03_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_cswap_03_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_cswap_03_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_cswap_03_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_finc_03_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_finc_03_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_finc_03_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_finc_03_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_inc_03_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_inc_03_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_inc_03_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_inc_03_int8.f90
uh_feature_tests_Fortran_atomic_test_shmem_swap_03_int4_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_swap_03_int4.f90
uh_feature_tests_Fortran_atomic_test_shmem_swap_03_int8_SOURCES = uh/feature_tests/Fortran/atomic/test_shmem_swap_03_int8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_01_char_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_char.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_01_double_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_double.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_01_int4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_int4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_01_int8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_int8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_01_logical_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_logical.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_01_real4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_real4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_01_real8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_01_real8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_02_char_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_char.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_02_double_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_double.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_02_int4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_int4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_02_int8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_int8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_02_logical_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_logical.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_02_real4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_real4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_02_real8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_02_real8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_03_char_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_char.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_03_double_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_double.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_03_int4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_int4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_03_int8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_int8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_03_logical_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_logical.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_03_real4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_real4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_03_real8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_03_real8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_04_char_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_char.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_04_double_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_double.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_04_int4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_int4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_04_int8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_int8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_04_logical_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_logical.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_04_real4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_real4.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_04_real8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_04_real8.f90
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_05_char_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_char.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_05_double_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_double.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_05_int4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_int4.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_05_int8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_int8.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_05_logical_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_logical.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_05_real4_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_real4.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_broadcast_test_shmem_broadcast_05_real8_SOURCES = uh/feature_tests/Fortran/broadcast/test_shmem_broadcast_05_real8.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_collect_test_shmem_collect_01_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_01_int4.f90
uh_feature_tests_Fortran_collect_test_shmem_collect_01_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_01_int8.f90
uh_feature_tests_Fortran_collect_test_shmem_collect_02_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_02_int4.f90
uh_feature_tests_Fortran_collect_test_shmem_collect_02_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_02_int8.f90
uh_feature_tests_Fortran_collect_test_shmem_collect_03_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_03_int4.f90
uh_feature_tests_Fortran_collect_test_shmem_collect_03_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_03_int8.f90
uh_feature_tests_Fortran_collect_test_shmem_fcollect_01_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_01_int4.f90
uh_feature_tests_Fortran_collect_test_shmem_fcollect_01_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_01_int8.f90
uh_feature_tests_Fortran_collect_test_shmem_fcollect_02_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_02_int4.f90
uh_feature_tests_Fortran_collect_test_shmem_fcollect_02_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_02_int8.f90
uh_feature_tests_Fortran_collect_test_shmem_fcollect_03_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_03_int4.f90
uh_feature_tests_Fortran_collect_test_shmem_fcollect_03_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_03_int8.f90
uh_feature_tests_Fortran_collect_test_shmem_collect_04_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_04_int4.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_collect_test_shmem_collect_04_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_collect_04_int8.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_collect_test_shmem_fcollect_04_int4_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_04_int4.f90 test_utils/alarm_it.c alarm_glue.mod
uh_feature_tests_Fortran_collect_test_shmem_fcollect_04_int8_SOURCES = uh/feature_tests/Fortran/collect/test_shmem_fcollect_04_int8.f90 test_utils/alarm_it.c alarm_glue.mod

endif

TESTS = $(check_PROGRAMS)

bin_PROGRAMS= $(check_PROGRAMS)
NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

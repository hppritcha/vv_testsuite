# -*- Makefile -*-
#
# Copyright 2011 Sandia Corporation. Under the terms of Contract
# DE-AC04-94AL85000 with Sandia Corporation, the U.S.  Government
# retains certain rights in this software.
#
# Copyright (c) 2016 Intel Corporation. All rights reserved.
# This software is available to you under the BSD license.
#
# This file is part of the Sandia OpenSHMEM software package. For license
# information, see the LICENSE file in the top level directory of the
# distribution.

check_PROGRAMS = \
	align \
	all_and_int_ext \
	all_max_double_ext \
	all_min_double_ext \
	all_or_int_ext \
	all_prod_double_ext \
	all_sum_double_ext \
	all_xor_int_ext \
	shmalloc_loop \
	shmalloc_shrealloc \
	shmem_both_put_nb_size \
	shmem_broadcast_all \
	shmem_finc_cswap \
	shmem_finc_fadd \
	shmem_finc_only \
	shmem_finc_swap \
	shmem_global_exit \
	shmem_lock_set_clear \
	shmem_lock_test_clear \
	shmem_long_finc_only \
	shmem_long_finc_swap \
	shmem_num_get \
	shmem_num_put \
	shmem_num_put_nb \
	shmem_num_put_nb_size \
	shmem_num_put_size \
	shmem_swap_only \
	shmem_type_g \
	shmem_type_get \
	shmem_type_p \
	shmem_type_put \
	shmem_type_put_nb

bin_PROGRAMS = $(check_PROGRAMS)

TESTS = $(check_PROGRAMS)

NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

#AM_CPPFLAGS = -I$(top_builddir)/mpp
#AM_FCFLAGS = -I$(top_builddir)/mpp
#AM_LDFLAGS = $(LIBTOOL_WRAPPER_LDFLAGS)

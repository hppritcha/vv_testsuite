# -*- Makefile -*-
#
# Copyright 2011 Sandia Corporation. Under the terms of Contract
# DE-AC04-94AL85000 with Sandia Corporation, the U.S.  Government
# retains certain rights in this software.
#
# Copyright (c) 2016 Intel Corporation. All rights reserved.
# This software is available to you under the BSD license.
#
# Copyright (c) 2017 Los Alamos National Security, LLC. All rights reserved.
#
# This file is part of the Sandia OpenSHMEM software package. For license
# information, see the LICENSE file in the top level directory of the
# distribution.

if HAVE_FORTRAN
check_PROGRAMS = \
	test_shmem_and_01_int4 \
	test_shmem_and_01_int8 \
	test_shmem_max_01_int4 \
	test_shmem_max_01_int8 \
	test_shmem_max_01_real4 \
	test_shmem_max_01_real8 \
	test_shmem_min_01_int4 \
	test_shmem_min_01_int8 \
	test_shmem_min_01_real4 \
	test_shmem_min_01_real8 \
	test_shmem_or_01_int4 \
	test_shmem_or_01_int8 \
	test_shmem_prod_01_int4 \
	test_shmem_prod_01_int8 \
	test_shmem_prod_01_real4 \
	test_shmem_prod_01_real8 \
	test_shmem_sum_01_int4 \
	test_shmem_sum_01_int8 \
	test_shmem_sum_01_real4 \
	test_shmem_sum_01_real8 \
	test_shmem_xor_01_int4 \
	test_shmem_xor_01_int8

bin_PROGRAMS = $(check_PROGRAMS)

TESTS = $(check_PROGRAMS)

NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

test_shmem_and_01_int4_SOURCES = test_shmem_and_01_int4.f90
test_shmem_and_01_int8_SOURCES = test_shmem_and_01_int8.f90
test_shmem_max_01_int4_SOURCES = test_shmem_max_01_int4.f90
test_shmem_max_01_int8_SOURCES = test_shmem_max_01_int8.f90
test_shmem_max_01_real4_SOURCES = test_shmem_max_01_real4.f90
test_shmem_max_01_real8_SOURCES = test_shmem_max_01_real8.f90
test_shmem_min_01_int4_SOURCES = test_shmem_min_01_int4.f90
test_shmem_min_01_int8_SOURCES = test_shmem_min_01_int8.f90
test_shmem_min_01_real4_SOURCES = test_shmem_min_01_real4.f90
test_shmem_min_01_real8_SOURCES = test_shmem_min_01_real8.f90
test_shmem_or_01_int4_SOURCES = test_shmem_or_01_int4.f90
test_shmem_or_01_int8_SOURCES = test_shmem_or_01_int8.f90
test_shmem_prod_01_int4_SOURCES = test_shmem_prod_01_int4.f90
test_shmem_prod_01_int8_SOURCES = test_shmem_prod_01_int8.f90
test_shmem_prod_01_real4_SOURCES = test_shmem_prod_01_real4.f90
test_shmem_prod_01_real8_SOURCES = test_shmem_prod_01_real8.f90
test_shmem_sum_01_int4_SOURCES = test_shmem_sum_01_int4.f90
test_shmem_sum_01_int8_SOURCES = test_shmem_sum_01_int8.f90
test_shmem_sum_01_real4_SOURCES = test_shmem_sum_01_real4.f90
test_shmem_sum_01_real8_SOURCES = test_shmem_sum_01_real8.f90
test_shmem_xor_01_int4_SOURCES = test_shmem_xor_01_int4.f90
test_shmem_xor_01_int8_SOURCES = test_shmem_xor_01_int8.f90

endif


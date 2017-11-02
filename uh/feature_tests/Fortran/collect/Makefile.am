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

if HAVE_FORTRAN
check_PROGRAMS = \
	test_shmem_collect_01_int4 \
	test_shmem_collect_01_int8 \
	test_shmem_collect_02_int4 \
	test_shmem_collect_02_int8 \
	test_shmem_collect_03_int4 \
	test_shmem_collect_03_int8 \
	test_shmem_collect_04_int4 \
	test_shmem_collect_04_int8 \
	test_shmem_fcollect_01_int4 \
	test_shmem_fcollect_01_int8 \
	test_shmem_fcollect_02_int4 \
	test_shmem_fcollect_02_int8 \
	test_shmem_fcollect_03_int4 \
	test_shmem_fcollect_03_int8 \
	test_shmem_fcollect_04_int4 \
	test_shmem_fcollect_04_int8

bin_PROGRAMS = $(check_PROGRAMS)

TESTS = $(check_PROGRAMS)
XFAIL_TESTS = test_shmem_collect_04_int4 \
		test_shmem_collect_04_int8 \
		test_shmem_fcollect_04_int4 \
		test_shmem_fcollect_04_int8

NPROCS ?= 3
LOG_COMPILER = $(TEST_RUNNER)

test_shmem_collect_01_int4_SOURCES = test_shmem_collect_01_int4.f90
test_shmem_collect_01_int8_SOURCES = test_shmem_collect_01_int8.f90
test_shmem_collect_02_int4_SOURCES = test_shmem_collect_02_int4.f90
test_shmem_collect_02_int8_SOURCES = test_shmem_collect_02_int8.f90
test_shmem_collect_03_int4_SOURCES = test_shmem_collect_03_int4.f90
test_shmem_collect_03_int8_SOURCES = test_shmem_collect_03_int8.f90
test_shmem_collect_04_int4_SOURCES = test_shmem_collect_04_int4.f90
test_shmem_collect_04_int8_SOURCES = test_shmem_collect_04_int8.f90
test_shmem_fcollect_01_int4_SOURCES = test_shmem_fcollect_01_int4.f90
test_shmem_fcollect_01_int8_SOURCES = test_shmem_fcollect_01_int8.f90
test_shmem_fcollect_02_int4_SOURCES = test_shmem_fcollect_02_int4.f90
test_shmem_fcollect_02_int8_SOURCES = test_shmem_fcollect_02_int8.f90
test_shmem_fcollect_03_int4_SOURCES = test_shmem_fcollect_03_int4.f90
test_shmem_fcollect_03_int8_SOURCES = test_shmem_fcollect_03_int8.f90
test_shmem_fcollect_04_int4_SOURCES = test_shmem_fcollect_04_int4.f90
test_shmem_fcollect_04_int8_SOURCES = test_shmem_fcollect_04_int8.f90

endif


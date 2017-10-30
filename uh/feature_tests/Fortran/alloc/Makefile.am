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
	test_shmem_shpalloc_01_char \
	test_shmem_shpalloc_01_double\
	test_shmem_shpalloc_01_int4 \
	test_shmem_shpalloc_01_int8 \
	test_shmem_shpalloc_01_logical \
	test_shmem_shpalloc_01_real4 \
	test_shmem_shpalloc_01_real8 \
	test_shmem_shpalloc_02_char \
	test_shmem_shpalloc_02_double \
	test_shmem_shpalloc_02_int4 \
	test_shmem_shpalloc_02_int8 \
	test_shmem_shpalloc_02_logical \
	test_shmem_shpalloc_02_real4 \
	test_shmem_shpalloc_02_real8 \
	test_shmem_shpalloc_03_char \
	test_shmem_shpalloc_03_double \
	test_shmem_shpalloc_03_int4 \
	test_shmem_shpalloc_03_int8 \
	test_shmem_shpalloc_03_logical \
	test_shmem_shpalloc_03_real4 \
	test_shmem_shpalloc_03_real8

bin_PROGRAMS = $(check_PROGRAMS)

TESTS = $(check_PROGRAMS)

NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

test_shmem_shpalloc_01_char_SOURCES = test_shmem_shpalloc_01_char.f90
test_shmem_shpalloc_01_double_SOURCES = test_shmem_shpalloc_01_double.f90
test_shmem_shpalloc_01_int4_SOURCES = test_shmem_shpalloc_01_int4.f90
test_shmem_shpalloc_01_int8_SOURCES = test_shmem_shpalloc_01_int8.f90
test_shmem_shpalloc_01_logical_SOURCES = test_shmem_shpalloc_01_logical.f90
test_shmem_shpalloc_01_real4_SOURCES = test_shmem_shpalloc_01_real4.f90
test_shmem_shpalloc_01_real8_SOURCES = test_shmem_shpalloc_01_real8.f90
test_shmem_shpalloc_02_char_SOURCES = test_shmem_shpalloc_02_char.f90
test_shmem_shpalloc_02_double_SOURCES = test_shmem_shpalloc_02_double.f90
test_shmem_shpalloc_02_int4_SOURCES = test_shmem_shpalloc_02_int4.f90
test_shmem_shpalloc_02_int8_SOURCES = test_shmem_shpalloc_02_int8.f90
test_shmem_shpalloc_02_logical_SOURCES = test_shmem_shpalloc_02_logical.f90
test_shmem_shpalloc_02_real4_SOURCES = test_shmem_shpalloc_02_real4.f90
test_shmem_shpalloc_02_real8_SOURCES = test_shmem_shpalloc_02_real8.f90
test_shmem_shpalloc_03_char_SOURCES = test_shmem_shpalloc_03_char.f90
test_shmem_shpalloc_03_double_SOURCES = test_shmem_shpalloc_03_double.f90
test_shmem_shpalloc_03_int4_SOURCES = test_shmem_shpalloc_03_int4.f90
test_shmem_shpalloc_03_int8_SOURCES = test_shmem_shpalloc_03_int8.f90
test_shmem_shpalloc_03_logical_SOURCES = test_shmem_shpalloc_03_logical.f90
test_shmem_shpalloc_03_real4_SOURCES = test_shmem_shpalloc_03_real4.f90
test_shmem_shpalloc_03_real8_SOURCES = test_shmem_shpalloc_03_real8.f90

endif


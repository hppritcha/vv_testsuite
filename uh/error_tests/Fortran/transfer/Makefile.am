# -*- Makefile -*-
#
# Copyright 2011 Sandia Corporation. Under the terms of Contract
# DE-AC04-94AL85000 with Sandia Corporation, the U.S.  Government
# retains certain rights in this software.
#
# Copyright (c) 2016 Intel Corporation. All rights reserved.
# This software is available to you under the BSD license.
#
# Copyright (c) 2017 Los Alamos National Security, LLC. All rights
# reserved.
#
# This file is part of the Sandia OpenSHMEM software package. For license
# information, see the LICENSE file in the top level directory of the
# distribution.

if HAVE_FORTRAN
check_PROGRAMS = \
	test_shmem_get_04_char \
	test_shmem_get_04_double \
	test_shmem_get_04_int4 \
	test_shmem_get_04_logical \
	test_shmem_get_04_real4 \
	test_shmem_get_05_char \
	test_shmem_get_05_double \
	test_shmem_get_05_int4 \
	test_shmem_get_05_logical \
	test_shmem_get_05_real4 \
	test_shmem_iput_04_double \
	test_shmem_iput_04_int4 \
	test_shmem_iput_04_logical \
	test_shmem_iput_04_real4 \
	test_shmem_iput_05_double \
	test_shmem_iput_05_int4 \
	test_shmem_iput_05_logical \
	test_shmem_iput_05_real4 \
	test_shmem_iget_04_double \
	test_shmem_iget_04_int4 \
	test_shmem_iget_04_logical \
	test_shmem_iget_04_real4 \
	test_shmem_iget_05_double \
	test_shmem_iget_05_int4 \
	test_shmem_iget_05_logical \
	test_shmem_iget_05_real4 \
	test_shmem_put_04_char \
	test_shmem_put_04_double \
	test_shmem_put_04_int4 \
	test_shmem_put_04_logical \
	test_shmem_put_04_real4 \
	test_shmem_put_05_char \
	test_shmem_put_05_double \
	test_shmem_put_05_int4 \
	test_shmem_put_05_logical \
	test_shmem_put_05_real4

bin_PROGRAMS = $(check_PROGRAMS)

TESTS =  \
	test_shmem_get_04_char \
	test_shmem_get_04_double \
	test_shmem_get_04_int4 \
	test_shmem_get_04_logical \
	test_shmem_get_04_real4 \
	test_shmem_get_05_char \
	test_shmem_get_05_double \
	test_shmem_get_05_int4 \
	test_shmem_get_05_logical \
	test_shmem_get_05_real4 \
	test_shmem_iput_04_double \
	test_shmem_iput_04_int4 \
	test_shmem_iput_04_logical \
	test_shmem_iput_04_real4 \
	test_shmem_iput_05_double \
	test_shmem_iput_05_int4 \
	test_shmem_iput_05_logical \
	test_shmem_iput_05_real4 \
	test_shmem_iget_04_double \
	test_shmem_iget_04_int4 \
	test_shmem_iget_04_logical \
	test_shmem_iget_04_real4 \
	test_shmem_iget_05_double \
	test_shmem_iget_05_int4 \
	test_shmem_iget_05_logical \
	test_shmem_iget_05_real4 \
	test_shmem_put_04_char \
	test_shmem_put_04_double \
	test_shmem_put_04_int4 \
	test_shmem_put_04_logical \
	test_shmem_put_04_real4 \
	test_shmem_put_05_char \
	test_shmem_put_05_double \
	test_shmem_put_05_int4 \
	test_shmem_put_05_logical \
	test_shmem_put_05_real4

XFAIL_TESTS = \
	test_shmem_get_04_char \
	test_shmem_get_04_double \
	test_shmem_get_04_int4 \
	test_shmem_get_04_logical \
	test_shmem_get_04_real4 \
	test_shmem_get_05_char \
	test_shmem_get_05_double \
	test_shmem_get_05_int4 \
	test_shmem_get_05_logical \
	test_shmem_get_05_real4 \
	test_shmem_iput_04_double \
	test_shmem_iput_04_int4 \
	test_shmem_iput_04_logical \
	test_shmem_iput_04_real4 \
	test_shmem_iput_05_double \
	test_shmem_iput_05_int4 \
	test_shmem_iput_05_logical \
	test_shmem_iput_05_real4 \
	test_shmem_iget_04_double \
	test_shmem_iget_04_int4 \
	test_shmem_iget_04_logical \
	test_shmem_iget_04_real4 \
	test_shmem_iget_05_double \
	test_shmem_iget_05_int4 \
	test_shmem_iget_05_logical \
	test_shmem_iget_05_real4 \
	test_shmem_put_04_char \
	test_shmem_put_04_double \
	test_shmem_put_04_int4 \
	test_shmem_put_04_logical \
	test_shmem_put_04_real4 \
	test_shmem_put_05_char \
	test_shmem_put_05_double \
	test_shmem_put_05_int4 \
	test_shmem_put_05_logical \
	test_shmem_put_05_real4


NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

test_shmem_get_04_char_SOURCES = test_shmem_get_04_char.f90
test_shmem_get_04_double_SOURCES = test_shmem_get_04_double.f90
test_shmem_get_04_int4_SOURCES = test_shmem_get_04_int4.f90
test_shmem_get_04_logical_SOURCES = test_shmem_get_04_logical.f90
test_shmem_get_04_real4_SOURCES = test_shmem_get_04_real4.f90
test_shmem_get_05_char_SOURCES = test_shmem_get_05_char.f90
test_shmem_get_05_double_SOURCES = test_shmem_get_05_double.f90
test_shmem_get_05_int4_SOURCES = test_shmem_get_05_int4.f90
test_shmem_get_05_logical_SOURCES = test_shmem_get_05_logical.f90
test_shmem_get_05_real4_SOURCES = test_shmem_get_05_real4.f90
test_shmem_iget_04_double_SOURCES = test_shmem_iget_04_double.f90
test_shmem_iget_04_int4_SOURCES = test_shmem_iget_04_int4.f90
test_shmem_iget_04_logical_SOURCES = test_shmem_iget_04_logical.f90
test_shmem_iget_04_real4_SOURCES = test_shmem_iget_04_real4.f90
test_shmem_iget_05_double_SOURCES = test_shmem_iget_05_double.f90
test_shmem_iget_05_int4_SOURCES = test_shmem_iget_05_int4.f90
test_shmem_iget_05_logical_SOURCES = test_shmem_iget_05_logical.f90
test_shmem_iget_05_real4_SOURCES = test_shmem_iget_05_real4.f90
test_shmem_iput_04_double_SOURCES = test_shmem_iput_04_double.f90
test_shmem_iput_04_int4_SOURCES = test_shmem_iput_04_int4.f90
test_shmem_iput_04_logical_SOURCES = test_shmem_iput_04_logical.f90
test_shmem_iput_04_real4_SOURCES = test_shmem_iput_04_real4.f90
test_shmem_iput_05_double_SOURCES = test_shmem_iput_05_double.f90
test_shmem_iput_05_int4_SOURCES = test_shmem_iput_05_int4.f90
test_shmem_iput_05_logical_SOURCES = test_shmem_iput_05_logical.f90
test_shmem_iput_05_real4_SOURCES = test_shmem_iput_05_real4.f90
test_shmem_put_04_char_SOURCES = test_shmem_put_04_char.f90
test_shmem_put_04_double_SOURCES = test_shmem_put_04_double.f90
test_shmem_put_04_int4_SOURCES = test_shmem_put_04_int4.f90
test_shmem_put_04_logical_SOURCES = test_shmem_put_04_logical.f90
test_shmem_put_04_real4_SOURCES = test_shmem_put_04_real4.f90
test_shmem_put_05_char_SOURCES = test_shmem_put_05_char.f90
test_shmem_put_05_double_SOURCES = test_shmem_put_05_double.f90
test_shmem_put_05_int4_SOURCES = test_shmem_put_05_int4.f90
test_shmem_put_05_logical_SOURCES = test_shmem_put_05_logical.f90
test_shmem_put_05_real4_SOURCES = test_shmem_put_05_real4.f90

endif


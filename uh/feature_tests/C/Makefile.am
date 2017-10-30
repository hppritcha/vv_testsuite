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
	test_shmem_accessible \
	test_shmem_atomics \
	test_shmem_barrier \
	test_shmem_broadcast \
	test_shmem_collects \
	test_shmem_finalize \
	test_shmem_get \
	test_shmem_get_globals \
	test_shmem_get_shmem_malloc \
	test_shmem_global_exit \
	test_shmem_lock \
	test_shmem_put \
	test_shmem_put_globals \
	test_shmem_put_shmem_malloc \
	test_shmem_query \
	test_shmem_reduction \
	test_shmem_synchronization \
	test_shmem_zero_get \
	test_shmem_zero_put

bin_PROGRAMS = $(check_PROGRAMS)

TESTS = $(check_PROGRAMS)

NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

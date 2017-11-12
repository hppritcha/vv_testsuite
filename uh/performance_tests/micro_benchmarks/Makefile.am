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

check_PROGRAMS = \
	barrier_performance \
	broadcast32_performance \
	collect32_performance \
	fcollect32_performance \
	get_performance \
	put_performance

TESTS = $(check_PROGRAMS)

bin_PROGRAMS = $(check_PROGRAMS)

NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

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
	all_and_alltypes \
	all_max_alltypes \
	all_min_alltypes \
	all_or_alltypes \
	all_prod_alltypes \
	all_sum_alltypes \
	all_xor_alltypes

all_and_alltypes_SOURCES = all_and_alltypes.cpp
all_max_alltypes_SOURCES = all_max_alltypes.cpp
all_min_alltypes_SOURCES = all_min_alltypes.cpp
all_or_alltypes_SOURCES = all_or_alltypes.cpp
all_prod_alltypes_SOURCES = all_prod_alltypes.cpp
all_sum_alltypes_SOURCES = all_sum_alltypes.cpp
all_xor_alltypes_SOURCES = all_xor_alltypes.cpp

bin_PROGRAMS = $(check_PROGRAMS)

TESTS = $(check_PROGRAMS)

NPROCS ?= 2
LOG_COMPILER = $(TEST_RUNNER)

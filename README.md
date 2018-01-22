# OpenSHMEM Validation and Verification Test Suite

This is a sandbox for development of a Verfication and Validation test suite for us
by the OpenSHMEM community.  The objectives of this effort are to have an implementation agnostic
test suite which can be used for

* compliance validation of an OpenSHMEM implementation,
* continuous integration testing,
* performance regression testing.

## Building and installing the test suite

### Configure options

### Running the test suite

## Problems with Particular OpenSHMEM Implementations

### Cray

Need to set the SHMEM_ABORT_ON_ERROR environment variable to avoid hangs with some
of the Univ. Houston error checking tests.

### Open MPI (OSHMEM)

The following tests currently either hang or abort when using the OSHMEM implementation
in Open MPI:

* align
* shmalloc_loop
* test_shmem_shpalloc_03_char
* test_shmem_shpalloc_03_double
* test_shmem_shpalloc_03_int4
* test_shmem_shpalloc_03_int8
* test_shmem_shpalloc_03_logical
* test_shmem_shpalloc_03_real4
* test_shmem_shpalloc_03_real8


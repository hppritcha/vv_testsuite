/*
 *  Copyright (c) 2017 Intel Corporation. All rights reserved.
 *  This software is available to you under the BSD license below:
 *
 *      Redistribution and use in source and binary forms, with or
 *      without modification, are permitted provided that the following
 *      conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/* Multithreaded All-to-All Test
 * James Dinan <james.dinan@intel.com>
 * January, 2014
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <pthread.h>
#include <shmem.h>

/* For systems without the PThread barrier API (e.g. MacOS) */
#include "pthread_barrier.h"

#define T 8

int dest[T] = { 0 };
int flag[T] = { 0 };

int me, npes;
int errors = 0;
pthread_barrier_t fencebar;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;


static void * thread_main(void *arg) {
    int tid = * (int *) arg;
    int i, val, expected;

    /* TEST CONCURRENT ATOMICS */
    val = me;
    for (i = 1; i <= npes; i++)
        shmem_int_atomic_add(&dest[tid], val, (me + i) % npes);

    /* Ensure that fence does not overlap with communication calls */
    pthread_barrier_wait(&fencebar);
    if (tid == 0) shmem_fence();
    pthread_barrier_wait(&fencebar);

    for (i = 1; i <= npes; i++)
        shmem_int_atomic_inc(&flag[tid], (me + i) % npes);

    shmem_int_wait_until(&flag[tid], SHMEM_CMP_EQ, npes);

    expected = (npes-1) * npes / 2;
    if (dest[tid] != expected || flag[tid] != npes) {
        printf("Atomic test error: [PE = %d | TID = %d] -- "
               "dest = %d (expected %d), flag = %d (expected %d)\n",
               me, tid, dest[tid], expected, flag[tid], npes);
        pthread_mutex_lock(&mutex);
        ++errors;
        pthread_mutex_unlock(&mutex);
    }

    pthread_barrier_wait(&fencebar);
    if (0 == tid) shmem_barrier_all();
    pthread_barrier_wait(&fencebar);

    /* TEST CONCURRENT PUTS */
    val = -1;
    shmem_int_put(&dest[tid], &val, 1, (me + 1) % npes);

    /* Ensure that all puts are issued before the shmem barrier is called. */
    pthread_barrier_wait(&fencebar);
    if (0 == tid) shmem_barrier_all();
    pthread_barrier_wait(&fencebar);

    /* TEST CONCURRENT GETS */
    for (i = 1; i <= npes; i++) {
        shmem_int_get(&val, &dest[tid], 1, (me + i) % npes);

        expected = -1;
        if (val != expected) {
            printf("Put/get test error: [PE = %d | TID = %d] -- From PE %d, got %d expected %d\n",
               me, tid, (me + i) % npes, val, expected);
            pthread_mutex_lock(&mutex);
            ++errors;
            pthread_mutex_unlock(&mutex);
        }
    }

    pthread_barrier_wait(&fencebar);
    if (0 == tid) shmem_barrier_all();

    return NULL;
}


int main(int argc, char **argv) {
    int tl, i, ret;
    pthread_t threads[T];
    int       t_arg[T];

    ret = shmem_init_thread(SHMEM_THREAD_MULTIPLE, &tl);

    if (tl != SHMEM_THREAD_MULTIPLE || ret != 0) {
        printf("Init failed (requested thread level %d, got %d, ret %d)\n",
               SHMEM_THREAD_MULTIPLE, tl, ret);

        if (ret == 0) {
            shmem_global_exit(1);
        } else {
            return ret;
        }
    }

    me = shmem_my_pe();
    npes = shmem_n_pes();

    pthread_barrier_init(&fencebar, NULL, T);

    if (me == 0) printf("Starting multithreaded test on %d PEs, %d threads/PE\n", npes, T);

    for (i = 0; i < T; i++) {
        int err;
        t_arg[i] = i;
        err = pthread_create(&threads[i], NULL, thread_main, (void*) &t_arg[i]);
        assert(0 == err);
    }

    for (i = 0; i < T; i++) {
        int err;
        err = pthread_join(threads[i], NULL);
        assert(0 == err);
    }

    pthread_barrier_destroy(&fencebar);

    if (me == 0) {
        if (errors) printf("Encountered %d errors\n", errors);
        else printf("Success\n");
    }

    shmem_finalize();
    return (errors == 0) ? 0 : 1;
}

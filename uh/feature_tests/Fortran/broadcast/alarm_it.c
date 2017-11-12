/*
 * Copyright (c) 2017 Los Alamos National Security, LLC. All rights
 *   reserved.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * o Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * o Neither the name of the University of Houston System, UT-Battelle, LLC
 *   nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written
 *   permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdbool.h>

static const unsigned default_alarm_in_secs = 10;
static bool be_chatty = false;

static void sig_handler(int signo) {
	if (be_chatty == true) {
		fprintf(stderr, "committing suicide\n");
	}
	raise(SIGKILL);
}

void alarm_it(void)
{
	char *eptr = NULL;
	unsigned alarm_in_secs = default_alarm_in_secs;
	 __sighandler_t serr;

	if (((eptr = getenv("TEST_RUNNER_TIMEOUT")) != NULL)) {
		alarm_in_secs = (unsigned)atoi(eptr);
	}

	/*
	 * if alarm_in_secs is zero, that means don't set the alarm
	 */

	if (alarm_in_secs > 0) {

		/*
		 *  set up the signal handler
		 */

		if (getenv("TEST_RUNNER_TIMEOUT_VERBOSE") != NULL) {
			fprintf(stderr,
				"stting SIGALRM handler and arming timer for %u secs\n",
				alarm_in_secs);
			be_chatty = true;
		}

		serr = signal(SIGALRM, sig_handler);
		if (serr == SIG_ERR) {
			perror("setting SIGALRM signal handler failed\n");
			return;
		}

		alarm(alarm_in_secs);
	}
	return;
}



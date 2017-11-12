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



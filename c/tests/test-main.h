#ifndef _TEST_MAIN_H_
#define _TEST_MAIN_H_

#define assert_true(test, message) do { if (!(test)) return message; } while (0)
#define run_test(test) do { char *message = test(); tests_run++; \
                                if (message) return message; } while (0)
extern int tests_run;
#endif

#include <stdio.h>
#include <string.h>
#include "../src/main.c"
#include "test-main.h"

int tests_run = 0;


static char* test_green()
{
    const char* result = get_green();
    const char* expected = "green";
    assert_true(strcmp(result, expected) == 0, "Error: is not green");
    return 0;
}

static char* all_tests() 
{
      run_test(test_green);
      return 0;
}

int main()
{
    char* result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    } else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}

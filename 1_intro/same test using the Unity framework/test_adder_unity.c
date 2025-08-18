// test_adder_unity.c
#include "unity.h"
#include "adder.h"

// Runs BEFORE each test function
void setUp(void) { /* e.g., reset globals, allocate buffers */ }

// Runs AFTER each test function
void tearDown(void) { /* e.g., free buffers, close files */ }

void test_add_positive_numbers(void) {
    // Real-life: adding item counts in a cart
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
}

void test_add_with_zero(void) {
    // Real-life: adding 0 extra items should keep count same
    TEST_ASSERT_EQUAL_INT(7, add(7, 0));
}

void test_add_with_negatives(void) {
    // Real-life: profit (+) and loss (−) netting out
    TEST_ASSERT_EQUAL_INT(-3, add(-4, 1));
}

// Unity's test runner "main"
int main(void) {
    UNITY_BEGIN();                  // start the test report
    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_with_zero);
    RUN_TEST(test_add_with_negatives);
    return UNITY_END();             // summarize results
}


// gcc test_adder_unity.c adder.c Unity/src/unity.c -I Unity/src -o test_unity.exe

// Explanation:

// Unity/src/unity.c → path to Unity source from current folder

// -I Unity/src → path to Unity headers (unity.h and unity_internals.h)

// -o test_unity.exe → name of executable

// .\test_unity.exe
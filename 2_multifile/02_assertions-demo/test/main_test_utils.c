#include "unity.h"

extern void test_addition(void);
extern void test_addition(void);
extern void test_subtraction(void);
extern void test_truth(void);
extern void test_null_pointer(void);
extern void test_memory_check(void);
extern void test_floats_and_doubles(void);
extern void test_strings(void);
extern void test_arrays(void);

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_addition);
    RUN_TEST(test_addition);
    RUN_TEST(test_subtraction);
    RUN_TEST(test_truth);
    RUN_TEST(test_null_pointer);
    RUN_TEST(test_memory_check);
    RUN_TEST(test_floats_and_doubles);
    RUN_TEST(test_strings);
    RUN_TEST(test_arrays);

    return UNITY_END();

}
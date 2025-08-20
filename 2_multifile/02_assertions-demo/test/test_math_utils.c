#include "math_utils.h"
#include "unity.h"
#include <stdlib.h>

void setUp(void){}
void tearDown(void){}


void test_addition(void){
    TEST_ASSERT_EQUAL(7, add(2,5));
    TEST_ASSERT_NOT_EQUAL(10, add(2,7));
}

void test_subtraction(void){
    TEST_ASSERT_EQUAL_INT(-1, subtract(2,3));
    TEST_ASSERT_EQUAL_INT(0, subtract(5,5));
}

void test_truth(void){
    TEST_ASSERT_TRUE(5>3);
    TEST_ASSERT_FALSE(2>5);
}

void test_null_pointer(void) {
    TEST_ASSERT_NULL(get_null_pointer()); 
}

void test_memory_check(void){
    int* p=get_valid_pointer();
    TEST_ASSERT_NOT_NULL(p);
    TEST_ASSERT_EQUAL_INT(42, *p);
    free(p);
}

void test_floats_and_doubles(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.01, 3.14, 3.1415);
    TEST_ASSERT_DOUBLE_WITHIN(0.001, 2.718, 2.71828);
}

void test_strings(void) {
    TEST_ASSERT_EQUAL_STRING("hello", "hello");
    TEST_ASSERT_EQUAL_STRING_LEN("unity123", "unityXYZ", 5); // compares only 5 chars
    TEST_ASSERT_EQUAL_STRING_MESSAGE("abc", "abc", "Strings must match");
}

void test_arrays(void) {
    int expected[] = {1,2,3};
    int actual[]   = {1,2,3};
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, 3);
}
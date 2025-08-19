#include "adder.h"
#include "unity.h"

void setUp(void){}
void tearDown(void){}

void test_add_two_positive_number(void){
    TEST_ASSERT_EQUAL(5, add(2,3));
}

void test_add_two_negative_number(void){
    TEST_ASSERT_EQUAL(-5, add(-2,-3));
}
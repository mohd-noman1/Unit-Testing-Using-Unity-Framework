#include "unity.h"

extern void test_add_two_positive_number(void);
extern void test_add_two_negative_number(void);

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_add_two_positive_number);
    RUN_TEST(test_add_two_negative_number);
    return UNITY_END();
}
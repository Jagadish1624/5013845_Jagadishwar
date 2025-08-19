#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_sum(){
    TEST_ASSERT_EQUAL_INT(6,sum(4,2));
}

void test_greaterThan(){
    TEST_ASSERT_EQUAL_INT( 5,greaterThan(5,3));
}
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    RUN_TEST(test_greaterThan);
    return UNITY_END();
}
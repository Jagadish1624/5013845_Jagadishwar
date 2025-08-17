#include "demo.h"
#include "unity.h"
#include<stdlib.h>
void setUp(){}
void tearDown(){}
void test_max_with_positive_numbers(){
    int arr[] ={1,9,199,5,2};
    TEST_ASSERT_EQUAL(199,find_max(arr, 5));
}
void test_max_with_negitive_numbers(){
    int arr[]={-1,-44,0,-1999,-2};
    TEST_ASSERT_EQUAL(0,find_max(arr,5));
}
int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_max_with_positive_numbers);
    RUN_TEST(test_max_with_negitive_numbers);
    return UNITY_END();
}
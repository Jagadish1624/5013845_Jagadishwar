#include<stdio.h>
#include "unity.h"
#include "demo.h"
int main(){
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    RUN_TEST(test_greaterThan);
    return UNITY_END();
}
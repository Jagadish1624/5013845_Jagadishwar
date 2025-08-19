#include "demo.h"
#include "unity.h"

void setUp(){}
void tearDown(){}
void test_initialize_person(){
    Person p;
   initialize_person(&p,25,172.3f);
    TEST_ASSERT_EQUAL(25,p.age);
    TEST_ASSERT_FLOAT_WITHIN(0.01, 172.3f, p.height);

}
void test_update_age(){
   // TEST_IGNORE();
    Person p;
    update_age(&p,36);
    TEST_ASSERT_EQUAL_INT(36,p.age);

    
}
void test_isadult(){
    Person p ={31,172.8f};
    TEST_ASSERT_TRUE(is_adult(&p));
}
void test_adult(){
    Person p ={12,172.8f};
    TEST_ASSERT_FALSE(is_adult(&p));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_initialize_person);
    RUN_TEST(test_update_age);
    RUN_TEST(test_adult);
    RUN_TEST(test_isadult);
   
    return UNITY_END();
}
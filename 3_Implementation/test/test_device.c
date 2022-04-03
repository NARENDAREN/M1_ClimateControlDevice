
#include "unity.h"
#include <climate.h>

#include <climate.h>
#define PROJECT_NAME    "Climate Control"

extern void test_mode();


void SetUp(void)
    {

    }
void teaDown(void){

}

int main(void)
{
    UnityBegin(NULL);


    RUN_TEST(test_mode);
    RUN_TEST(test_sensor1);
    RUN_TEST(test_sensor2);
    RUN_TEST(test_temp);
    RUN_TEST(test_normal);

    



    return(UnityEnd());


}

void test_mode(void) {
  TEST_ASSERT_EQUAL(1, mode(1));
  TEST_ASSERT_EQUAL(2, mode(2));
  TEST_ASSERT_EQUAL(3, mode(3));
  TEST_ASSERT_EQUAL(4, mode(4));
}
  
void test_sensor1(void){
  TEST_ASSERT_EQUAL(16-Device turned ON, sensor1(16));
  TEST_ASSERT_EQUAL(0-Device turned ON, sensor1(0));



}
void test_sensor2(void){
  TEST_ASSERT_EQUAL(20 "Device turned ON", sensor2(20));
  TEST_ASSERT_EQUAL(1 "Device turned ON", sensor2(1);
  TEST_ASSERT_EQUAL(0 "Device turned OFF", sensor2(0);
}
  void test_temp(void){
  TEST_ASSERT_EQUAL(98 , temp(37) );
  TEST_ASSERT_EQUAL(32, temp(0));
  TEST_ASSERT_EQUAL(-40, temp(-40));
  TEST_ASSERT_EQUAL(71, temp(22));

}

void test_normal(void){
  TEST_ASSERT_EQUAL("NORMAL TEMPERATURE" , temp(22) );
  TEST_ASSERT_EQUAL("HIGH TEMPERATURE" , temp(37) );
  TEST_ASSERT_EQUAL("LOW TEMPERATURE" , temp(14) );

}



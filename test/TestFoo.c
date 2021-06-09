#include "../Identifier/identifier.h"
#include "unity.h"
#include <stdio.h>

void test1(void)
{
  char teste[6] = "asdwfg";
  TEST_ASSERT_EQUAL_INT(0, TestFunction(teste));
}

void test2(void)
{
  char teste[3] = "asd";
  TEST_ASSERT_EQUAL_INT(0, TestFunction(teste));
}

void test3(void)
{
  char teste[4] = "12asd";
  TEST_ASSERT_EQUAL_INT(1, TestFunction(teste));
}

void test4(void)
{
  char teste[6] = "asd012";
  TEST_ASSERT_EQUAL_INT(0, TestFunction(teste));
}

void test5(void)
{
  char teste[7] = "jklasdf";
  TEST_ASSERT_EQUAL_INT(1, TestFunction(teste)); 
}

void test6(void)
{
  char teste[0] = "";
  TEST_ASSERT_EQUAL_INT(1, TestFunction(teste));
}



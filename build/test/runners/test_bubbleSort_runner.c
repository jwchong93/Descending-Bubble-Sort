/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_CompareAndSwap_SHOULD_SWAP_DATA_IN_DESCENDING_ORDER(void);
extern void test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT(void);
extern void test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT_FOR_5_DATA(void);
extern void test_DescendingBubbleSort_SHOULD_SORT_DATA_IN_DESCENDING_ORDER_FOR_3_DATA(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_bubbleSort.c";
  UnityBegin();
  RUN_TEST(test_CompareAndSwap_SHOULD_SWAP_DATA_IN_DESCENDING_ORDER, 15);
  RUN_TEST(test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT, 23);
  RUN_TEST(test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT_FOR_5_DATA, 30);
  RUN_TEST(test_DescendingBubbleSort_SHOULD_SORT_DATA_IN_DESCENDING_ORDER_FOR_3_DATA, 37);

  return (UnityEnd());
}

#include "unity.h"
#include "bubbleSort.h"


void setUp() {}

void tearDown() {}



void test_CompareAndSwap_SHOULD_SWAP_DATA_IN_DESCENDING_ORDER()

{

 int testArray[]={8,13};

 CompareAndSwap (&testArray[0],&testArray[1]);

 UnityAssertEqualNumber((_U_SINT)((13)), (_U_SINT)((testArray[0])), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((testArray[1])), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

}



void test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT()

{

 int testArray[]={1,5,13};

 MoveLowestToRight(testArray,3);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((testArray[2])), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_INT);

}



void test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT_FOR_5_DATA()

{

 int testArray[]={1,5,13,2,3};

 MoveLowestToRight(testArray,5);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((testArray[4])), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

}



void test_DescendingBubbleSort_SHOULD_SORT_DATA_IN_DESCENDING_ORDER_FOR_3_DATA()

{

 int testArray[]={1,45,20};

 DescendingBubbleSort (testArray,3);

 UnityAssertEqualNumber((_U_SINT)((45)), (_U_SINT)((testArray[0])), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((20)), (_U_SINT)((testArray[1])), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((testArray[2])), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_INT);



}

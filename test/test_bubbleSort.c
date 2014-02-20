/*
 * test_bubbleSort.c
 *
 *  Created on: Feb 20, 2014
 *      Author: JingWen
 */


#include "unity.h"
#include "bubbleSort.h"

void setUp() {}
void tearDown() {}

void test_CompareAndSwap_SHOULD_SWAP_DATA_IN_DESCENDING_ORDER()
{
	int testArray[]={8,13};
	CompareAndSwap (&testArray[0],&testArray[1]);
	TEST_ASSERT_EQUAL(13,testArray[0]);
	TEST_ASSERT_EQUAL(8,testArray[1]);
}

void test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT()
{
	int testArray[]={1,5,13};
	MoveLowestToRight(testArray,3);
	TEST_ASSERT_EQUAL(1,testArray[2]);
}

void test_MoveLowestToRight_SHOULD_MOVE_THE_LOWEST_NUMBER_TO_THE_RIGHT_FOR_5_DATA()
{
	int testArray[]={1,5,13,2,3};
	MoveLowestToRight(testArray,5);
	TEST_ASSERT_EQUAL(1,testArray[4]);
}

void test_DescendingBubbleSort_SHOULD_SORT_DATA_IN_DESCENDING_ORDER_FOR_3_DATA()
{
	int testArray[]={1,45,20};
	DescendingBubbleSort (&testArray,3);
	TEST_ASSERT_EQUAL(45,testArray[0]);
	TEST_ASSERT_EQUAL(20,testArray[1]);
	TEST_ASSERT_EQUAL(1,testArray[2]);

}

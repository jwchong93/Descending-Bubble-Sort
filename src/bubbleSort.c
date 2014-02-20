/*
 * bubbleSort.c
 *
 *  Created on: Feb 20, 2014
 *      Author: JingWen
 */


#include "bubbleSort.h"

void CompareAndSwap (int *first , int *second)
{
	int temp;
	if (*first<*second)
	{
		temp = *first;
		*first = *second;
		*second =temp;
	}
}

void MoveLowestToRight (int *array , int size)
{

}

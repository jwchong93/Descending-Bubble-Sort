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

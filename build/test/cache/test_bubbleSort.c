test_CompareAndSwap_SHOULD_SWAP_DATA_IN_DESCENDING_ORDER()

{

 int testArray[]={8,13};

 CompareAndSwap (testArray[0],testArray[1]);

 TEST_ASSERT_EQUAL(13,testArray[0]);

}

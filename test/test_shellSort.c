#include "unity.h"
#include "shellSort.h"
#include <stdlib.h>
#include <stdio.h>

void setUp(void){}

void tearDown(void){}

void test_passing_array(void){
	int arr[] = {1,2,4,6} ;
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(1, sortedArr[0]);
	TEST_ASSERT_EQUAL(2, sortedArr[1]);
	TEST_ASSERT_EQUAL(4, sortedArr[2]);
	TEST_ASSERT_EQUAL(6, sortedArr[3]);
}

void test_sorting_two_array_elements(void){
	int arr[] = {3,2};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(2, sortedArr[0]);
	TEST_ASSERT_EQUAL(3, sortedArr[1]);
}

void test_sorting_three_array_elements(void){
	int arr[] = {3,2,1};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(1, sortedArr[0]);
	TEST_ASSERT_EQUAL(2, sortedArr[1]);
	TEST_ASSERT_EQUAL(3, sortedArr[2]);
}

void test_sorting_five_array_elements(void){
	int arr[] = {7,82,1,5,21};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(1, sortedArr[0]);
	TEST_ASSERT_EQUAL(5, sortedArr[1]);
	TEST_ASSERT_EQUAL(7, sortedArr[2]);
	TEST_ASSERT_EQUAL(21, sortedArr[3]);
	TEST_ASSERT_EQUAL(82, sortedArr[4]);
}

void test_sorting_ten_array_elements(void){
	int arr[] = {3,82,1,5,21,9,50,77,3334,10};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(1, sortedArr[0]);
	TEST_ASSERT_EQUAL(3, sortedArr[1]);
	TEST_ASSERT_EQUAL(5, sortedArr[2]);
	TEST_ASSERT_EQUAL(9, sortedArr[3]);
	TEST_ASSERT_EQUAL(10, sortedArr[4]);
	TEST_ASSERT_EQUAL(21, sortedArr[5]);
	TEST_ASSERT_EQUAL(50, sortedArr[6]);
	TEST_ASSERT_EQUAL(77, sortedArr[7]);
	TEST_ASSERT_EQUAL(82, sortedArr[8]);
	TEST_ASSERT_EQUAL(3334, sortedArr[9]);
}

void test_sorting_thee_array_elements_with_one_negative_element(void){
	int arr[] = {3,82,9,-4};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(-4, sortedArr[0]);
	TEST_ASSERT_EQUAL(3, sortedArr[1]);
	TEST_ASSERT_EQUAL(9, sortedArr[2]);
	TEST_ASSERT_EQUAL(82, sortedArr[3]);
	
}
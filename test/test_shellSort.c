#include "unity.h"
#include "shellSort.h"
#include <stdlib.h>
#include <stdio.h>

void setUp(void){}

void tearDown(void){}


/**
 *    Check soreted array:
 *        1,2,4,6
 *
 */
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


/**
 *    Sort array:
 *        3,2 => 2,3
 *
 */
void test_sorting_two_elements(void){
	int arr[] = {3,2};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(2, sortedArr[0]);
	TEST_ASSERT_EQUAL(3, sortedArr[1]);
}

/**
 *    Sort array:
 *        3,2,1 => 1,2,3
 *
 */
void test_sorting_three_elements(void){
	int arr[] = {3,2,1};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(1, sortedArr[0]);
	TEST_ASSERT_EQUAL(2, sortedArr[1]);
	TEST_ASSERT_EQUAL(3, sortedArr[2]);
}

/**
 *    Sort array:
 *        7,82,1,5,21 => 1,5,7,21,82
 *
 */
void test_sorting_five_elements(void){
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

/**
 *    Sort array:
 *       3,82,1,5,21,9,50,77,3334,10 => 1,3,5,9,10,21,50,77,82,3334
 *
 */
void test_sorting_ten_elements(void){
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

/**
 *    Sort array:
 *       3,82,9,-4 => -4,3,9,82
 *
 */
void test_sorting_three_elements_with_one_negative_element(void){
	int arr[] = {3,82,9,-4};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
  
	TEST_ASSERT_EQUAL(-4, sortedArr[0]);
	TEST_ASSERT_EQUAL(3, sortedArr[1]);
	TEST_ASSERT_EQUAL(9, sortedArr[2]);
	TEST_ASSERT_EQUAL(82, sortedArr[3]);
  
}

/**
 *    Sort array:
 *       -41,-100,-11,-5,-84 => -100,-84,-41,-11,-5
 *
 */
void test_sorting_five_negative_elements(void){
	int arr[] = {-41,-100,-11,-5,-84};
	int *sortedArr;
	int numOfElem = sizeof(arr)/4;
	
	sortedArr = shellSort(arr, numOfElem);
	
	TEST_ASSERT_EQUAL(-100, sortedArr[0]);
	TEST_ASSERT_EQUAL(-84, sortedArr[1]);
	TEST_ASSERT_EQUAL(-41, sortedArr[2]);
	TEST_ASSERT_EQUAL(-11, sortedArr[3]);
	TEST_ASSERT_EQUAL(-5, sortedArr[4]);
	
}
#include "unity.h"
#include "shellSort.h"
#include "addList.c"
#include "linkedlist.c"
#include "listElement.c"
#include <stdlib.h>
#include <stdio.h>

void setUp(void){}

void tearDown(void){}

void test_array(void){
	int arr[] = {1,2,4,6} ;
	int numOfElem = sizeof(arr)/4;
	shellSort(arr, numOfElem);
	
}

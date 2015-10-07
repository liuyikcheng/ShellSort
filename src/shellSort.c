#include "shellSort.h"
#include <stdlib.h>
#include <stdio.h>


int *shellSort(int *arr, int numOfElem){
	int firstValue, secondValue, gap, i, j, value;
	i = 0;
	j = 0;
	gap = numOfElem;
	

	do{
    gap = gap/2;
    
    for(i = gap; i <= (numOfElem-1); i++){
      j = i-gap;
      value = arr[i];
	
      while((arr[j] > value)&&(j >= 0)){
        arr[j+gap] = arr[j];
        j = j-gap;
      }
      arr[j+gap] = value;
    }
	}while(gap != 1);
	
	for(i = 0; i < numOfElem; i++){
	printf("%d ",arr[i]);
	}
	
	return arr;
}
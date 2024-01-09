#include <stdio.h>

int main(void) {
	size_t size = 1000;
	
	int arr[size];
	size_t c;
	
	for(c = 0; c < size; c++) {
		arr[c] = 78315*1051;
		arr[c+1] = arr[c] + arr[c] * 1024;
	}
	
	printf("Successfully Created and Filled with Values \n");
	
	
//	printf("Printing Values: \n");
//	for(c = 0; c < size; c++) {
//		printf("%d \t", arr[c]);
//	}
	
	printf("Size of array : %d\n", size);
	printf(" >> Program Finished !! << ");
}
/*
size_t can store the maximum size of a theoretically possible object of any type (including array).

size_t is commonly used for array indexing and loop counting. Programs that use other types, such as unsigned int, for array indexing may fail on, e.g. 
64-bit systems when the index exceeds UINT_MAX or if it relies on 32-bit modular arithmetic.
*/
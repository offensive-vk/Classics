#include<limits.h> //new header file in c.
#include<stdio.h>
void main(){
	printf("Character Minimum Value = %d\n", CHAR_MIN);
	printf("Character Maximum Value = %d\n", CHAR_MAX);
	printf("Short Int Minimum Value = %d\n", SHRT_MIN);
    printf("Short Int Maximum Value = %d\n", SHRT_MAX);
    printf("Int Minimum Value = %d\n", INT_MIN);
    printf("Int Maximum Value = %d\n", INT_MAX);
    printf("Long Int Minimum Value = %d\n", LONG_MIN);   
    printf("Long Int Maximum Value = %d\n", LONG_MAX);
    return 1; 
}
/*  Sorting refers to the operation of arranging data in some given ordere such as 
    increassing or decreasing with numerical data or alphabetically with character
    data.
    there are many different types of sorting algorithms as below:
    selection sort
	bubble sort
	insertion sort
	quick sort
	merge sort
	heap sort.	
1. Bubble Sort in C
Bubble sort is the most basic way to a sort a collection. it works by squentially going
through your array and comparing two values at a time, swapping then if necessary.
It then repeats the process until no swaps are required. */

#include<stdio.h>
int main()
{
    //program 17 swap the values with using third variable.
	printf(">> A Program By Vedansh <<\n");
	int x, y, temp;
	x = 36; y = 87;
	printf("Before Swapping \nx = %d\ny = %d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("\n-----------------------\n");
    printf("After Swapping \nx = %d\ny = %d", x, y);
    return 999;
}

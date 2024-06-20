#include<stdio.h>
int main(void) {
	int x, y, temp;
	x = 36; y = 87;
	printf("Before Swapping \nx = %d\ny = %d", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("\n-----------------------\n");
    printf("After Swapping \nx = %d\ny = %d", x, y);
    return 0;
}

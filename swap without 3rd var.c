#include<stdio.h>
int main()
{
    //program 17 to take user input and swap the values without using third variable.
	printf(">> A Program By Vedansh <<\n");
	int x = 87, y = 45;
    printf("Before  Swapping \nx = %d\ny = %d\n",x,y);
    //temp = x;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("-----------------------\n");
    printf("After Swapping \nx = %d\ny = %d", x, y);
    return 999;
}

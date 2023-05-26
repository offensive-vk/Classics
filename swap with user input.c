#include<stdio.h>
int main()
{
    //program 17 to take user input and swap the values without using third variable.
	printf(">> A Program By Vedansh <<\n");
	int x, y;
    printf("Enter The Value of x and y\n >>");
    scanf("%d%d", &x, &y);
    printf("Before  Swapping \nx = %d\ny = %d\n",x,y);
    //temp = x;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("-----------------------\n");
    printf("After Swapping \nx = %d\ny = %d", x, y);
    return 999;
}

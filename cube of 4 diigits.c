#include<stdio.h>
int main()
{
	// program 12 sum of four digits and its cube.
	printf(">> A Program By Vedansh <<\n");
	int x, a, b, c, cube, result;
    printf("Enter A Number of Four Digits :");
    scanf("%d", &x);
    a = x%10;
    x = x/10;
    b = x%10;
    x = x/10;
    c = x%10;
    x = x/10;
    result = a + b + c + x;
	cube = result*result*result; 
    printf(">> The Sum of Three Integer is : %d", result);
    printf("\n");
    printf(">> The Cube of This Number is : %d", cube);
	return 00;
}

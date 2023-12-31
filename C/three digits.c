#include<stdio.h>
int main()
{
	// program 10 sum of three digits.
	printf(">> A Program By Vedansh <<");
	int x, a, b, result;
    printf("Enter A Number of Three Digits :");
    scanf("%d", &x);
    a = x%10;
    x = x/10;
    b = x%10;
    x = x/10;
    result = a + b + x; 
    printf("The Sum of Three Integer is : %d", result);
	return 00;
}

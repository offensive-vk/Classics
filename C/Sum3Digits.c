#include<stdio.h>
int main()
{
	// sum of three digits.
	int x, a, b, result;
    printf("Enter A Number of Three Digits :");
    scanf("%d", &x);
    a = x%10;
    x = x/10;
    b = x%10;
    x = x/10;
    result = a + b + x; 
    printf("The Sum of Three Integer is : %d", result);
	return 0;
}

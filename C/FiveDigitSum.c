#include<stdio.h>
int main()
{
	// sum of five digits.
	int x, a, b, c, d, result;
    printf("Enter A Number of Five Digits :");
    scanf("%d", &x);
    a = x%10;
    x = x/10;
    b = x%10;
    x = x/10;
    c = x%10;
    x = x/10;
    d = x%10;
    x = x/10;
    result = a + b + c + d +x; 
    printf("The Sum of Three Integer is : %d", result);
	return 0;
}
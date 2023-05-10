#include<stdio.h>
int main()
{
	// program 13 sum of four digits and its reverse.
	printf(">> A Program By Vedansh <<\n");
	int x, a, b, c, reverse, result;
    printf("Enter A Number of Four Digits :");
    scanf("%d", &x);
    a = x%10;
    x = x/10;
    b = x%10;
    x = x/10;
    c = x%10;
    x = x/10;
    reverse = a*1000 + b*100 + c*10 + x*1;
    //printf(">> The Sum of Three Integer is : %d", result);
    printf(">> The Reverse of this Number is %d", reverse);
    return 00;
}

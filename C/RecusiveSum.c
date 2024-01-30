// Program to perform the sum of digits of given number using recursion.
#include <stdio.h>
int sumOfDigit(int n)
{

    if (n == 0)
        return 0;
    else
        return (n % 10 + sumOfDigit(n / 10));
}
int main()
{
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum = sumOfDigit(n);
    printf("Sum of n numbers: %d", sum);
    return 0;
}
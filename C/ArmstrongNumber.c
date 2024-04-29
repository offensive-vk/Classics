#include <stdio.h>
#include <math.h>
int main()
{
	// Program to check if a given number is a Armstrong or Not.
	printf("----------------------------\n");

	int n, temp, rem, sum = 0, cnt = 0;
	printf("Enter A Number To Check:");
	scanf("%d", &n);

	temp = n;
	while (temp != 0)
	{
		temp = temp / 10;
		cnt++;
	}
	temp = n;
	while (temp != 0)
	{
		rem = temp % 10;
		sum = sum + pow(rem, cnt);
		temp = temp / 10;
	}
	if (n == sum)
		printf("The Given Number is a Armstrong Number !!");
	else
		printf("The Given Number is NOT a Armstrong Number !!");
	return 0;
}
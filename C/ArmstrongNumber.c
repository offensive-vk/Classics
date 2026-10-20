#include <stdio.h>

static int int_power(int base, int exp) {
	int result = 1;
	for (int i = 0; i < exp; i++) {
		result *= base;
	}
	return result;
}

int main(void) {
	// Program to check if a given number is an Armstrong number or not.
	printf("----------------------------\n");

	int n, temp, rem, sum = 0, cnt = 0;
	printf("Enter A Number To Check: ");
	if (scanf("%d", &n) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

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
		sum = sum + int_power(rem, cnt);
		temp = temp / 10;
	}

	if (n == sum)
		printf("The Given Number %d is an Armstrong Number !!\n", n);
	else
		printf("The Given Number %d is NOT an Armstrong Number !!\n", n);

	return 0;
}
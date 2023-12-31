#include <stdio.h>
int checkPerfect(int n){
	//The first perfect number is 6, because 1, 2, and 3
	//are its proper positive divisors, and 1 + 2 + 3 = 6.
	int i = 1, sum = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	if (sum == n)
	{
		printf("\t%d is a perfect number", n);
	}
	else
	{
		printf("\t%d is not a perfect number", n);
	}
	return sum;
}
int main(){
	int n;
	printf("Enter a number to calculate perfect numbers : ");
	scanf("%d", &n);
	checkPerfect(n);
	return 0;
}

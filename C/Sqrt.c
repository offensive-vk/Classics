#include<stdio.h>
#include<math.h>
int main()
{
	double var1, result;
	printf("Enter A Number to find its Square Root :");
	scanf("%lf", &var1);
	result = sqrt(var1);
	printf("The Square Root of the given number is %lf", result);
	return 0;
}

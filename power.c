#include<stdio.h>
#include<math.h>
int main(){
	// calculating power for given number <exponent>.
	printf(">> A Program by Vedansh <<\n");
	int x, y, result;
	printf("Enter A Number to find its exponent:");
	scanf("%d", &x);
	printf("Enter Exponent for x:");
	scanf("%d", &y);
	result = pow(x, y);
	printf("The result is %d", result);
	return 0;
}

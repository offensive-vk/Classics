#include<stdio.h>
#include<math.h>
int main()
{   // program - 4th
	float base, height, answer;
	const int pi = 3.14;
	printf(">> A Program by Vedansh <<\n");
	printf(">> Area of Triangle <<\n");
	printf("Enter A Base:");
	scanf("%f", &base);
	printf("Enter A Height:");
	scanf("%f", &height);
	answer = (base*height)/2;
	printf("-------------------\n");
	printf("The Area of Triangle is %f", answer);
	return 00;
}

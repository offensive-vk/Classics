#include <stdio.h>
#include <math.h>

int main() {
	float length, width, answer;
	const int pi = 3.14;
	printf(">> Area of Rectangle <<\n");
	printf("Enter A Length:");
	scanf("%f", &length);
	printf("Enter A Width:");
	scanf("%f", &width);
	answer = length * width;
	printf("-------------------\n");
	printf("The Area of Rectangle is %f", answer);
	return 0;
}

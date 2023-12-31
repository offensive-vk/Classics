#include<stdio.h>
#include<math.h>
int main()
{   
    // program - 2nd
	float radius, answer;
	const int pi = 3.14;
	printf(">> A Program by Vedansh <<\n");
	printf(">> Area of Circle <<\n");
	printf("Enter A Radius:");
	scanf("%f", &radius);
	answer = pi*radius*radius;
	printf("------------------\n");
	printf("The Area of Circle is %f", answer);
	return 00;
}

#include<stdio.h>
int main(){
	// to calculate area of cicle.
	printf(">> A Program by Vedansh <<\n");
	float radius, area;
	printf("Enter Radius : ");
	scanf("%f", &radius);
    area = 3.141 * radius * radius;
	printf("The Area of Circle is %f", area); 
	return 0;
}

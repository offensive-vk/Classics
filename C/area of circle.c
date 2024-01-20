// Area of circle.
#include<stdio.h>
int main() {
	
	float radius, area;
	printf("Enter Radius : ");
	scanf("%f", &radius);
    area = 3.141 * radius * radius;
	printf("The Area of Circle is %f", area); 
	return 0;
}

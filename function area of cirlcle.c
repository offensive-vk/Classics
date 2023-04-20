// function of area of circle
#include<stdio.h>
float AreaOfCircle(float radius)
{
	float area = 3.141 * radius * radius;
	return area;
}
int main()
{
	float radius;
	printf("Enter Radius :");
	scanf("%f",&radius);
	
	float res = AreaOfCircle(radius);
	printf("Area of Radius : %f\n", res); 
	//return 0;
}

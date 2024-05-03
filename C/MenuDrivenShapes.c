// Create a Menu-Driven Program to compute the area of the various geometrical shape. (like circle, rectangle, triangle etc).
#include <stdio.h>
int main()
{
	printf(">> A Program by Vedansh <<\n");
	printf("------------------------------\n");

	char username[20];
	int choice;
	float length, width, result;
	float base, height, radius;
	float v_height, base1, base2;
	printf(" >> Enter Your Username :");
	scanf("%s", &username);
choice:
	printf("::- Menu Driven Program to Calculate Areas -::\t\t\t\t\t\t[ Logged in as %s ]\n", username);
	printf("---------------------------------------------\n");
	printf("1.Area of Rectangle \n");	  // length*width;
	printf("2.Area of Triangle \n");	  // (base*height)/2;
	printf("3.Area of Circle \n");		  // 3.141 * radius * radius
	printf("4.Area of Trapezium \n");	  // (base1 + base2)/2 * v_height;
	printf("5.Area of Parallelogram \n"); // base * height.
	printf("\n\t");
	printf("> Enter Your Choice :\n"); // use numbers to choose.
	scanf("%d", &choice);
	if (choice >= 6)
		goto choice;
	else
		switch (choice)
		{
		case 1:
			printf("--- You Chose Area of Rectangle ---\n");
			printf(" Enter Length :\t");
			scanf("%f", &length);
			printf(" Enter Width :\t");
			scanf("%f", &width);
			result = length * width;
			printf(" The Area of Rectangle is %f", result);
			break;
		case 2:
			printf("--- You Chose Area of Triangle ---\n");
			printf(" Enter A Base:");
			scanf("%f", &base);
			printf(" Enter A Height:");
			scanf("%f", &height);
			result = (base * height) / 2;
			printf(" The Area of Triangle is %f", result);
			break;
		case 3:
			printf("--- You Chose Area of Circle ---\n");
			printf(" Enter Radius : ");
			scanf("%f", &radius);
			result = 3.141 * radius * radius;
			printf(" The Area of Circle is %f", result);
			break;
		case 4:
			printf("--- You Chose Area of Trapezium ---\n");
			printf(" Enter Base 1:");
			scanf("%f", &base1);
			printf(" Enter Base 2:");
			scanf("%f", &base2);
			printf(" Enter Vertical Height :");
			scanf("%f", &v_height);
			result = (base1 + base2) / 2 * v_height;
			printf(" The Area of Trapezium is %f", result);
			break;
		case 5:
			printf("--- You Chose Area of Parallelogram ---\n");
			printf(" Enter A Base:");
			scanf("%f", &base);
			printf(" Enter A Vertical Height:");
			scanf("%f", &v_height);
			result = base * height;
			printf(" The Area of Triangle is %f", result);
			break;
		default:
			goto choice;
		}
	printf(" \t>>\t\t[ Written in Dev C++ by User\t</> ]\t\n");
	printf("\t\t\t\t\t   Thank You !!\t");
	return 0;
}
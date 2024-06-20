#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	same like structure, a union is a data type in C which can store different types of data.
	It is also a collection of members.
	A union stores data in the same memory location.
	Only one member can contain a value at a time.
*/

union list {
	char name[50];
	int pin;
	float x;
};

int main(void) {
	int x,y;
	union list data;
	//strcpy(data.name,'Madhav');
	data.pin = 9011;
	printf("\n %d \n", data.pin);
	data.x = 90.22;

	//printf("\n\t %s\n", data.name);
	printf("\n %f \n", data.x);
	return 0;
}

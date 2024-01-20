#include<stdio.h>
int main()
{
	//program to print ASCII value of given character.
	char c;
	printf(">> Enter A Character to Print its ASCII Value:");
	scanf("%c", &c);
	printf("ASCII Value of Character is %c = %d",c, c);
	return 0;
}
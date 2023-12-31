/*
C library supports a wide range of string handling functions, which are found in standard
header file <string.h>
string built-in function:
	1. strlen(string) : is used to get the length of the given string.
	syntax: 
*/
#include<stdio.h>
#include<string.h>
int main(){
	int len;
	char str[30];
	printf("\tEnter String : ");
	gets(str);
	len = strlen(str);
	printf("\tThe Length Of String is %d", len);
	return 0;
}

/*
strlen(string): is used to get the length of the given string.
strcpy(string1, string2): is used to copy an string to another.
strcat(string1, string2): is used to add two strings
strupr(string): is used to convert the given string into uppercase.
strlwr(string): is used to convert the given string into lowercase.
strrev(string):	is used to reverse the given string.
strcmp(string1, string2): is used to compare two stings.
  if both strings are same it will return 0
  if string1 < string2 will return -1
  if string1 > string will return 1.
*/

#include <string.h>
#include <stdio.h>
void length()
{
	char s1[25];
	printf("Enter String : ");
	gets(s1);
	strlen(s1);
	printf("Processing...");
	sleep(5);
	printf("\n");
	printf("Length of Given String : %d", s1);
}
void copy()
{
	char str1[100], str2[100];
	printf("Enter String : ");
	gets(str1);
	strcpy(str1, str2);
	printf("Processing...");
	sleep(5);
	printf("\n");
	printf("Copied Given String To str2: %s", str2);
}
void upper()
{
	char s1[25];
	printf("Enter String : ");
	gets(s1);
	strupr(s1);
	printf("Processing...");
	sleep(5);
	printf("\n");
	printf("Converted String To Upppercase: %s", s1);
}
void lower()
{
	char s1[25];
	printf("Enter String : ");
	gets(s1);
	strlwr(s1);
	printf("Processing...");
	sleep(5);
	printf("\n");
	printf("Converted String To Lowercase : %s", s1);
}
void reverse()
{
	char s1[25];
	printf("Enter String : ");
	gets(s1);
	strrev(s1);
	printf("Processing...");
	sleep(5);
	printf("\n");
	printf("Reversed String : %s", s1);
}
void compare()
{
	char s1[100], s2[100];
	printf("Enter String 1 : ");
	gets(s1);
	printf("Enter String 2 : ");
	gets(s2);
	int result = strcmp(s1, s2);
	printf("Processing...");
	sleep(5);
	printf("\n");
	if (result == 0)
		printf("Both String Are Same !!");
	else if (result == -1)
		printf("String 1 is greater than String 2\n");
	else
		printf("String 2 is greater than String 1\n");
}

int main(void) {
	length();
	reverse();
	copy();
	upper();
	lower();
	compare();
	return 0;
}
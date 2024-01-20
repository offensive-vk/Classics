#include <vedansh.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char data;
	int size, i, count = 0, upper = 0, lower = 0, digits = 0;
	FILE *ss = fopen("sample.txt", "r");
	if (ss != NULL)
	{
		printf("File is opened !!");
	}
	else
	{
		printf("File Not Opened !! bruh");
	}
	printf("Address of ss %d", &ss);
	printf("\n");
	while (!feof(ss))
	{
		data = fgetc(ss);
		printf("%c", data);
		count++;
	}

	printf("\n\t\tCounting is as follows : \n\t\tUppercase \t: %d\n\t\tLowercase : %d\n\t\tDigits : %d\n", upper, lower, digits);

	fclose(ss);
}
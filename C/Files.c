#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	int count = 0, upper = 0, lower = 0, digits = 0;
	FILE *ss = fopen("sample.txt", "r");
	if (ss == NULL)
	{
		printf("File could not be opened: sample.txt does not exist or is inaccessible.\n");
		return 1;
	}

	printf("File opened successfully!\n");
	printf("Pointer address of ss: %p\n", (void*)ss);

	int ch;
	while ((ch = fgetc(ss)) != EOF)
	{
		putchar(ch);
		count++;
		if (isupper((unsigned char)ch))
			upper++;
		else if (islower((unsigned char)ch))
			lower++;
		else if (isdigit((unsigned char)ch))
			digits++;
	}

	printf("\n\n\tCounting is as follows:\n");
	printf("\tTotal Characters : %d\n", count);
	printf("\tUppercase        : %d\n", upper);
	printf("\tLowercase        : %d\n", lower);
	printf("\tDigits           : %d\n", digits);

	fclose(ss);
	return 0;
}
#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *fp = fopen("sample.txt", "a+");
	if (fp == NULL) {
		perror("Failed to open sample.txt");
		return 1;
	}

	char str[100];
	printf("Enter String : ");
	if (fgets(str, sizeof(str), stdin) != NULL) {
		str[strcspn(str, "\n")] = '\0';
	}

	fputs(str, fp);
	fputc('\n', fp);
	printf("The current position of pointer is %ld\n", ftell(fp)); 
	rewind(fp);
	printf("The current position of pointer is %ld\n", ftell(fp)); 

	fseek(fp, 7, SEEK_SET);
	fseek(fp, -2, SEEK_CUR);
	int ch;
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch); // prints character by character..
	}
	printf("\n");
	
	fclose(fp);
	return 0;
}
#include<vedansh.h>

int main(){
	//dated : Jan,2, 2023
	FILE *fp = fopen("sample.txt", "a+");
	char str[100];
	printf("Enter String : ");
	gets(str);
	fputs(str, fp);
	fputs('\n', fp);
	printf("The current position of pointer is %d\n", ftell(fp)); 
	rewind(fp);
	printf("The current position of pointer is %d\n", ftell(fp)); 

	fseek(fp, 7, SEEK_SET);
	fseek(fp, -2, SEEK_CUR);
	while(!feof(fp)){
		printf("%c", fgetc(fp)); //prints character by character..
	}
	
	fclose(fp);
	return 0;
}

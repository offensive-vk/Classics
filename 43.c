#include<stdio.h>
#include<stdlib.h>

int main(){
	char ch;
	int upper=0,lower=0,digits=0;
	FILE *fp = fopen("myfile.txt","r");
	while(!feof(fp)){
		ch = fgetc(fp);
		if(ch >= 65 && ch <= 90)
			upper++;
		else if(ch >= 97 && ch <= 122)
			lower++;
		else if(ch >= 48 && ch <= 57)
			digits++;
	}
	printf("\tUpper Case Letters = %d\n", upper);
	printf("\tLower Case Letters = %d\n", lower);
	printf("\tDigits Letters = %d\n", digits);
	fclose(fp);
	return 0;
	
}

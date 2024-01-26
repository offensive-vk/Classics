#include<stdio.h>
#include<stdlib.h>

int main(){
	char ch='\0';
	int lines=0,words=0,characters=0;
	FILE *fp = fopen("myfile1.txt","r");
	if(fp == NULL)
		printf("The File doesn't Exists or Missing !!\n");
	else{
		while(!feof(fp)){
			ch = fgetc(fp);
			printf("%c", ch);
		
			if(ch == '\n' || ch == '\0')
				lines++;
			else if(ch == ' ' || ch == '\n')
				words++;
			else if(ch >= 65 && ch <= 95 || ch >= 97 && ch <= 122)
				characters++;
			}	
			if(characters > 0){
				lines++;
				if(lines > 0)
					words += lines;
			}
	
	printf("\n\n\tTotal Lines = %d\n", lines);
	printf("\tTotal Words = %d\n", words);
	printf("\tTotal Characters = %d\n", characters);
	}
	fclose(fp);
	return 0;
}
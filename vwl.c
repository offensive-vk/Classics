#include<stdio.h>
#include<string.h>
// wap is total number of vowel present in the given string.
int main(){
	printf(">> A Program by Vedansh <<\n ");
	int count=0, i, length, lower;
	char str[100];
	printf("Enter String : ");
	gets(str);
	length = strlen(str);
	lower = strlwr(str);
	for(i=0; i<=length; i++)
	{
	    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
	      count++;
    }
    printf("Total Vowels in String : %d", count);
    return 0;
}

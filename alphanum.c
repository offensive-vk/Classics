#include<stdio.h>
#include<string.h>
// wap is total number of alphabets, symbols, digits in given string
int main(){
	printf(">> A Program by Vedansh <<\n ");
	int count=0, i, length, lower, alpha=0, digits=0, symbol=0;
	char str[100];
	printf("Enter String : ");
	gets(str);
	length = strlen(str);
	lower = strlwr(str);
	for(i=0; i<=length; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		  alpha++;
		else if(str[i] >= 0)
		  digits++;
		else
		  symbol++;
	}
    printf("%d\n", alpha);
    printf("%d\n",digits);
    printf("%d\n", symbol);
    return 0;
}

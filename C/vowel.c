#include<stdio.h>
int main(){
	// to check whether input character is vowel or not.
	printf(">> A Program by Vedansh <<\n");
    char c;
    printf("Enter A Character :");
    scanf("%c", &c);
	switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The Given Character is Vowel ");
			return 1;
        default:
        	printf("The Given Character is NOT A Vowel ");
            return 0;
    }
    //printf("\nThe character '%c' is %sa vowel\n", c, vowel(c) ? "" : "not ");
}


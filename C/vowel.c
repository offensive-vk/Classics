#include<stdio.h>
int main() {
    char c;
    printf("Enter A Character :");
    scanf("%c", &c);
	switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The Given Character is Vowel ");
        default:
        	printf("The Given Character is NOT A Vowel ");
            
    }
    return 0;
}
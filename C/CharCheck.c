#include <stdio.h>
int main() {
	printf(">> A Program by Vedansh <<\n");
	char main;
	printf("Enter A Character: ");
	scanf("%c", &main);
	if ((main >= 'a' && main <= 'z') || (main >= 'A' && main <= 'Z'))
		printf("The Given Character is an Alphabet  = %c", main);
	else if (main >= '0' && main <= '9')
		printf("%c is an Number", main);
	else
		printf("%c | It's an Special Character", main);
	return 0;
}
// program to check given character is an alphabet, digit or special character.
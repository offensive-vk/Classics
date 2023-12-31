#include<stdio.h>
int main()
{
	//program 15 to take user input and convert days into years and months and days.
	printf(">> A Program By Vedansh <<\n");
	int x, days, years, months;
	printf(">> Enter Days :");
	scanf("%d", &days);
	printf("---------------------\n");
	// calculate years
	years = days / 365;
	// calculating months
	months = (days - years * 365)/30;
	// calculating days
	days = (days - years * 365 - months*30);
	// displaying the results
	printf("Years = %d", years);
	printf("\nMonths = %d", months);
	printf("\nDays = %d", days);
	return 00;
}

#include<stdio.h>
#include<math.h>
int main()
{
	//program 16 to take user input and convert seconds into minutes and hours.
	printf(">> A Program By Vedansh <<\n");
	int seconds, sec , minutes, hours;
	printf(">> Enter A Time in Seconds: ");
	scanf("%d", &seconds);
	printf("---------------------\n");
	// seconds into hours.
	hours = seconds/3600;
	// seconds into minutes.
	minutes = (seconds - hours*3600)/60;
	sec = seconds - hours*3600 - minutes*60;
	// displaying the outputs.
	printf("\n>> Minutes = %d", minutes);
	printf("\n>> Hours = %d", hours);
	printf("\n>> Seconds = %d", sec);
	
	return 00;
}

#include<stdio.h>
#include<math.h>
int main()
{   
    float temp, answer;
	printf(">> Fahrenheit To Celcius Converter <<\n");
	printf(" Enter A Temperature in Fahrenheit:");
	scanf("%f", &temp);
	answer = ((temp-32)*5)/9;
	printf("The Temperature in celcius is %f", answer);
	return 00;
}

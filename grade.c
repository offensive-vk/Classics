#include<stdio.h>
int main()
{
	int math, english, hindi, science, computer, average, total;
	printf("Enter Math Marks: ");
	scanf("%d", &math);
	printf("Enter English Marks: ");
	scanf("%d", &english);
	printf("Enter Hindi Marks: ");
	scanf("%d", &hindi);
	printf("Enter Science Marks: ");
	scanf("%d", &science);
	printf("Enter Computer Marks: ");
	scanf("%d", &computer);
	total = math + english + hindi + computer + science;
	average = total/5;
	printf("The Average Marks acquired by Student is %d", average);
	printf("\n");
	if(average >= 90)
	    printf("Your Grade is A+");
	else if(average >= 80 && average <90)
	    printf("Your Grade is A");
	else if(average >= 70 && average <80)
	    printf("Your Grade is B+");
	else if(average >= 60 && average <70)
	    printf("Your Grade is B");
	else if(average >= 50 && average <60)
	    printf("Your Grade is C");
	else
	    printf("You are a Failure");
	return 00;
}

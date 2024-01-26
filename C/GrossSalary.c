#include<stdio.h>
#include<math.h>
int main()
{   
	int BS, DA, HRA, answer;
	printf(">> Gross Salary <<\n");
	printf("Enter Your Basic Salary:");
	scanf("%d", &BS);
	printf("Enter A DA:");
	scanf("%d", &DA);
	printf("Enter A HRA:");
	scanf("%d", &HRA);
	answer = BS + DA + HRA;
	printf("-------------------\n");
	printf("The Gross Salary, i.e. Total Salary is %d", answer);
	return 0;
}

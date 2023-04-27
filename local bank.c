#include<stdio.h>
#include<stdlib.h>

struct bank{
	int acc_no;
	char acc_name[30];
	char acc_type;
	int pin;
	int amount;
}a1;


int main(){
	int acc_no;
	int balance=0;
	int minimum=0;
	char acc_type;
	
	char message[] = "Welcome To DBS Bank ATM ";
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
    printf("%s", message);
    
	printf("Enter Account Number : ");
	scanf("%d", &acc_no);
	printf("Choose Your Account Type : \n('s' for Saving or 'c' for Current) :");
	scanf("%c", &acc_type);
	printf("Enter Your Account Balance : ");
	scanf("%d", &balance);
	if(acc_type == 's' || acc_type == 'S'){
		printf("You are applicable to get 4% ROI per year.\n");
	}
	else if(acc_type == 'c' || acc_type == 'C'){
		if(balance < 5000){
			printf("You are applicable to get 3% ROI per year.\n");
		}
		else if(balance > 5000){
			printf("You are applicable to get 5% ROI per year.\n")
		}
		printf("")
	}
	else{
		printf("Please Enter A Correct Account Type !!!\n");
		break;
	}
	
}



















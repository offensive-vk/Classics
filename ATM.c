#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

struct Customer{
	int acc_no;
	char name[30];
	int pin;
	int amount;

};

int main(){
	struct Customer data[] = {
		{12001, "Andy Smith",1597, 50000},
		{12002, "Manish Paan Wala", 1234, 45000},
		{12003, "Mahak Saini", 0103, 150000},
		{12004, "Rupesh Lassan", 4567, 15000},
		{12005, "John Wick", 7309, 75000}
	};
	int choice, i, acc, pin, flag = 0,withdraw, amount, deposit;
	while(1)
	{
		char message[] = "Welcome To DBS Bank ATM ";
    	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t");
    	for(i=0; i<strlen(message); i++)
	    {
		    printf("%c", message[i]);
		    sleep(1);
	    }
    	printf("\n\t\tPress 1 To Continue \n");
    	printf("\t\tPress 2 To Exit \n");
    	
    	printf("\t\tPlease Proceed With Your Choice :");
    	scanf("%d", &choice);
    	switch(choice)
    	{
    		case 1:
    			system("cls");
    			printf("\n\n\n\n\n");
    			printf("\n\t\tEnter Account Number : ");
    			scanf("%d", &acc);
    			printf("\n\t\t\t\tEnter Your Pin : ");
	    		scanf("%d",&pin);
	    		pin = 0;
	    		for(i=0; i<4; i++)
	    		{
	    			pin = pin*10 + (getch()-48);
	    			printf("*");
				}
	    		flag = 0;
	    		for(i=0; i<5; i++)
	    		{
	    			if(data[i].acc_no==acc && data[i].pin == pin)
	    			{
	    				flag = 1;
	    				break;
					}
				}
				if(flag == 0)
				    printf("\n\t\t\t\tInvalid Account and Pin !!!!\n\n");
				break;
				while(flag == 1)
	    		{
	    			if(flag == 1)
            		{
		            system("cls");
	                printf("\t1. Check Balance \n");
	                printf("\t2. Cash Withdrawal\n");
	                printf("\t3. Deposit Cash\n");
	                printf("\t4. Exit\n");
	                printf("\tEnter your choice : ");
	                scanf("%d", &choice);
	                printf("\n\n");
		            system("pause");
		            system("cls");
	                switch (choice) 
		    	    {
	                    case 1:
	                        printf("\n\n\n\t\t  Your current balance is : %d Rs  \n\n", data[i].amount);
	                        break;
	
	                    case 2:
	                        printf("\n\t\t Enter Amount: ");
	                        scanf("%d", &withdraw);
	
	                        if (withdraw % 100 == 0) 
		    		        {
	             
	                            if (data[i].amount >= withdraw) 
				    	        {
	                                amount = data[i].amount - withdraw;
	                                printf("\n\n\t\t Please collect your cash \n");
	                               printf("\n\t\t Your current balance is : %d Rs \n\n", amount);
	                            }
	                            else 
			    		        {
	                                printf("\n\n\t\t Insufficent balance \n\n");
	                            }
	                        }
	                        else
	                            printf("\n\t\t Enter amount in muliple of 100 \n\n");
	                        break;
	                    case 3:
	                        printf("\n\t\t Enter amount to deposit : ");
	                        scanf("%d", &deposit);
	                        if(deposit % 100 == 0)
	                        {
	                            amount = data[i].amount + deposit;
	                            printf("\n\t\t Your balance is : %d Rs \n\n", amount);
	                        }
	                        else
	                            printf("\n\t\t Enter amount in muliple of 100 \n\n");
	                        break;
	                    case 4:
	                        printf("\n\n\n\n\n\n\t\t\t\t THANK YOU \n\n\n\n");
	                        exit(1);
	                        break;
	                    default:
	                        printf("\n\t\t Please Select Correct Option \n\n");
					}
					printf("\n\n");
	            	system("pause");
					}	
				}
				break;
	    case 2:
	    	exit(1);
			break;	
		default:
			printf("\n\t\t\t Invalid Choice........... \n\n");
		}
		system("pause");
	}
	return 0;
}





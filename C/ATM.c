#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <windows.h>
#include <conio.h>
#define CLEAR_SCREEN() system("cls")
#define PAUSE_SCREEN() system("pause")
#else
#define CLEAR_SCREEN() system("clear")
#define PAUSE_SCREEN() do { printf("Press Enter to continue..."); while(getchar() != '\n'); } while(0)
#endif

struct Customer
{
	int acc_no;
	char name[30];
	int pin;
	int amount;
};

int main(void)
{
	struct Customer data[] = {
		{12001, "Andy Smith", 1597, 50000},
		{12002, "Manish Paan Wala", 1234, 45000},
		{12003, "Mahak Saini", 7103, 150000},
		{12004, "Payal", 4567, 15000},
		{12005, "John Wick", 7309, 75000}};

	int choice, i, acc, pin, withdraw, deposit;

	while (1)
	{
		char message[] = "Welcome To DBS Bank ATM";
		printf("\n\n\t\t\t%s\n", message);
		printf("\t\tPress 1 To Continue \n");
		printf("\t\tPress 2 To Exit \n");
		printf("\t\tPlease Proceed With Your Choice : ");

		if (scanf("%d", &choice) != 1)
		{
			printf("\n\t\tInvalid input!\n");
			break;
		}

		switch (choice)
		{
		case 1:
			CLEAR_SCREEN();
			printf("\n\n\t\tEnter Account Number : ");
			scanf("%d", &acc);
			printf("\t\tEnter 4-Digit Pin : ");
			scanf("%d", &pin);

			int user_idx = -1;
			for (i = 0; i < 5; i++)
			{
				if (data[i].acc_no == acc && data[i].pin == pin)
				{
					user_idx = i;
					break;
				}
			}

			if (user_idx == -1)
			{
				printf("\n\t\tInvalid Account or Pin !!!!\n\n");
				PAUSE_SCREEN();
				break;
			}

			printf("\n\t\tWelcome, %s!\n", data[user_idx].name);
			int in_session = 1;
			while (in_session)
			{
				CLEAR_SCREEN();
				printf("\n\t\t--- ATM Menu (User: %s) ---\n", data[user_idx].name);
				printf("\t1. Check Balance \n");
				printf("\t2. Cash Withdrawal\n");
				printf("\t3. Deposit Cash\n");
				printf("\t4. Exit to Main Menu\n");
				printf("\tEnter your choice : ");
				scanf("%d", &choice);

				switch (choice)
				{
				case 1:
					printf("\n\t\tYour current balance is : %d Rs\n\n", data[user_idx].amount);
					break;

				case 2:
					printf("\n\t\tEnter Amount to Withdraw : ");
					scanf("%d", &withdraw);
					if (withdraw <= 0)
					{
						printf("\n\t\tPlease enter a positive amount.\n");
					}
					else if (withdraw % 100 == 0)
					{
						if (data[user_idx].amount >= withdraw)
						{
							data[user_idx].amount -= withdraw;
							printf("\n\t\tPlease collect your cash.\n");
							printf("\t\tYour remaining balance is : %d Rs\n\n", data[user_idx].amount);
						}
						else
						{
							printf("\n\t\tInsufficient balance!\n\n");
						}
					}
					else
					{
						printf("\n\t\tEnter amount in multiples of 100.\n\n");
					}
					break;

				case 3:
					printf("\n\t\tEnter amount to deposit : ");
					scanf("%d", &deposit);
					if (deposit <= 0)
					{
						printf("\n\t\tPlease enter a positive amount.\n");
					}
					else if (deposit % 100 == 0)
					{
						data[user_idx].amount += deposit;
						printf("\n\t\tDeposit successful!\n");
						printf("\t\tYour new balance is : %d Rs\n\n", data[user_idx].amount);
					}
					else
					{
						printf("\n\t\tEnter amount in multiples of 100.\n\n");
					}
					break;

				case 4:
					printf("\n\t\tThank you for banking with us.\n");
					in_session = 0;
					break;

				default:
					printf("\n\t\tPlease select a valid option.\n\n");
					break;
				}

				if (in_session)
				{
					PAUSE_SCREEN();
				}
			}
			break;

		case 2:
			printf("\n\t\tThank you for visiting! Goodbye.\n\n");
			exit(0);

		default:
			printf("\n\t\tInvalid Choice! Try again.\n\n");
			break;
		}
		PAUSE_SCREEN();
	}
	return 0;
}
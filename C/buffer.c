#include<stdio.h>
/*int main(){
	int x,y;
	printf("Enter 1st Value : ");
	scanf("%d", &x);
	fflush(stdin); //buffered value deletion function.

	printf("Enter 2nd Value : ");
	scanf("%d", &y);
	printf("1st Value : %d\n", x);
	printf("2st Value : %d\n", y);

	return 0;
}*/
int main() {
	char name[20], emailid[20], address[100], para[200];
	printf("Enter Paragraph : ");
	gets(para);
	fflush(stdin);
	printf("\tEnter Your Name : ");
	gets(name);
	printf("\tEnter Email ID : ");
	gets(emailid);
	//scanf("%s", emailid);
	printf("\tEnter Address : ");
	gets(address);
	fflush(stdin);
	printf("%s ", para);
	printf("\t\tLogged in As %s\n", name);
	printf("\t\tYour address is %s\n", address);
	printf("\t\tEmail Id is %s\n", emailid);
	return 0;
}
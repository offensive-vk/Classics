#include<string.h>
#include<stdlib.h>
#include<stdio.h>

struct Employee{
	int empid;
	char empname[30];
	char dept[20];
	int salary;
};
int main(){
	struct Employee e1;
	printf("Enter Employee id : ");
	scanf("%d", &e1.empid);
	fflush(stdin);
	printf("Enter Employee Name : ");
	gets(e1.empname);
	printf("Enter Employee Department : ");
	gets(e1.dept);
	printf("Enter Employee Salary : ");
	scanf("%d", &e1.salary);
	printf("\n");
	printf("Employee Id : %d\n", e1.empid);
	printf("Employee Name : %s\n", e1.empname);
	printf("Employee Department : %s\n", e1.dept);
	printf("Employee Id : %d\n", e1.salary);
	return 0;

}

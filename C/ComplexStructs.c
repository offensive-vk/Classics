#include<string.h>
#include<stdio.h>

struct Employee {
	int empid;
	char empname[30];
	char dept[20];
	int salary;
};

void readEmpData(struct Employee *e1) {
	printf("Enter Employee id : ");
	scanf("%d", &e1->empid);
	fflush(stdin);
	printf("Enter Employee Name : ");
	gets(e1->empname);
	printf("Enter Employee Department : ");
	gets(e1->dept);
	printf("Enter Employee Salary : ");
	scanf("%d", &e1->salary);
	printf("\n");
}

void displayEmpData(struct Employee *e1) {
	printf("%d \t %s \t %s \t %d \t\n ", e1->empid, e1->empname, e1->dept, e1->salary);
}

int main() {
	struct Employee emp1, emp2;
	readEmpData(&emp1);
	readEmpData(&emp2);
	displayEmpData(&emp1);
	displayEmpData(&emp2);
	return 0;
}
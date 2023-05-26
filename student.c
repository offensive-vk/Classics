//create a menu driven program to perform the follwing task.
/*
1 insert student record.
2 display all student records.
3 display rercord by roll no.
4 update student record.
5 delete student record.
6 exit
in this program you have to maintain the following student information roll no ,name,branch,and marks using structure.
*/
#include<vedansh.h>
#include<vedansh_string.h>
#include<vedansh_library.h>

struct student{
	int roll_no;
	char name[30];
	char branch[20];
	int marks;
};
int main(){
	int choice,index=0,i,roll, flag=0,update;
	struct student s1[100];
	while(1){
		printf("Please Wait, Initializing...");
		sleep(3);
	system("cls");
	printf("\n\t\t\t >> Student Record Management System << \n");
	printf("\tEnter 1 To Insert Student Record:\n");
	printf("\tEnter 2 To Display All Student Records:\n");
	printf("\tEnter 3 To Display Student Record: \n");
	printf("\tEnter 4 To Update Student Record: \n");
	printf("\tEnter 5 To Delete Student Record: \n");
	printf("\tEnter 6 To Exit: \n");
	printf("\tEnter Your Choice : \t");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: //For Insertion oƒ Records.
			printf("Enter Roll_no: ");
			scanf("%d", &s1[index].roll_no);
			fflush(stdin);
			printf("Enter Student Name : ");
			gets(s1[index].name);
			printf("Enter Student Branch : ");
			gets(s1[index].branch);
			printf("Enter student marks: ");
			scanf("%d", &s1[index].marks);
			printf("\n");
			index++;
			printf("\t Record Inserted !!\n");
			break;
		case 2: //For Displaying All Records Stored.
			if(index == 0)
				printf("\t >> No Record Available !!<< \n");
			else
				printf("\n\t\t>> Students | Record << \n");
				for(i=0; i<index; i++){
				printf("\t%d \t %s\t%s \t %d\n", s1[i].roll_no,s1[i].name,s1[i].branch,s1[i].marks);
				}
			break;
		case 3: //For Searching A Record by Roll Number.
			printf("Enter A Roll Number : ");
			scanf("%d", &roll);
			flag = 0;
			for(i=0;i<index; i++)
			{
				if(roll == s1[i].roll_no){
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				printf("\t %d \t %s\t%s \t %d\n", s1[i].roll_no,s1[i].name,s1[i].branch,s1[i].marks);
			else
				printf("\n\t > Invalid Roll Number !!\n");
			
			break;
		case 4: //For Updation of Records by Roll Number
			printf("\tEnter A Roll Number : ");
			scanf("%d", &roll);
			flag = 0;
			for(i=0;i<index; i++)
			{
				if(roll == s1[i].roll_no){
					flag = 1;
					break;
				}
			}
			if(flag == 1){ //For Updation of Records for a specific Field
				printf("1.Update Roll Number \n");
				printf("2.Update Student Name \n");
				printf("3.Update Student Branch \n");
				printf("4.Update Student Marks\n");
				printf("5.Update Everything\n");
				printf("\tEnter Choice For Updation : ");
				scanf("%d", &update);
				switch(update)
				{
					case 1:
						printf("Update Roll Number :");
						scanf("%d", &s1[i].roll_no);
						fflush(stdin);
						printf("Roll Number Updated\n");
						break;
					case 2:
						fflush(stdin);
						printf("Update Student Name :");
						gets(s1[i].name);
						printf("Student Name Updated\n");
						break;
					case 3:
						fflush(stdin);
						printf("Update Student Branch :");
						gets(s1[i].branch);
						printf("Student Branch Updated\n");
						break;
					case 4:
						fflush(stdin);
						printf("Update Student Marks :");
						scanf("%d", &s1[i].marks);
						fflush(stdin);
						printf("Student Marks Updated\n");
						break;
					case 5:
						fflush(stdin);
						printf("Enter roll_no: ");
						scanf("%d", &s1[i].roll_no);
						fflush(stdin);
						printf("Enter Student Name : ");
						gets(s1[i].name);
						printf("Enter Student Branch : ");
						gets(s1[i].branch);
						printf("Enter student marks: ");
						scanf("%d", &s1[i].marks);
						printf("\n");
						printf("Record Updated !!\n");
						break;
				}
			}
			else
				printf("\t\t No Records Found \n");
			break;
		case 5: //For deletion of records or a specific one.
			printf("Enter The Roll Number of Student :");
			scanf("%d", &remove);
			for (i = 0; i<index; i++) 
			if (s1[i].roll_no == remove) 
			break; 
			else
				for(i=0; i<index-1; i++)
				s1[i] = s1[i + 1]; 
				index--; 
				printf("Successfully Deleted Record !!\n");
			break;
		case 6: // Exiting the Program or a loop.
			printf("\t\t\t >> Thank You for using this management system !! << \n");
			exit(1);
	}

	system("pause");
	}
	return 0;

}


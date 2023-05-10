#include<stdio.h>
int main(){
	//loops and arrays loser.
	//returntype function name (parameters){func body} 
	int n,i,array[] = {10,20,30,40,50};
	//how to define an array:
	printf("datatype arrayname [size of array];\n");
	int myarray [6];
	myarray[0] = 44;
	myarray[1] = 77;
	myarray[2] = 10;
	myarray[3] = 96;
	myarray[4] = 54;
    printf("Enter Number for 5th Position:");
    scanf("%d", &myarray[5]);
    printf("\t5th element is :\t %d\n", myarray[5]);
	for(i = 0; i<6; i++)
	{
		printf("\t\t Elements are at position %d is %d\n",i, myarray[i]);
	}
	//-----------------------------------
	/*for ( start; condition; increment or decrement)
	{
		tasks to be performed.
		
	}*/
	/*while(condition){
		tasks to be performed until condition
		becomes true
		increment++;
	}*/
	/*do{
		tasks to repeat
	}
	while(condition);*/
	//printf(" ? HOW MANY TIMES loser : ");
	//scanf("%d", &n);
	/*do{
		printf("\t\t %d C is freaking ez bitch | u r an asshole :)\n", j);
		j = j+1;
	}
	while(j<n);*/
	/*while(n > 5)
	{
		printf("\t -----------------------------\n");
		printf("\t\t C is freaking ez bitch || u r an asshole :)\n");
	    n++;
	}*/
	/*for (j = 0; j<n; j++){
		printf("\t\tC is freaking ez bitch || u r an asshole :)\n");
	}*/
	return 0;
    printf("------------------new function---------------------\n");
}
int addition()
{
	int num1, num2, sum;
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("result of addition is %d", sum);
	return 2;
}

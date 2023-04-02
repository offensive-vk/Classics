//dated :  23-Nov-2022 /Wednesday
function calling
function calling is generally done by two methods:
	1.Call by value
	2.Call by address
	
1. Call by value
in this method the 'value' of in the calling function is copied in the corressponding formal
arguments of the function.
the changes made to the formal arguments in the function have no effect on the value of
actual arguments in the calling function.
In c by default all function argument are passed by value.
program of call by value:
	#include<stdio.h>
	void Show(int x, int y){

		printf("X = %d\n and Y = %d\n",x,y);
		x = 1000;
		y = 2000;
		printf("X = %d\n and Y = %d\n",x,y);
	}
	int main(){
		int a = 10, b = 20;
		Show(a,b);
		printf("X = %d\n and Y = %d\n",x,y);
	}
	
2. Call by address
In call by address, address of actual arguments in the calling function are copied
into formal arguments it reflect actual arguments.
#include<stdio.h>
	void Show(int *x, int *y){ 
        // pointers in c which stores only one address.
		printf("X = %d\n and Y = %d\n",*x,*y);
		*x = 1000;
		*y = 2000;
		printf("X = %d\n and Y = %d\n",*x,*y);
	}
	int main(){
		int a= 10, b = 20;
		Show(&a,&b);
		printf("X = %d\n and Y = %d\n",x,y);
	}
Recursion : 

recursion is a process of calling a function itself.
A function is said to be 'recursive' if a statement within the body of a function calls the
same function.
Following example represents recursion:
void Show(int  n){
	if(n>0){
		printf("You what's up ?\n");
		Show(n-1);
	}
}
int main(){
	Show(5);
}
*/
	

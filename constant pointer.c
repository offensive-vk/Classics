#include<stdio.h>
#include<conio.h>
// pointer constant to pointer to constant.
int main(){
	int x = 55, y = 46;
	int *const p = &x;
	//p = &y; //error
	*p = 100; //error
	printf("%d", *p);
	
}

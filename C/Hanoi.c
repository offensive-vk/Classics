#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

// Program to Demonstrate Working of Tower of Hanoi in C ..
void towers(int, char, char, char); 
int main(){
	int num;
	printf("\n :: The Number of Disks :: ");
	scanf("%d", &num);
	printf("\n :: The Sequence of moves involved in the Tower of Hanoi are :: \n");
	sleep(2);
	towers(num, 'A', 'C','B');
	return 0;
}

void towers(int num, char frompeg, char topeg, char auxpeg){
	//Exit condition for recursive function or base condition lol.
	if(num == 1){
		printf("\n :: Move disk 1 from peg %c to peg %c :: \n", frompeg, topeg);
		return;
	}
	// Recursively calling function twice.
	towers(num - 1, frompeg, auxpeg, topeg);
	printf("\n :: Move disk %d from peg %c to peg %c ::\n",num, frompeg, topeg);
	towers(num - 1, auxpeg, topeg, frompeg);

}
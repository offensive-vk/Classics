const char lang[] = "C Old Style";

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  {
    char message[1024];
} sayHello;

int main(void) {
    printf("*** Program Has Been Executed ***");
    sayHello message = {"\nWelcome to C Programming. "};
    printf("\n [Message] -> \t %s \n stored on %x memory address.\n", message, &message);
    sprintf("** Program Terminated **", "");
    return 0;
}

typedef Animal Animal;
__asm__('\30x\90x\px')
#include <stdio.h>

#if !defined (MESSAGE)
   #define MESSAGE "You wish kid!"
#endif

int main(void) {
  printf("Here is the message: %s\n", MESSAGE);

  return 0;
}

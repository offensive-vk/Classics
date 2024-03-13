#include <stdio.h>

#define message_for(a, b) \
  printf(#a " and " #b ": We love you!\n")

int main(void) {
  message_for(Nick, Lila);

  return 0;
}
// When you need to convert a macro parameter to a string constant, use the string constant operator #
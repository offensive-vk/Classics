// replace all MAX_ARRAY_LENGTH with 20
#define MAX_ARRAY_LENGTH 20

// Get stdio.h from the system library
#include <stdio.h>

// Get myheader.h in the local directory
// #include "myheader.h"

#undef FILE_SIZE
#define FILE_SIZE 42 // undefine and define to 42

#include <stdio.h>

int main() {
  printf("File :%s\n", __FILE__);
  printf("Date :%s\n", __DATE__);
  printf("Time :%s\n", __TIME__);
  printf("Line :%d\n", __LINE__);
  printf("ANSI :%d\n", __STDC__);
}

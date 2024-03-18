#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    
    char str[] = " Hello, World ! ";
    char result[100] = "";
    int len = strlen(str);
    int i = 0;
    for (i = 0; i < len; i++) {
        result[i] = str[i];
        result[i + 1] = '\0';
        printf("%s\n", result);
        sleep(1);
    }

    return 0;
}
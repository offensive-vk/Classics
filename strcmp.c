#include <string.h>
#include <stdio.h>

int main()
{
    char s1[] = "Hello";
    char s2[] = "HellO";
    int result;
    result = strcmp(s1, s2);
    printf("strcmp(%s, %s) = %d\n", s1, s2, result);
	if(result == 0)
		printf("Both Strings are same !!\n");
	else if(result >= 1)
		printf("String 1 is greater than String 2, %d\n", result);
	else if(result >= -1)
		printf("String 2 is greater than String 1, %d\n", result);
	else
		printf("Failed to Compare :v");
		//break;
    return 0;
}


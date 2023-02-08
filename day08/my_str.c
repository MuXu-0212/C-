#include <stdio.h>
#include <string.h>

int my_strlen(char* const str)
{
    char* p=str;
    int count=0;

    while(*p++ != '\0')
    	count++;

    return count;
}

int main(int argc, char const *argv[])
{
	char str[]="12345";
	printf("%d\n", my_strlen(str));
	return 0;
}
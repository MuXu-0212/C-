#include <stdio.h>
#include <string.h>
char* str_connect(char* a, char* b, int len)		//destination   source 
{

	char* p = a + len;
	char* q = b;

	while (*(b-1) == '\0')
	{
		*p++ = *q++;
	}

	return a;
}

int main()
{
    char a[50] = "hello";
    char b[50] = " world!";

    printf("%s\n", str_connect(a, b, strlen(a)));
	return 0;
}
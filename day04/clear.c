#include <stdio.h>
#include <string.h>
char* Clear_(char* a, char* b)
{
	char* p = a;
	char* q = b;
    while (*p!='\0')
    {
    	while (*p == ' ')
    	{
    		p++;
    	}
    	*q++ = *p++;
    }
	return b;
}

int main()
{
    char a[50] = {0};
    char b[50] = {0};

    printf("input sentence>");
    gets(a);

    printf("%s\n", a);
    printf("%s\n", Clear_( a, b));
	return 0;
}
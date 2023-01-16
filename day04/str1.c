#include <stdio.h>
#include <string.h>

char* clear(char* str1, char* str2)
{
	char* dest = str2;
	char* src = str1;

	while ( *src != '\0')
	{
		while (*src == ' ')
		{
			src++;
		}

		*dest++ = *src++;
	}
    
    *dest = '\0';
    
    return str2;
}

int main()
{
	char str1[50] = {0};
	char str2[50] = {0};
    
    printf("input sentence >");
    gets(str1);

    printf("gets(%s)\n",str1);
    printf("%s\n",clear(str1,str2));
	return 0;
}
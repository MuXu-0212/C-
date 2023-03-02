#include <stdio.h>
#include <string.h>

char* my_strrchr(char* str, char c)
{
    int len = strlen(str);
    int i=0;
    int flag=0;

    for (i=len-1; i>0; i--)
    {
        if (*(str+i)==c)
        {
        	flag=1;
        	break;
        }
    }

    if (flag == 1)
    {
    	return str+i;
    }

    return NULL;
}

int main(int argc, char const *argv[])
{
	char str[]="abcdef";

	printf("%s\n", my_strrchr(str, 'd'));
    
	return 0;
}
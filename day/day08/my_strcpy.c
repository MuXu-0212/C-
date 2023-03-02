#include <stdio.h>
#include <string.h>

char* my_strcpy(char* dest, char* scr)
{
	char* dest_p=dest;
	char* scr_p=scr;

	while (*scr_p != 0)
	{
        *dest_p++ = *scr_p++;
	}
	*dest_p = 0;
	return dest;
}

int main(int argc, char const *argv[])
{
	char str1[20]={0};
	char* str2[20]={0};

	scanf("%s",str1);

	printf("%s\n", my_strcpy(str2, str1));
	return 0;
}
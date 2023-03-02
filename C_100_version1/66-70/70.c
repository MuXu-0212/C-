/*

    题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。 

*/

#include <stdio.h>

int my_strlen(char* str)
{
	char* p=str;
	int len=0;

	if (str == NULL)
	{
		return 0;
	}

	while (*p != '\0')
	{
        len++;
        p++;
	}

	return len;
}

int main(int argc, char const *argv[])
{
	char str[]="abcd";

	printf("%d\n", my_strlen(str));
	return 0;
}
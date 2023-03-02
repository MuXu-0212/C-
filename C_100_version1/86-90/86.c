/*
	题目：两个字符串连接程序 
*/
#include <stdio.h>

char* str_connect(char* dest, char* src)
{
	char* p1=dest;
	char* p2=src;

	while (*p1++!='\0');

	p1--;

	while (*p2 != '\0')
	{
		// printf("*p1:%c\t*p2:%c\n", *p1, *p2);
		*p1++=*p2++;

	}

	return dest;
}

int main(int argc, char const *argv[])
{
	char str1[50]={0};
	char str2[50]={0};

	printf("input a chars>");
	scanf("%[^\n]", str1);
	while (getchar() != '\n');

	printf("input a chars>");
	scanf("%[^\n]", str2);

	printf("%s\n", str_connect(str1, str2));
	return 0;
}
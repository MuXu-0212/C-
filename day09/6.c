/*
	6.使用指针实现strcpy函数的功能
*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 20

char* my_strcpy(char* dest, char* scr)
{
	char* p=dest;
	char* q=scr;
    while (*q!='\0')
    {
    	*p++=*q++;
    }
    return dest;
}

int main(int argc, char const *argv[])
{
	char str1[MAXSIZE]={0};
	char str2[]="hello yueqian!";
    
    char* str3=my_strcpy(str1, str2);
    printf("%s\n", str3);

	return 0;
}

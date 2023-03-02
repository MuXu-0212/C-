/*
	5.使用指针,判断一个字符串是否为回文字符
*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 20

int is_Palindromic_number(char* str)
{
	char* left=str; 
	char* right=str+strlen(str)-1;
	int flag=1;

	while (left<=right)
	{
		if (*left++!=*right--)
		{
			flag = 0;
			break;
		}
	}

	return flag;
}

int main(int argc, char const *argv[])
{
	char str[MAXSIZE]={0};
	scanf("%[^\n]", str);

    int len=strlen(str);
    
    if (is_Palindromic_number(str) == 1)
    {
    	printf("是回文数!\n");
    }
    else
    {
    	printf("不是回文数!\n");
    }

	return 0;
}

/*
	题目：请设计一个函数,功能为在指定的位置后插入字符串,
    户先输人两个字符串str1和str2,再输入数值来确定将字符串2插在
    字符串1的哪个字符后面,最后将插入后的字符串输出, 
    如str1:1234 ,str2:abcd    str1:12abcd34

*/

#include <stdio.h>

#define MAXSIZE 50

char* my_strstr(char* str1, char* str2, int i)
{
    char str[MAXSIZE]={0};
    char* p1=str1+i;
    char* p2=str2; 
    char* p3=str;
    while (*p1 != '\0')
    {
        *p3++=*p1++;
    }
    p3=str;
    p1=str1+i;

    printf("1--str1:%s\n", str1);

    while (*p2 != '\0')
    {
        *p1++=*p2++;
    }
    printf("2--str1:%s\n", str1);

    while (*p3 != '\0')
    {
        *p1++ = *p3++;
    }
    printf("3--str1:%s\n", str1);


    return str1;
}

int main(int argc, char const *argv[])
{
    char str1[MAXSIZE]={0};
    char str2[MAXSIZE]={0};
    int i=0;
    
    scanf("%[^\n]", str1);
    while (getchar()!='\n');
    scanf("%[^\n]", str2);
    scanf("%d", &i);
    printf("%s\n", my_strstr(str1, str2, i));

	return 0;
}

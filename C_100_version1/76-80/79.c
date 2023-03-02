/*

    题目：字符串排序。   

*/


#include <stdio.h>
#include <string.h>

#define MAXSIZE_STR 20

//swap 一
// void swap(char*  str1, char* str2)
// {
//     char* p=str1;
//     char* q=str2;

//     while (*p != 0 || *q != 0)
//     {
//         char temp=0;
//         temp=*p;
//         *p=*q;
//         *q=temp;
//         q++;
//         p++;
//     }

//     *q=0;
//     *p=0;
// }

//swap 二
void swap(char* str1, char* str2)
{
    char str[MAXSIZE_STR]={0};

    strcpy(str, str1);
    strcpy(str1, str2);
    strcpy(str2, str);
}

int main()
{
    char str1[MAXSIZE_STR]={0};
    char str2[MAXSIZE_STR]={0};
    char str3[MAXSIZE_STR]={0};

    printf("input str1 >");
    scanf("%s", str1);

    printf("input str2 >");
    scanf("%s", str2);

    printf("input str3 >");
    scanf("%s", str3);

    if (strcmp(str1, str2) > 0)
    {
        swap(str1, str2);
    }

    if (strcmp(str1, str3) > 0)
    {
        swap(str1, str3);
    }

    if (strcmp(str2, str3) > 0)
    {
        swap(str2, str3);
    }

    printf("after changing!\n");

    printf("str1:%s, str2:%s, str3:%s\n", str1, str2, str3);


    return 0; 
}


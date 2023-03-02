/*

   		 题目:请设计一个函数，能为在指定的位置后插入字符串,
	户先输人两个字符串str1和str2,
	再输入数值来确定将字符串2插在字符串1的哪个字符后面,
	后将插入后的字符串输出

*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 30

char* str_add(char* str1 , char* str2, int n)
{
	char* str1_p=str1+n+1;
	char* str2_p=str2;
    
    while (*str2!=0)
    {
    	*str1_p++ = *str2_p++;
    }

    *str1_p = 0;

    return str1;

}


int main(int argc, char const *argv[])
{
	char str1[MAXSIZE]={0};
	char str2[MAXSIZE]={0};
	int n=0;

	printf("input str1 >\n");
    scanf("%s", str1);

	printf("input str2 >\n");
    scanf("%s", str2);
    
    printf("input a number >");
    scanf("%d", &n);

    printf("insert : %s\n", str_add( str1 , str2, n-1));

	return 0;
}
/*

    题目：八进制转换为十进制 

*/

#include <stdio.h>
#include <string.h>

//方法一
// int main(int argc, char const *argv[])
// {
// 	int num=0;
    
//     printf("请输入一个八进制数>");
// 	scanf("%o", &num);

// 	printf("十进制:%d\n", num);
// 	return 0;
// }


//方法二
int main(int argc, char const *argv[])
{
	char num[6]={0};
	int n=0;
	char* str=num;
	int result=0;

	scanf("%s", num);

	int len = strlen(num);
    
    while (n<len)
    {
    	result = result*8 + *str - '0';
    	str++;
    	n++;
    }

    printf("%d\n", result);

	return 0;
}

//答案
// int main(int argc, char const *argv[])
// {
// 	char *p,s[6];
// 	int n=0;

// 	p=s; 
// 	gets(p); 
// 	n=0; 

// 	while(*(p)!='\0') 
// 	{
// 		n=n*8+*p-'0'; 
// 		p++;
// 	} 

// 	printf("%d\n",n); 

// 	return 0;
// }
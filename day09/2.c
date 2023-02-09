/*
	2.使用主函数传参的形式，计算出输入的参数的长度。
*/

#include <stdio.h>
#include <string.h>

#define MAXSIZE 20

int main(int argc, char const *argv[])
{
    int sum=0,i=0;

	for (i=0; i<argc; i++)
	{
		sum += strlen(argv[i]);
	}

	printf("参数长度为%d\n", sum);
	return 0;
}
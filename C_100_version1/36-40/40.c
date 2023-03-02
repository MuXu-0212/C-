/*

    题目：将一个数组逆序输出。

*/

#include <stdio.h>

#define MAXSIZE 5

void arr_scanf(int arr[])
{
	int i=0;
	for (i=0; i<MAXSIZE; i++)
	{
		printf("input a number>");
		scanf("%d", &arr[i]);
	}
}

void arr_show_reverse(int arr[])
{
	int i=0;
	for (i=MAXSIZE-1; i>=0; i--)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int arr[MAXSIZE]={0};

	arr_scanf( arr);
	arr_show_reverse( arr);
	return 0;
}
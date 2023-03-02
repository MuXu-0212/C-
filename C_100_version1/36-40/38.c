/*

	题目：求一个3*3矩阵对角线元素之和 
	程序分析：利用双重for循环控制输入二维数组，再将a[i][i]累加后输出。

*/

#include <stdio.h>

#define MAXSIZE 3

void add(int arr[][MAXSIZE])
{
	int i=0, j=0;
	for (i=0; i<MAXSIZE; i++)
	{
		for (j=0; j<MAXSIZE; j++)
		{
			printf("input a number>\n");
			scanf("%d", &(arr[i][j]));
		}
	}
}

void show(int arr[][MAXSIZE])
{
	int i=0, j=0;
	for (i=0; i<MAXSIZE; i++)
	{
		for (j=0; j<MAXSIZE; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int arr[MAXSIZE][MAXSIZE]={0};
    int i=0, sum=0;

    add( arr);

    show( arr);

    for (i=0; i<MAXSIZE; i++)
    {
    	sum = sum+arr[i][i];
    }

    printf("sum=%d\n", sum);
	return 0;
}
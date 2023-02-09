/*
	1.使用函数封装，用纯指针的形式把一个int类型数组内的数据进行从小到大排序。
*/

#include <stdio.h>

void SlectSort_point(int arr[], int num)
{
	int i=0,j=0;
	for (i=0; i<num; i++)
	{
		int min=*(arr+i);
		int j_temp=i;

		for (j=i; j<num; j++)
		{
			if (*(arr+j)<min)
			{
				min = *(arr+j);
				j_temp = j;
			}
		}
        *(arr+j_temp)=*(arr+i);
        *(arr+i)=min;
	}
}

void arr_print(int arr[], int num)
{
	int i=0;
	printf("num=%d\n", num);
	for (i=0; i<num; i++)
	{
		printf("%d\t", *(arr+i));
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int arr[]={1,5,4,7,3,9};
	//printf("sizeof(arr)/sizeof(*(arr+0))=%ld\n"
	//			,sizeof(arr)/sizeof(*(arr+0)));

	SlectSort_point(arr , sizeof(arr)/sizeof(*(arr+0)));
	arr_print(arr , sizeof(arr)/sizeof(*(arr+0)));
	return 0;
}
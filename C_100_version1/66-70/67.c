/*

    题目：输入数组，最大的与第一个元素交换，
    最小的与最后一个元素交换，输出数组。

*/


#include <stdio.h> 

#define MAXSIZE 5

void swap(int* a, int* b)
{
	int temp=*a;
	*a = *b;
	*b = temp;
}

void arr_scanf(int* arr)
{
    int i=0;
    for (i=0; i<MAXSIZE; i++)
    {
    	printf("input a number>\n");
    	scanf("%d", arr+i);
    }
}


void change(int* arr)
{
    int max=arr[0], min=arr[0];
    int i=0;
    int max_i=0;
    int min_i=0;

    for (i=1; i<MAXSIZE; i++)
    {
    	if (arr[i]>max)
    	{
            max=arr[i];
            max_i=i;
    	}
    	if (arr[i]<min)
    	{
    		min=arr[i];
    		min_i=i;
    	}
    }

    swap(&arr[max_i], &arr[0]);
    swap(&arr[min_i], &arr[MAXSIZE-1]);
}

void arr_show(int* arr)
{
	int i=0;
	for (i=0; i<MAXSIZE; i++)
	{
        printf("%d\t", *(arr+i));
	}
	printf("\n");
}

int main() 
{ 
	int arr[MAXSIZE]={0};

	arr_scanf(arr);
	arr_show(arr);

    change(arr);
	arr_show(arr);

	return 0;
} 




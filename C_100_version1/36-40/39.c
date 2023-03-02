
/*
	题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。

    程序分析：首先判断此数是否大于最后一个数，然后再考虑插入中间的数的情况，插入后
　　　　　此元素之后的数，依次后移一个位置。 
*/


#include <stdio.h>

#define MAXSIZE 5
#define MAXSIZE_ININT 4

int len=0;

void arr_scanf(int arr[])
{
	int i=0;

	for (i=0; i<MAXSIZE_ININT; i++)
	{
        printf("input a number>\n");
        scanf("%d", &arr[i]);
        len++;
	}
	printf("len=%d\n", len);
}

void arr_select_sort(int arr[])
{
    int i=0, flag=0, j=0, min=0;

    for (i=0; i<len; i++)
    {
    	min=arr[i];
    	for (j=i; j<len; j++)
    	{
            if (arr[j]<min)
            {
            	min=arr[j];
            	flag=j;
            }
    	}
        
        if (min != arr[i])
        {
        	int temp=arr[i];
	    	arr[i]=min;
	    	arr[flag]=temp;
        }
    }
}

int arr_add(int arr[], int num)
{
	int i=0, j=0;
	for (i=0; i<len; i++)
	{
        if (num<arr[i])
        {
        	for (j=len; j>=i; j--)
        	{
                arr[j]=arr[j-1];
        	}
        	arr[i]=num;
        	len++;
            return 1;
        }
	}

	arr[len]=num;
	printf("arr[len]=%d\n",arr[len]);
	len++;
	return 1;
}

void arr_show(int arr[])
{
	int i=0;

	for (i=0; i<len; i++)
	{
		printf("%d\t", arr[i]);
	}

	printf("\n");
}



int main(int argc, char const *argv[])
{
	int arr[MAXSIZE]={0};
	int num=0;

	arr_scanf(arr);
    arr_show(arr);

    arr_select_sort(arr);
    arr_show(arr);

    printf("input a number>");
    scanf("%d", &num);
    arr_add( arr, num);
    arr_show(arr);

    
	return 0;
}
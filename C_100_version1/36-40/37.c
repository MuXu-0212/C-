

/*
    题目：对10个数进行排序
*/

#include <stdio.h>

#define MAXSIZE 5


void add(int arr[]) //添加逐次添加一个数
{	
	int i=0;
	for (i=0; i<MAXSIZE; i++)
	{
        printf("input a number>");
    	scanf("%d", &(arr[i]));
	}
}

void bubble_sort(int a[]) //冒泡排序
{
    int i=0,j=0;
    for (i=0; i<MAXSIZE; i++)
    {
    	for (j=i; j<MAXSIZE; j++)
    	{
            if (a[i]>a[j])
            {
            	int temp=a[j];
            	a[j] = a[i];
            	a[i] = temp;
            }
    	}
    }
}

void select_sort(int arr[]) //选择排序
{
	int i=0, j=0, flag=0;

	for (i=0; i<MAXSIZE; i++)
	{

	    int min=arr[i];
		for (j=i; j<MAXSIZE; j++)
		{
			if (min>arr[j])
			{
				min=arr[j];
				flag = j;
			}
		}
        
        arr[flag]=arr[i];
        arr[i]=min;
    }   
}

void insert_arr(int arr[])
{
	int i=0;
    int min=arr[0];

	for (i=0; i<MAXSIZE; i++)
	{
		if (arr[i]<)
	}
}

void arr_show(int arr[])  //打印数组
{
	int i=0;
	for (i=0; i<MAXSIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[MAXSIZE]={0};
    add(arr);
    arr_show(arr);

    select_sort(arr);
    arr_show(arr);

	return 0;
}


//答案
// int main(int argc, char const *argv[])
// {
// 	int i,j,min,tem,a[N];
// 	/*input data*/
// 	printf("please input ten num:\n");
// 	for(i=0;i{
// 	printf("a[%d]=",i);
// 	scanf("%d",&a[i]);}
// 	printf("\n");
// 	for(i=0;iprintf("%5d",a[i]);
// 	printf("\n");
// 	/*sort ten num*/
// 	for(i=0;i{min=i;
// 	for(j=i+1;jif(a[min]>a[j]) min=j;
// 	tem=a[i];
// 	a[i]=a[min];
// 	a[min]=tem;
// 	}
// 	/*output data*/
// 	printf("After sorted \n");
// 	for(i=0;iprintf("%5d",a[i]);

// 	return 0;
// }
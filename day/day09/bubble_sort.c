#include <stdio.h>

//5
//4
//4
//5
//3
//2
#define MAXSIZE 5

void bubble_sort(int arr[], int len)
{
	int i=0, j=0;
	for (i=0; i<len; i++)
	{
		for (j=i; j<len-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void arr_scanf(int arr[], int n)
{
	int i=0;
	for (i=0; i<n; i++)
	{
		scanf("%d",arr+i);
	}
}

void arr_print(int arr[], int n)
{
	int i=0;
	for (i=0; i<n; i++)
	{
		printf("%d", *(arr+i));
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int arr[MAXSIZE]={0};
	arr_scanf( arr, MAXSIZE);
	arr_print( arr, MAXSIZE);

	bubble_sort( arr, MAXSIZE);
	arr_print( arr, MAXSIZE);
	return 0;
}
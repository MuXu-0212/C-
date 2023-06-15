/*
	冒泡排序
*/

#include <stdio.h>

void bubble_sort(int arr[], int len)
{
	int i,j;
	int temp;
	for (i=0; i<len-1; i++)
	{
		for (j=i+1; j<len; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void print_arr(int arr[], int len)
{
	int i=0;
	for (i=0; i<len; i++)
	{
		printf("%d\t", arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	int arr[10] = {2,5,6,17,9,4,7,8};

	bubble_sort(arr , 10);
	print_arr(arr , 10);

	return 0;
}



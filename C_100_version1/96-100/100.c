/*
	题目:选择排序(指针法)
*/

#include <stdio.h>

void slect_sort(int arr[], int len)
{
	int i=0, j=0, temp=0;
	for (i=0; i<len ;i++)
	{
		int min=*(arr+i);
		temp=i;
		for (j=i; j<len; j++)
		{
			if (min>*(arr+j))
			{
				min = *(arr+j);
				temp = j;
			}
		}
		*(arr+temp)=*(arr+i);
		*(arr+i)=min;
	}
}

void arr_print(int arr[], int len)
{
	int i=0;
    for (i=0; i<len; i++)
    {
    	printf("%d\t", *(arr+i));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
	int arr[]={1,4,7,3,9,2};
	slect_sort(arr , sizeof(arr)/sizeof(arr[0]));

	arr_print(arr ,sizeof(arr)/sizeof(arr[0]));
	return 0;
}
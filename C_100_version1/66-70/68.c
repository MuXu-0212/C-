/*

    题目：有n个整数，使其前面各数顺序向后移m个位置，
    最后m个数变成最前面的m个数 

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


void reversion(int* arr, int first, int last)
{

    while (first < last)
    {
        swap(&arr[first++], &arr[last--]);
    }
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
    int m=0;

	arr_scanf(arr);
	arr_show(arr);

    scanf("%d", &m);

    reversion(arr ,0 ,MAXSIZE-1);
    reversion(arr ,0 ,m-1);
    reversion(arr ,m ,MAXSIZE-1);

    arr_show(arr);

	return 0;
} 




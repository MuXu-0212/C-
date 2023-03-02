/*

    题目：输入3个数a,b,c，按大小顺序输出。 (利用指针方法)

*/


#include <stdio.h> 

#define MAXSIZE 3

void arr_scanf(int* arr)
{
    int i=0;
    for (i=0; i<MAXSIZE; i++)
    {
    	printf("input a number>\n");
    	scanf("%d", arr+i);
    }
}

void arr_sort(int* arr)
{
	int i=0,j=0;

	for (i=0; i<MAXSIZE; i++)
	{
		int max=arr[i];
		for (j=i; j<MAXSIZE; j++)
		{
			if (arr[j]>max)
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				max=arr[j];
			}
		}
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

	arr_scanf(arr);
	arr_sort(arr);
	arr_show(arr);

	return 0;
} 


//答案
// void swap(int* p1, int* p2)
// {
// 	int p; 
// 	p=*p1;*p1=*p2;*p2=p; 
// }

// int main(int argc, char const *argv[])
// {
// 	int n1,n2,n3; 
// 	int *pointer1,*pointer2,*pointer3; 

// 	printf("please input 3 number:n1,n2,n3:"); 
// 	scanf("%d%d%d",&n1,&n2,&n3); 

// 	pointer1=&n1; 
// 	pointer2=&n2; 
// 	pointer3=&n3; 

// 	if(n1>n2) swap(pointer1,pointer2); 
// 	if(n1>n3) swap(pointer1,pointer3); 
// 	if(n2>n3) swap(pointer2,pointer3); 
// 	printf("the sorted numbers are:%d,%d,%d\n",n1,n2,n3); 
	

// 	return 0;
// }

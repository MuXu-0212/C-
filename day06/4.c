#include<stdio.h>

int main()
{
	int arr[] = {-2, 4, -8, 6, 5, 3, -6};
    int two_max = arr[0]+arr[1];
    int i, j;

    for (i=1;i<5;i++)
    {
    	if (arr[i] + arr[i+1] > two_max)
    	{
    		two_max = arr[i] + arr[i+1];
    		j=i;
    	}
    }
    
    printf("arr[] = { ");
    for (i=0;i<7;i++)
    {
    	printf("%d ", arr[i]);
    }
    printf("}\nmax : arr[%d] + arr[%d] = %d\n", j, j+1, two_max);
    return 0;
}
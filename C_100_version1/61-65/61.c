/*

    题目：打印出杨辉三角形（要求打印出10行如下图） 
    1 
	1 1 
	1 2 1 
	1 3 3 1 
	1 4 6 4 1 
	1 5 10 10 5 1 

*/

#include <stdio.h>

#define MAXSIZE 10

int main(int argc, char const *argv[])
{
	int arr[MAXSIZE][MAXSIZE]={1};
    int i=0, j=0;
    
    printf("L%d: %d\t\n", i+1, arr[0][0]);
    for (i=1; i<MAXSIZE; i++)
    {
    	arr[i][0]=1;
    	printf("L%d: %d\t", i+1, arr[i][0]);

    	for (j=1; j<i;j++)
    	{
    		arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
    		printf("%d\t", arr[i][j]);
    	}

    	arr[i][i]=1;
    	printf("%d\t\n", arr[i][i]);
    }
    
	return 0;
}
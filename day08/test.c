#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
//---------------------------------------------------------------------
	// int arr[3][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };

	// printf("**(arr+1)=%d\n", **(arr+1));			//
	// printf("*(arr[0]+1)=%d\n", *(arr[0]+1));		//2
	// printf("**(&arr[0]+1)=%d\n", **(&arr[0]+1));	//4
	// printf("***(&arr+1)=%d\n", ***(&arr+1));		//32766
	// printf("*(*(arr+1))+1=%d\n", *(*(arr+1))+1);	//5
//-----------------------------------------------------------------------
	
	int i=0, j=0;
	int arr[3][3]={
		0
	};

	for (i=0; j<3; )
	{
		scanf("%d", *(&arr[0]+j)+i);
		i++;
		if(i == 3)
		{
			i=0;
			j++;
		}
	}

	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
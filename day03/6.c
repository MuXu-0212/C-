#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n = 0;
	int i, j;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		for (j = n-i-1; j > 0; j--)
		{
            printf(" ");
		}
		for (j = 0; j<2*(i+1)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i=0;i<n;i++)
	{
		if (i < n-1)
		{
			for (j=0; j<=i; j++)
			{
				printf(" ");
			}
		}
		for (j=2*(n-i-1)-1; j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
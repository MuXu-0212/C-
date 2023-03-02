#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 1, j = 1, k = 1, count = 1;
	for (i=1; i<=4; i++)
	{
		for (j=1; j<=4; j++)
		{
			for (k=1; k<=4; k++)
			{
				if (i!=j && j!=k && i!=k)
				{
					count++;
					printf("%d ", i*100+j*10+k);
				}
			}
		}
		printf("\n");
	}
	printf("共计%d个\n", count);
	return 0;
}
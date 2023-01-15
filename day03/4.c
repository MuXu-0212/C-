#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n = 0, i, j;

	scanf("%d",&n);
	for (i=2; i<n; i++)
	{
		int flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
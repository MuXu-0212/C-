#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0, j = 0;

	for (i=1; i<10; i++)
	{
		for (j=1; j<=i; j++)
		{
			printf("%d * %d = %d\t", j, i, i*j);
		}
		printf("\n");
	}
	return 0;
}
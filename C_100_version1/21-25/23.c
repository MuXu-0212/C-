#include <stdio.h>

/*

打印菱形
     *
    ***
   *****
  *******
   *****
    ***
     *

*/

int main(int argc, char const *argv[])
{
	int i=0, j=0;
	int num=0;

	scanf("%d", &num);

	for (i=1; i<=num; i++)
	{
		for (j=1; j<=num-i; j++)
		{
            printf(" ");
		}
		for (j=1; j<=2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");

	}

	for (i=1; i<=num; i++)
	{
		for (j=1; j<=i; j++)
		{
            printf(" ");
		}
		for (j=2*(num-i)-1; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
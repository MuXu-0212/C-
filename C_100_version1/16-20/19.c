#include <stdio.h>

/*
	题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程 
	找出1000以内的所有完数。 
*/


#define MAXSCALE  1000

void finished_count(int num)
{
	int sum=0;
	int k=1;
    int i=num;
	while (k<i)
	{
		if (num%k==0)
		{
            sum=sum+k;
		}
        k++;
	}

	if (sum==i)
	{
		printf("%d ", i);
	}

 }

int main(int argc, char const *argv[])
{
	int i=0;

	for (i=2; i<=MAXSCALE; i++)
	{
		finished_count( i);
	}

	printf("\n");
	return 0;
}


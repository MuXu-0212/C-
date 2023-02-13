/*
	题目:斐波拉契数列(Fibonacci),用递归法
*/

#include <stdio.h>

int fib(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if(n == 2)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}

int main(int argc, char const *argv[])
{
	int n=0, i=0;
	scanf("%d", &n);

	for (i=0; i<n; i++)
	{
		printf("%d\t", fib(i+1));
	}
	printf("\n");
	
	return 0;
}
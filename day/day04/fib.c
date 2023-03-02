#include <stdio.h>

int fib(int num)
{
    if (num == 1 || num == 0)
    {
    	return 1;
    }
    else
    {
        return fib(num-1)+fib(num-2);
    }
}

int main()
{
	int n=0;
	printf("input a number>");
	scanf("%d",&n);

    printf("%d\n",fib(n-1));
	return 0;
}
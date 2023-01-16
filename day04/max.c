#include<stdio.h>

int Max(int a, int b, int c)
{
	return (a>b)?((a>c)?a:c):(b>c)?b:c;
}

int main()
{
	int a=10, b=20 , c=30;
    
    printf("%d\n",Max(a, b, c));

	return 0;
}
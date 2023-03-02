#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 0, num  = 0;

    for (i=100; i<=999; i++)
    {
    	num=i;
    	int a=num%10;
    	int b=num/10%10;
    	int c=num/100;
    	if (c*c*c+b*b*b+a*a*a == num)
    	{
    		printf("%d是水仙花数\n", i);
    	}
    }
	return 0;
}
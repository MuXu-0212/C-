#include <stdio.h>

int is_prime(int num)
{
    int i=0, flag=1;
    for (i=2; i<num; i++)
    {
        if (num%i==0)
        {
        	flag = 0;
            break;
        }
    }

    if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
	int i = 0;

    for (i=101; i<200; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
	return 0;
}
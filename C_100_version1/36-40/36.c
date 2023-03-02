
/*
    题目：求100之内的素数　
*/


#include <stdio.h>

int is_prime(int num)
{
	int k=2;
	while (k < num)
	{
        if (num % k == 0)
        {
            return 0;
        }
        else
        {
            k++;
        }
	}

	return 1;
}

int main(int argc, char const *argv[])
{
	int i=0;

	for(i=2; i<101; i++)
	{
        if (is_prime(i))
        {
            printf("%5d", i);
        }
	}
	printf("\n");
	return 0;
}


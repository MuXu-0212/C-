#include <stdio.h>

void print(int num)
{
    int i = num, j=0;
    for (i=1; i<num; i+=2)
    {
    	for (j=1; j<=i; j+=2)
    	{
    		printf("——");
    	}
        printf("|");
    	printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int num = 0;
    scanf("%d", &num);
	printf(">_<\n");
    print(num);
	return 0;
}
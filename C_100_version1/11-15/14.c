#include <stdio.h>



int main(int argc, char const *argv[])
{
	int k=2, n=0;

	scanf("%d", &n);

    printf("%d=", n);
	while (k<=n)
	{
        if (n%k==0)
        {
            printf("%d * ", k);
            n = n / k;
        }
        else
        {
        	k++;
        }
	}
	printf("1\n");
	return 0;
}
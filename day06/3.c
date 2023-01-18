#include <stdio.h>

int main()
{
    int a[3][2] = {{1}, {2, 3}, 4};
    int* b[6] = {&a[0], &a[1], &a[2]};
    int i, j, sum = 0;

    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            b[i*2+j] = &a[i][j];
        }
    }

    for (i=0;i<6;i++)
    {
        sum = sum + *(b[i]);
    }

    printf("%d\n", sum);
	return 0;
} 
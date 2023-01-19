#include <stdio.h>
#include <math.h>


#define MAXSIZE 3

void transform(double source[], double target[], int n, double (*fun)(double))
{
    int i=0;
    for (i=0;i<n;i++)
    {
    	target[i] = fun(source[i]);
    	printf("%lf\n", target[i]);
    }
    printf("============================\n");
}

int main()
{
	double src[MAXSIZE]={1, 2, 3};
	double tar[MAXSIZE]={0};

	transform( src, tar, MAXSIZE, &sin);
	transform( src, tar, MAXSIZE, &cos);
	transform( src, tar, MAXSIZE, &tan);
	transform( src, tar, MAXSIZE, &sqrt);

	return 0;
}
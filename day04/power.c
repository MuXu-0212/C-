#include<stdio.h>

float my_power(float num, int n)
{
	int i=0,count=0;

	float result = 1.0;
    double value = 0;

	if (n < 0)				//判断正负次方
	{
		count = -1 * n;
	}
	else if (n > 0)
	{
		count = n;
	}
	else
	{
		return 1.0;
	}

	for (i=1; i<=count; i++)
	{
		result *= num;
	}

	if (n < 0)				//负次方做出调整
	{
		value = 1.0 / result ;
	}
	return value;
}

int main()
{  
	float x=0;
	int n=0;

	printf("input float and n>");
	scanf("%f %d",&x ,&n);
	
    printf("%.6lf\n",my_power(x, n));

	return 0;
}
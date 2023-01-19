#include <stdio.h>

double add(double a, double b)
{
	return a+b;
}

double subtraction(double a, double b)
{
	return a-b;
}

double multiplication(double a, double b)
{	
	return a*b;
}

double division(double a, double b)
{
	if (b == 0)
	{
		printf("error!\n");
		return 0;
	}
	return a/b+(int)a%(int)b;
}

int main()
{
    double (*calc[4])(double, double) = { add, subtraction
    	                    , multiplication, division};
    double a, b;
    scanf("%lf%lf", &a, &b);

    int i = 0;
    for (i=0;i<4;i++)
    {
        printf("%lf\n", calc[i](a, b));
    }

	return 0;
}
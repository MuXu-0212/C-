#include <stdio.h>

int main(int argc, char const *argv[])
{
	float bonus = 0;

	printf("请输入基础金额>");
    scanf("%f", &bonus);
    if (bonus <= 10)
    {
        bonus += bonus * (1+0.1);
    }
    else if (bonus <= 20)
    {
    	bonus += 10*0.1 + (bonus-10)*0.075;
    }
    else if (bonus <= 40)
    {
    	bonus += 10*0.1 + 10*0.075 + (bonus-20)*0.005;
    }
    else if (bonus <= 60)
    {
    	bonus += 10*0.1 + 10*0.075 + 20*0.005 + (bonus-40)*0.003;
    }
    else if (bonus <= 100)
    {
    	bonus += 10*0.1 + 10*0.075 + 20*0.005 + 20*0.003 + (bonus-60)*0.015;
    }
    else
    {
    	bonus += 10*0.1 + 10*0.075 + 20*0.005 + 20*0.003 + 40*0.015 + (bonus-100)*0.01;
    }

    printf("bonus = %f\n", bonus*10000);

	return 0;
}
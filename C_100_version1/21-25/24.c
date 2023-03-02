#include <stdio.h>

//题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
//求出这个数列的前20项之和。

int Fib_molecule(int num)
{
    if (num < 1)
    {
        return 1;
    }
    else
    {
        return Fib_molecule(num-1)+Fib_molecule(num-2);
    }
}

int Fib_denominator(int num)
{
	if (num < 2)
    {
        return 1;
    }
    else
    {
        return Fib_denominator(num-1)+Fib_denominator(num-2);
    }
}

int main(int argc, char const *argv[])
{
    int i=0;
    float sum=0;
    for (i=1; i<=20; i++)
    {
    	sum = sum + (float)Fib_molecule(i)/Fib_denominator(i);
    	printf(" %d/%d \n+", Fib_molecule(i), Fib_denominator(i));
    }

    printf(" 0 = %f\n", sum);

	return 0;
}


//答案
// int main(int argc, char const *argv[])
// {
// 	int n,t,number=20;
// 	float a=2,b=1,s=0;
// 	for(n=1;n<=number;n++)
// 	{
// 		s=s+a/b;
// 		printf("%f\n", s);
// 		t=a;a=a+b;b=t;/*这部分是程序的关键，请读者猜猜t的作用*/
// 	}
// 	printf("sum is %9.6f\n",s);

// 	return 0;
// }
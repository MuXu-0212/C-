/*

    题目：编写一个函数，输入n为偶数时，调用函数求
    1/2+1/4+...+1/n,当输入n为奇数时，调用函数 
    1/1+1/3+...+1/n(利用指针函数) 

*/


#include <stdio.h>


double double_number(int num)
{
    int i=0;
    double sum=0;

    for (i=2; i<=num; i=i+2)
    {
    	printf("1/%d ", i);
    	sum = sum + 1.0/i;
    }

    return sum;

}

double single_number(int num)
{
	int i=0;
    double sum=0;

    for (i=1; i<=num; i=i+2)
    {
    	printf("1/%d ", i);
        sum = sum + 1.0/i;
    }

    return sum;
}

double function(double (*pf)(int n), int num)
{
	return pf(num);
}

int main(int argc, char const *argv[])
{
	double (*single_num)(int num)=single_number;
	double (*double_num)(int num)=double_number;
    
    int num=0;
    scanf("%d", &num);

    if (num%2==1)
    {
        printf("%lf\n", function(single_num, num));
    }
    else
    {
    	printf("%lf\n", function(double_number, num));
    }

	return 0;
}



//答案
// float pEven(int n)
// {
// 	float sum = 0;
// 	for (float i = 2; i <= n; i += 2)
// 	{
// 		sum += 1 / i;
// 	}
// 	return sum;
// }

// float pOdd(int n)
// {
// 	float sum = 0;
// 	for (float i = 1; i <= n; i += 2)
// 	{
// 		sum += 1 / i;
// 	}
// 	return sum;
// }

// float dcall(float (*fp)(int n), int n)
// {
// 	float s = fp(n);
// 	return s;
// }

// int main()
// {
// 	int n = 0;
// 	float sum = 0;
// 	while (1)
// 	{
// 		scanf("%d", &n);
// 		if (n < 1)
// 			break;
// 		else if ((n % 2) == 0)
// 		{
// 			printf("Even = ");
// 			sum = dcall(pEven, n);
// 		}
// 		else
// 		{
// 			printf("Odd = ");
// 			sum = dcall(pOdd, n);
// 		}
// 		printf("%f", sum);
// 	}
// 	system("pause");
// 	return 0;
// }


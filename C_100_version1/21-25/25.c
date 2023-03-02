#include <stdio.h>

//题目：求1+2!+3!+...+20!的和

//方法一
// long level(int num)
// {
// 	int i=0;
// 	long sum=1;
// 	for (i=1; i<=num; i++)
// 	{
//         sum=sum*i;
// 	}
// 	return sum;
// }

// int main(int argc, char const *argv[])
// {
// 	int i=1;
// 	long sum=1;

// 	for (i=1; i<=20; i++)
// 	{
//         if (i!=20)
//         {
//             printf("%d! + ", i);
//         }
//         else
//         {
//             printf("%d! ", i);
//         }
//         sum = sum + level(i);
// 	}

// 	printf("= %ld\n", sum);
// 	return 0;
// }


//方法二:
//递归,但是从17开始数值溢出,可能是栈满的原因
long level(int num)
{
	if (num < 2)
	{
		return 1;
	}
    else
    {
    	return num*level(num-1);
    }
}

int main(int argc, char const *argv[])
{
    int i = 0;
    long sum = 0;

    for (i=1; i<=20; i++)
    {
        sum = sum + (long)level(i);
        //printf("%lld\n", (long long)level(i));
        if (i != 20 )
        {
        	printf("%d! + ", i);
        }
        else
        {
        	printf("%d! ", i);
        }
    }

    printf("= %ld\n", sum);
	return 0;
}


//答案
// int main(int argc, char const *argv[])
// {
// 	float n,s=0,t=1;
// 	for(n=1;n<=20;n++)
// 	{
// 		t*=n;
// 		s+=t;
// 	}
// 	printf("1+2!+3!...+20!=%e\n",s);

// 	return 0;
// }
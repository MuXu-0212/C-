/*

    题目：一个偶数总能表示为两个素数之和。 

*/

#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
	int i=0, flag=1;

	for (i=2; i<num; i++)
	{
		if (num%i==0)
		{
			flag=0;
			break;
		}
	}

	if (flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	int i=0, j=0, num=0;

	printf("input a number>");
	scanf("%d", &num);

	for (i=2 ; i<1000; i++)
	{
		if (is_prime(i))
		{
			for (j=2; j<1000; j++)
			{
				if (is_prime(j)  && i+j==num)
				{
					printf("%d = %d + %d\n", num, i, j);
					return 1;
				}
			}
		}
	}

    printf("无!\n");
	return 0;
}


//答案
// int main(int argc, char const *argv[])
// {
// 	int a,b,c,d; 
// 	scanf("%d",&a); 
// 	for(b=3;b<=a/2;b+=2) 
// 	{ 
// 		for(c=2;c<=sqrt(b);c++) 
// 		if(b%c==0) 
// 			break; 
// 		if(c>sqrt(b)) 
// 			d=a-b; 
// 		else 
// 			break; 
// 		for(c=2;c<=sqrt(d);c++) 
// 			if(d%c==0) break; 

// 		if(c>sqrt(d)) 
// 			printf("%d=%d+%d\n",a,b,d); 
// 	} 

// 	return 0;
// }


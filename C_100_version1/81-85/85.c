/*

    题目：判断一个素数能被几个9整除 

*/

#include <stdio.h>


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
	int i=0, j=0, num=0, count=0;
	long long n=9;

	printf("input a number>");
	scanf("%d", &num);

	if (is_prime(num) == 0)
	{
        printf("input error!\n");
        return 0;
	}

	while (1)
	{
		count++;
		if (n%num == 0)
		{
			printf("%d is devided by %lld, %d个'9'\n", num, n, count);
			break;
		}
		n = n*10 +9;
	}

	return 1;
}


//答案
// int main(int argc, char const *argv[])
// {
// 	long int m9=9,sum=9; 
// 	int zi,n1=1,c9=1; 
// 	scanf("%d",&zi); 

// 	while(n1!=0) 
// 	{ 
// 		if(!(sum%zi)) 
// 		n1=0; 
// 		else 
// 		{
// 			m9=m9*10; 
// 			sum=sum+m9; 
// 			c9++; 
// 		} 
// 	} 
// 	printf("%ld,can be divided by %d \"9\"", sum, c9); 

// 	return 0;
// }
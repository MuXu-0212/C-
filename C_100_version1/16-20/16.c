#include <stdio.h>

/*
    题目：输入两个正整数m和n，求其最大公约数和最小公倍数
*/


int main(int argc, char const *argv[])
{
	int common_divisor=0, common_multiple=0;
	int i=0;
	int m=0, n=0;

	scanf("%d%d", &m,&n);

	for (i=1; i<=((m<n)?m:n); i++)
	{
		if(m%i==0 && n%i==0)
		{
			common_divisor=i;
		}
	}
	printf("common_divisor=%d\n", common_divisor);

    i = (m<n)?m:n;
	while (1)
	{
        if (i%m==0 && i%n==0)
        {
        	common_multiple=i;
        	break;
        }
        i++;
	}
	printf("common_multiple=%d\n", common_multiple);

	return 0;
}


//参考
// void main() 
// { 
// 	int a,b,num1,num2,temp; 
// 	printf("please input two numbers:\n"); 
// 	scanf("%d%d",&num1,&num2); 
// 	if(num1 > num2)
// 	{ 
// 		temp=num1; 
// 		num1=num2; 
// 		num2=temp; 
// 	} 
// 	a=num1;b=num2; 

// 	while(b!=0)/*利用辗除法，直到b为0为止*/ 
// 	{ 
// 		temp=a%b; 
// 		a=b; 
// 		b=temp; 
// 	}

// 	printf("gongyueshu:%d\n",a); 
// 	printf("gongbeishu:%d\n",num1*num2/a); 
// } 

#include <stdio.h>

/*
求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时 
共有5个数相加)，几个数相加有键盘控制。
*/


int main(int argc, char const *argv[])
{
	int count = 0, a = 0;

	printf("请输入a的值>");
	scanf("%d", &a);

	printf("请输入count的值>");
	scanf("%d", &count);
    
    printf("sum = ");
	int num=0, sum=0;
	while (count)
	{
		num = num*10 + a;
		sum = sum + num;
		count--;
		if (!count)
		{
			printf("%d", num);
		}
		else
		{
			printf("%d + ", num);
		}
	}

	printf(" = %d\n", sum);
	return 0;
}


//参考
// int main(int argc, char const *argv[])
// {
// 	int a,n,count=1; 
// 	long int sn=0,tn=0; 
// 	printf("please input a and n\n"); 
// 	scanf("%d,%d",&a,&n); 
// 	printf("a=%d,n=%d\n",a,n); 

// 	while(count<=n) 
// 	{ 
// 		tn=tn+a; 
// 		sn=sn+tn; 
// 		a=a*10; 
// 		++count; 
// 	} 
// 	printf("a+aa+...=%ld\n",sn); 

// 	return 0;
// }
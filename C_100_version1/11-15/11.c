#include <stdio.h>

//递归实现
int Fib(int num)
{
    if (num==1 || num==2)
    {
        return 1;
    }
    else
    {
        return Fib(num-2)+Fib(num-1);
    }
}

int main(int argc, char const *argv[])
{
	int n=0;
	scanf("%d", &n);
	printf("%d\n", Fib(n));
	return 0;
}


//参考答案
// void main() 
// { 
// 	long f1,f2; 
// 	int i; 
// 	f1=f2=1; 
// 	for(i=1;i<=20;i++) 
// 	{ 
// 		printf("%12ld %12ld",f1,f2); 
// 		if(i%2==0) printf("\n");/*控制输出，每行四个*/ 
// 		f1=f1+f2; /*前两个月加起来赋值给第三个月*/ 
// 		f2=f1+f2; /*前两个月加起来赋值给第三个月*/ 
// 	} 
// } 
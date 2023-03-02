#include <stdio.h>
#include <math.h>

//自己的错解
int main(int argc, char const *argv[])
{
	int i = 1;
	for (i=1 ; i<10000; i++)
	{
		if (sqrt(i+100)*sqrt(i+100) == i+100 && sqrt(i+268)*sqrt(i+268) == i+268)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}


//更正
// int main(int argc, char const *argv[])
// {
// 	int i = 1, x=0, y=0;
// 	for (i=1 ; i<10000; i++)
// 	{
// 		x=sqrt(i+100);
// 		y=sqrt(i+268);
// 		if (x*x == i+100 && y*y == i+268)
// 		{
// 			printf("%d\n", i);
// 		}
// 	}
// 	return 0;
// }


//参考
// void main() 
// { 
// 	long int i,x,y,z; 
// 	for (i=1;i<10000;i++) 
// 	{
// 		x=sqrt(i+100); /*x为加上100后开方后的结果*/ 
// 		y=sqrt(i+268); /*y为再加上168后开方后的结果*/ 
// 		if(x*x==i+100&&y*y==i+268)/*如果一个数的平方根的平方等于该数，这说明此数是完全平方数*/ 
// 		printf("\n%ld\n",i); 
// 	} 
// }

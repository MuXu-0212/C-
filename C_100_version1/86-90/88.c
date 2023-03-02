/*
	题目：读取7个数（1—50）的整数值，
	每读取一个值，程序打印出该值个数的＊。 
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0,j=0,n=0;
	for (i=0; i<7; i++)
	{
		scanf("%d", &n);
		if (n>=1 && n <=50)
		{
			for (j=0; j<n; j++)
			{
				printf("*");
			}
			printf("\n");			
		}

	}
	return 0;
}




//答案
// int main(int argc, char const *argv[])
// {
// 	int i,a,n=1; 
// 	while(n<=7) 
// 	{ 
// 		do 
// 		{
// 			scanf("%d",&a); 
// 		}while(a<1||a>50); 

// 		for(i=1;i<=a;i++) 
// 			printf("*"); 
		
// 		printf("\n"); 
// 		n++;
// 	}
// 		//getch(); 

// 	return 0;
// }
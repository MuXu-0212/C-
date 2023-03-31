/*
	题目：打印空心菱形
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n=0,i=0,j=0;
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
    	for (j=n-i; j>0; j--)
    	{
    		printf(" ");
    	}
        printf("*");
    	for (j=2; j<2*i-1; j++)
    	{
    		printf(" ");
    	}
    	if (i==1)
    	{
    		printf("\n");
    	}
    	else
    	{
    		printf("*\n");
    	}
    }

    for (i=1; i<n; i++)
    {
	    for (j=0; j<i; j++)
        {
        	printf(" ");
        }
        printf("*");
        for (j=0; j<n-2*(i-1); j++)
        {
        	printf(" ");
        }
        if (i==n-1)
    	{
    		printf("\n");
    	}
    	else
    	{
    		printf("*\n");
    	}
	}
	return 0;
}

//答案
// int main()
// {
// 	int i,j,n,m;
// 	printf("请输入该空心菱形的上半部分行数："); 
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++)//输入外部空格 
// 	{
// 		for(j=n-i;j>=1;j--)
// 		{
// 			printf(" ");//换行 
// 		}
// 		for(m=1;m<=2*i-1;m++)//输入内部空格 
// 		{
// 			if(m==1||m==2*i-1)//只在第i行的第一个和最后一个输出星号，其他位置输出空格 
// 			{
// 				printf("*");
// 			}
// 			else
// 			printf(" "); 
// 		}
// 		printf("\n");//换行 
// 	}
// 	for(i=n-1;i>=1;i--)//下部分要少一行因此i小于n
// 	{
// 		for(j=n-i;j>=1;j--)//打印空格
// 		{
// 			printf(" "); 
// 		}
// 		for(m=2*i-1;m>=1;m--)
// 		{
// 			if(m==1||m==2*i-1)//判断打印空格还是星星，将菱形掏空！ 
// 			{
// 				printf("*");
// 			}
// 			else
// 		    printf(" ");
// 		}
// 		printf("\n");
// 	} 
// 	return 0;
// }

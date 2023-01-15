#include <stdio.h>			
int main()
{
	char c,x;
	char i = 0 ,j = 0 ;

	printf("请输入一个大写字母>");
	c = getchar();
    
    x = 'A';				//A65 B66 C67 D68 E69
	for(i=1;i<=c-x+1;i++)
	{
		for(j=1;j<=c-x+1-i;j++)
		{
			printf(" ");
		}
		for(j=x;j<=64+i;j++)
		{
			printf("%c",j);
		}
		for(j=j-2;j>=x;j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
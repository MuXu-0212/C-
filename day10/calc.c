#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

float div(float a, float b)
{
	if (b==0)
	{
		printf("输入不能为0!\n");
		return 0;
	}

	return a/b;
}

int main(int argc, char const *argv[])
{
	int input=0;

	printf("input a num>");
	scanf("%d", &input);
	do 
	{
		switch()
		{
			case : 
					break;
		}
		printf("input a num>");
		scanf("%d", &input);

	}while(input);
	return 0;
}
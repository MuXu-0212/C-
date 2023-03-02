#include <stdio.h>

int main(int argc, char const *argv[])
{
	float score=0,exit=1;
	printf("请输入>");
	scanf("%f", &score);
	do
	{
		if(score>0 && score<100)
		{
			printf("%c\n", (score>=90)?(65):((score>=60)?66:67));
			printf("请输入>");
			scanf("%f", &score);
		}
		else
		{
			exit=0;
		}
	}while(exit);
	
	return 1;
}
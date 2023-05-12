/*
	1.十进制数转任意进制数
*/


#include <stdio.h>


int main(int argc, char const *argv[])
{
	char ch;
	int num;
	printf("please input a number>");
	scanf("%d", &num);

	printf("transfor(x为16进制，o为8进制，b为2进制)>");
	scanf("%c", &ch);
	if(ch == 'x')
	{
		printf("%x", num);
	}
	else if (ch == 'b')
	{
		printf("%b", num);
	}
	else if(ch == 'o')
	{
		printf("%o", num);
	}
	else
	{
		printf("input error\n");
	}
	return 0;
}


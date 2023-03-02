/*
	4.使用strcmp函数, 模拟账号密码登录,使用指针
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	if (argc!=3)
	{
		printf("输入错误!\n");
		return 0;
	}

	if (strcmp( argv[1], "115") == 0
			&& strcmp( argv[2], "123") ==0)
	{
		printf("登录成功!\n");
	}
	else
	{
		printf("登录失败!\n");
	}

	return 0;
}
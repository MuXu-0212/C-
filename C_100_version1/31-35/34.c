


/*
    题目：练习函数调用
*/

#include <stdio.h>

void print_show()
{
	printf("hello world!\n");
}

int main(int argc, char const *argv[])
{
	int i=0;

	for (i=0; i<5; i++)
	{
        print_show();
	}
	return 0;
}
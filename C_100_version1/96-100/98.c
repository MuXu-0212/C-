/*

    题目:判断大小端序

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a=1;

	char* p=(char* )(&a);

	if (*p == 1)
    {
    	printf("小端序!\n");
    }
    else
    {
    	printf("大端序!\n");
    }
	return 0;
}
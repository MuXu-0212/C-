/*

    题目：宏#define命令练习(3) 

*/


#include <stdio.h>

#define LAG >
#define SMA <
#define EQ ==

typedef int u16;

int main(int argc, char const *argv[])
{
	u16 a=10, b=20;

	if (a LAG b)
	{
        printf("%d > %d\n", a, b);
	}
	else if (a EQ b)
	{
		printf("%d = %d\n", a, b);
	}
	else if (a SMA b)
	{
		printf("%d < %d\n", a, b);
	}
	else
	{
		printf("no value\n");
	}
	return 0;
}
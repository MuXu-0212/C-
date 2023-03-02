/*

    题目：宏#define命令练习(2) 

*/

#include <stdio.h>

#define swap(a, b){\
	int t;\
	t = a;\
	a = b;\
	b = t;\
}

int main(int argc, char const *argv[])
{
	int x=10, y=20;
	printf("x=%d; y=%d\n", x, y);
    
    printf("swapping.....\n");
	swap(x, y);

	printf("x=%d; y=%d\n", x, y);
	return 0;
}
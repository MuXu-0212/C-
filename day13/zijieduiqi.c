#include <stdio.h>

typedef struct stuff{
	char b;
	char buf[16];
	char arr[10];
	int a;
	float c;
}b;	//36

typedef struct stuff1{
	char b;
	int a;
	char buf[16];
	char arr[10];
	float c;
}b1; //40

int main(int argc, char const *argv[])
{
	b c;
	b1 c1;
	printf("&c.b:%p\n",&c.b);
	printf("&c.buf:%p\n",&c.buf);
	printf("&c.buf[15]:%p\n",&c.buf[15]);
	printf("&c.arr:%p\n",&c.arr);
	printf("c:%ld\n", sizeof(c));
	printf("c1:%ld\n", sizeof(c1));
	printf("system:%ld\n", sizeof(int*));
	return 0;
}
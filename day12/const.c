#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a=20;
	int b=0;
	int* const p1 = &a;
	int const *p2 = &a;

	a=30;

	*p1=b;
	p2=&b;

	printf("*p1=%d\n", *p1);
	printf("*p2=%d\n", *p2);
	return 0;
}
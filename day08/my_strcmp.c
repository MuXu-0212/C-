#include <stdio.h>
#include <string.h>

int my_strcmp(char* dest, char* src)
{
	char* p1=dest;
	char* p2=src;

	while(*p1++ == *p2++);

	return *(--p1) - *(--p2);
}

int main(int argc, char const *argv[])
{
	printf("%d\n", my_strcmp("123", "1234"));
	printf("%d\n", strcmp("123", "1234"));
	return 0;
}
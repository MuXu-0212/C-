#include <stdio.h>

struct animals
{
	char dog;
	unsigned long cat;
	unsigned short pig;
	char fox;
};

int main(int argc, char const *argv[])
{
	printf("%d\n", sizeof(struct animals));
	return 0;
}
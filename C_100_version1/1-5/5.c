#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x=0, y=0, z=0;
	scanf("%d%d%d", &x, &y, &z);

	printf("max=%d\n", (x>y)?((x>z)?x:z):((y>z)?y:z));
	return 0;
}
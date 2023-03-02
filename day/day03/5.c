#include <stdio.h>

int main(int argc, char const *argv[])
{
	float tem = 0;
    
    scanf("%f",&tem);

    printf("%.2f\n", 5 * (tem - 32) / 9);

	return 0;
}
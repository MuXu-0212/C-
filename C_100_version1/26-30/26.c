#include <stdio.h>

/*

    题目：利用递归方法求5!。

*/

int recursion(int num)
{
    if (num < 1)
    {
        return 1;
    }
    else
    {
        return recursion(num-1)*num;
    }
}

int main(int argc, char const *argv[])
{
	printf("%d\n", recursion(5));
	return 0;
}
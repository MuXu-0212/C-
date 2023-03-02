
/*

	题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，
	十位与千位相同。

*/

#include <stdio.h>

int Is_Palindromic_number(int num)
{

	if (num/10000 == num%10 
		&& (num%10000)/1000 == (num/10)%10 )
	{
        return 1;
	}
	else
	{
        return 0;
	}
}

int main(int argc, char const *argv[])
{
    int num=0, count=0;
    scanf("%d", &num);

    // int n=num;
    // while (n)
    // {
    // 	n /=10;
    // 	count++;
    // }
    // printf("count=%d\n", count );

	if (Is_Palindromic_number(num))
	{
		printf("%d is\n", num);
	}
	else 
	{
		printf("%d is not\n", num);
	}
	return 0;
}
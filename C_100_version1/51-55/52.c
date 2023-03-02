/*

    题目：学习使用按位或 | 。 
    0|0=0; 0|1=1; 1|0=1; 1|1=1 

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b; 
	a=077; 
	b=a|3; 
				// 0011 1111  --  a
				// 0000 0011  --  3
				// 0011 1111  --  b  63
	printf("\40: The a & b(decimal) is %d \n",b); 


	b|=7; 
				// 0011 1111  --  b
				// 0011 1011  --  7
				// 0011 1111  --  b  63
	printf("\40: The a & b(decimal) is %d \n",b); 

	return 0;
}
/*

    题目：学习使用按位取反~。 
    ~0=1; ~1=0

*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b; 
	a=234; 
	b=~a; 
			//0000 .... 1110 1010  --  234 --  a
			//1111 .... 0001 0101  --  21  --  b=~a  --  补码
			//1111 .... 0001 0100  --  20  --  b=~a  --  反码
			//1000 .... 1110 1011  -- -235 --  b=~a  --  原码

			//原码取反得反码,反码加一得补码
	
	printf("\40: The a's 1 complement(decimal) is %d \n",b); 

	a=~a; 
			//0000 .... 1110 1010  --  234 --  a
			//1111 .... 0001 0101  --  21  --  a=~a  --  0xf...15
	printf("\40: The a's 1 complement(hexidecimal) is %x \n",a); 

	return 0;
}
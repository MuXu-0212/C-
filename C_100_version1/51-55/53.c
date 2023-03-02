/*

    题目：学习使用按位异或 ^ 。 
    0^0=0; 0^1=1; 1^0=1; 1^1=0 

*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b; 
	a=077;  	//  二进制		八进制
				//0011 1111  --  77  --  a
				//0000 0011  --   3  
				//0011 1100  --  74  --  b
	b=a^3; 
	printf("\40: The a & b(decimal) is %o \n",b); 

	b^=7; 
				//0011 1100  --  74  --  b
				//0000 0111  --   7 
				//0011 1011  --  73  --  b=b^7
	printf("\40: The a & b(decimal) is %o \n",b); 

	return 0;
}
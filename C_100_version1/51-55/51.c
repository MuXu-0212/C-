/*

    题目：学习使用按位与 & 。 
    0&0=0; 0&1=0; 1&0=0; 1&1=1 

*/

#include <stdio.h>



int main(int argc, char const *argv[])
{
	int a=077, b=a&3;
	printf("a=%d\n", a);	//0011 1111  --  a
							//0000 0011
							//0000 0011  --  b
	printf("The a & b(decimal) is %d \n",b);

	b = b&7;
							//0000 0011  --  b
							//0000 1011  --  7
							//0000 0011  --  b
	printf("The a & b(decimal) is %d \n",b);
	return 0;
}
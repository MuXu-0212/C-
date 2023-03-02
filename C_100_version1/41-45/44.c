/*

    题目：学习使用external的用法。

*/

#include <stdio.h>

int a,b,c; 

void add() 
{ 
	int a; 
	a=3; 
	c=a+b; 
	printf("void add():a=%d\n", a);
	printf("void add():b=%d\n", b);
	printf("void add():c=%d\n", c);
}

int main(int argc, char const *argv[])
{
	a=b=4; 
	add(); 
	printf("The value of c is equal to %d\n",c); 

    return 0;
}
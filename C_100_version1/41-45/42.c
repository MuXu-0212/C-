/*

    题目：学习使用auto定义变量的用法 

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0,num=0; 
	num=2; 
	for (i=0;i<3;i++) 
	{ 
		printf("\40: The num equal %d \n",num); 
	    num++; 

		{ 
			auto int num=1; 
			printf("\40: The internal block num equal %d \n",num); 
			num++; 
		} 

	} 

	return 0;
}
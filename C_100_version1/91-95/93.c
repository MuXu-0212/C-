/*
	题目：时间函数举例3 
*/

#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	clock_t start,end; 
	int i; 
	double var; 
	start=clock(); 
	for(i=0;i<10000;i++) 
	{ 
		printf("\1\1\1\1\1\1\1\1\1\1\n");
	} 
	end=clock(); 
	printf("\1: The different is %6.3f\n",(double)(end-start)); 

	return 0;
}
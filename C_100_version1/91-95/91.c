/*
	题目：时间函数举例1  
*/

#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t lt; /*define a longint time varible*/ 
	lt=time(NULL);/*system time and date*/ 
	printf(ctime(<)); /*english format output*/ 
	printf(asctime(localtime(<)));/*tranfer to tm*/ 
	printf(asctime(gmtime(<))); /*tranfer to Greenwich time*/ 

	return 0;
}
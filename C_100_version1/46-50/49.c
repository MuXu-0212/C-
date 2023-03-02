/*

    题目：#if #ifdef和#ifndef的综合应用。

*/


#include <stdio.h>

#define MAX
#define MAXNUM(x, y)  (x>y)?x:y
#define MINNUM(x, y)  (x<y)?x:y

int main(int argc, char const *argv[])
{
	int a=10, b=20;

    #ifdef MAX
    printf("The larger one is %d\n", MAXNUM(a,b));
    #else
    printf("The lower one is %d\n",MINNUM(a,b));
    #endif

    #ifndef MIN
    printf("The larger one is %d\n", MAXNUM(a,b));
    #else
    printf("The lower one is %d\n",MINNUM(a,b));
    #endif

    #undef MAX
    #ifdef MAX
    printf("The larger one is %d\n",MAXNUM(a,b)); 
	#else 
	printf("The lower one is %d\n",MINNUM(a,b)); 
	#endif 
    
    #define MIN 
	#ifndef MIN 
	printf("The lower one is %d\n",MININUM(a,b)); 
	#else 
	printf("The larger one is %d\n",MAXNUM(a,b)); 
	#endif 

    
	return 0;
}
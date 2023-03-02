/*

    题目：放松一下，算一道简单的题目。 

*/


#include <stdio.h>
#include <malloc.h>

int main(int argc, char const *argv[])
{
	int i,n; 
	for(i=1;i<5;i++) 
	{ 
		n=0; 
		if(i!=1) 
			n=n+1; 
		if(i==3) 
			n=n+1; 
		if(i==4) 
			n=n+1; 
		if(i!=4) 
			n=n+1; 
		if(n==3) 
			printf("zhu hao shi de shi:%c\n",64+i); 
	} 

	return 0;
}

//分析
/*
    i    n    zhu hao shi de shi
    1    1    
    2    2
    3    3    C
    4    2    
*/
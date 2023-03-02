/*

    题目：填空练习（指向指针的指针） 

*/


#include <stdio.h>


int main(int argc, char const *argv[])
{
	char *s[]={"man","woman","girl","boy","sister"}; 
    char **q; 
    int k; 
    for(k=0;k<5;k++) 
    { 
        q = &(s[k]);    /*这里填写什么语句*/  
        printf("%s\n",*q); 
    } 

    printf("=======================\n");

    for(k=0;k<5;k++) 
    { 
        q = s+k;    /*这里填写什么语句*/  
        printf("%s\n",*q); 
    } 


	return 0;
}




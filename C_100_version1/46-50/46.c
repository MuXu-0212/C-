/*

    题目：宏#define命令练习(1) 

*/

#include <stdio.h>

#define PI 3.1415926
#define STR "test_string"
#define MIN(a, b)  (a>b)?b:a  
#define SQ(x)  x*x

int main(int argc, char const *argv[])
{
	int a=0, b=0, x=0;
    
    printf("PI=%lf\n", PI);
    
    printf("STR:%s\n", STR);

    printf("input two number of comparison>\n");
    scanf("%d%d", &a, &b);

    printf("input a number>\n");
    scanf("%d", &x);
    
    printf("min=%d\n", MIN(a, b));
    printf("%d*%d=%d\n", x, x, SQ(x));
    return 0;
}
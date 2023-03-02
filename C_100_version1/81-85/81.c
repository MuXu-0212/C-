/*

        题目：809*??=800*??+9*??+1 其中??代表的两位数,
        8*??的结果为两位数，9*??的结果为3位数。
        求??代表的两位数，及809*??后的结果。

*/


#include <stdio.h>

int main()
{
    int i=0;

    for (i=10; i<=99; i++)
    {
        int num=809*i + 1;
        if (8*i>=10 && 8*i<=99 && 9*i<=999 && 9*i>=100
            && num>1000 && num<=10000)
        {
            printf("\?\?=%d\n", i);
            printf("809*\?\?=%d\n", 809*i);
            break;
        }
    }

    return 0; 
}



//答案
// void output(long b,long i) 
// { 
//     printf("\n%ld/%ld=809*%ld+%ld\n\n",b,i,i,b%i); 
// } 

// int main() 
// {
//     long int a,b,i; 
//     a=809; 

//     for(i=10;i<100;i++) 
//     {
//         b=i*a+1; 
//         if(b>=1000&&b<=10000&&8*i<100&&9*i>=100) 
//         output(b,i); 
//     } 

//     return 0;
// } 


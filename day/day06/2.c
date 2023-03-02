#include <stdio.h>

int main()
{
    int a[4] = {1, 2, 3, 4};
    int *p1 = (int*)(&a+1);
    //int *p2 = (int*)((int)a+1);
    int *p3 = (int*)((int*)a+1);

    //printf("%x, %x\n",p1[-1], *p2);     //0x04  0x02

    //printf("(int*)((int)a+1) = %x\n", *p2);
    printf("(int*)((int*)a+1) = %x\n", *p3);
	return 0;
} 
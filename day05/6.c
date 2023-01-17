#include <stdio.h>

int main()
{
	int *ptr1;
	int torf1[2][2]= {12, 14, 16};
	ptr1 = torf1[0];

	int *ptr2; 
	int fort2[2][2]= {{12}, {14, 16}};
	ptr2 = fort2[0];

	printf("*ptr1=%d *(ptr1+2)=%d\n", *ptr1, *(ptr1+2));
	printf("*ptr2=%d *(ptr2+2)=%d\n", *ptr2, *(ptr2+2));
}


#include <stdio.h>

#define MAXSIZE 5 

int main()
{
    int arr1[MAXSIZE] = {1, 2, 3, 4, 5};
    int arr2[MAXSIZE] = {0};
    int i=0;

    for (i=0; i<MAXSIZE; i++)
    {
        arr2[0] = arr2[0] + arr1[i];
    }
    printf("%d\n",arr2[0]);

    return 0;
}
#include <stdio.h>

void upper_case(char str[])
{
    int i;
    //for (i=0;i<sizeof(str)/sizeof(str[0]);i++)
    //for (i=0;i<sizeof(str)/sizeof(*(str+0));i++)
    for (i=0;i<sizeof(str)/sizeof(str[0]);i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -=('a' - 'A');
    }
}

int main()
{
    char str[] = "aBcDe";

    printf("length of the string :%d\n", sizeof(str)/sizeof(str[0]));

    upper_case(str);
    printf("%s\n", str);
	return 0;
} 
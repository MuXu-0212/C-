#include<stdio.h>
#include<string.h>

#define MAXSIZE 50

char* char_clear_repeate(char* arr)
{
    char* pre = arr;        //指向当前字符
    char* p = NULL;         //遍历字符串的指针
    char* qq = NULL;        //p移动到重复字符时,用于保存p的地址
    char* q = NULL;         //指向p后一位元素的地址

    while (*pre)            
    {
        for (p = pre + 1; *p != '\0'; p++)  //从pre后面的第一个元素开始遍历
        {
            if (*p == *pre )                //遇到重复字符
            {
                qq = p;                     //qq指针保存重复字符p的地址
                for (q = p + 1; ; )         //q保存p后第一个元素的地址
                {
                    *qq++ = *q++;           //后续字符串前移覆盖p指向的那个重复元素
                    if (*q == '\0')
                    {
                        *qq = *q;
                        break;
                    }
                }
                break;
            }
        }
        pre++;
    }
    return arr;
}
int main()
{
	char arr[MAXSIZE] = {0};
    gets(arr);

    //printf("%s\n", arr);
    printf("%s\n", char_clear_repeate(arr));
    return 0;
}
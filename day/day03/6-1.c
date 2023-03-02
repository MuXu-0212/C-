#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    int b = 0, a = 0;
    char c;
    // while ((c = getchar()) != '\n')
    // {
    //         str1[b++] = c;
    // }
    gets(str1);
    printf("str1 %s\n", str1);
	a = strlen(str1);
	printf("%d\n",a);

     for (int i = 0; i < strlen(str1); i++)
    {
        //如果是空格，则移位覆盖删除
        if (str1[i] == ' ')
        {
            for (int j = i; j < strlen(str1); j++)
            {
                str1[j] = str1[j + 1];
            }
            i--; //b先移到空格的位置，但是未检测b是否是空格，所以再检测刚才空格位置是否还是空格（此时空格位置是b）
        }
    }
    printf("str1 %s\n", str1); 

    return 0;
}

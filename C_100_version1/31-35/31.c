
/*

	题目：请输入星期几的第一个字母来判断一下是星期几，
	如果第一个字母一样，则继续判断第二个字母。

	Monday、Tuesday、Wednesday、Thursday、Friday、Saturday、Sunday

*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c=0;
    c = getchar();
    char c1;
    getchar();
    switch(c)
    {
    	case 'm':
    		printf("星期一\n");
    		break;
    	case 't':
            c1 = getchar();
            if (c1 == 'u')
            {
    	        printf("星期二\n");
            }
            else if (c1 == 'h')
            {
    	        printf("星期四\n");
            }
            else
            {
            	printf("输入错误!\n");
            }
    		break;
    	case 'w':
    		printf("星期三\n");
    		break;
        case 'f':
    		printf("星期五\n");
    		break;
    	case 's':
            c1 = getchar();
    		if (c1 == 'a')
            {
    	        printf("星期六\n");
            }
            else if (c1 == 'u')
            {
    	        printf("星期天\n");
            }
            else
            {
            	printf("输入错误!\n");
            }
    		break;
    	default:
    			printf("输入错误!\n");
    }
	return 0;
}
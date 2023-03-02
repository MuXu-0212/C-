#include <stdio.h>
#include <string.h>

/*
    题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
*/

int main(int argc, char const *argv[])
{
	//fflush(stdin);
	char str[30]={0};
	int space=0, character=0, letter=0, num=0; 
    char* p=str;
    char* q=NULL;
	
	char c = 0;
    printf("请输入>");
    c = getchar();
    while (c != '\n')
    {
    	switch (c)
    	{
    		case '0' ... '9':
    		    num++;
    		    break;
            case 'a' ... 'z':
                letter++;
                break;
            case 'A' ... 'Z':
                letter++;
                break;
            case ' ':
                space++;
                break;
            default:
                character++;
                break;
    	}
        c = getchar();
    }
    printf("space=%d, character=%d, letter=%d, num=%d\n",
    	space, character, letter, num);
	return 0;
}


//参考
// int main(int argc, char const *argv[])
// {
//     char c; 
//     int letters=0,space=0,digit=0,others=0; 
//     printf("please input some characters\n"); 

//     while((c=getchar())!='\n') 
//     { 
//         if(c>='a'&&c<='z'||c>='A'&&c<='Z') 
//         letters++; 
//         else if(c==' ') 
//         space++; 
//         else if(c>='0'&&c<='9') 
//         digit++; 
//         else 
//         others++; 
//     } 

//     printf("all in all:char=%d space=%d digit=%d others=%d\n",letters, 
//     space,digit,others);

//     return 0;
// }
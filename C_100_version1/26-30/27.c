#include <stdio.h>

/*

    题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

*/


void reverse_show()
{
	char c=0;

	c=getchar();
	if (c != '\n')
	{
        reverse_show();
	}
    else
    {
        return ;
    }

    printf("%c", c);
}

int main(int argc, char const *argv[])
{
	printf("请输入>");
	reverse_show();
	printf("\n");
	return 0;
}


// void reverse_output () ;
// int main ()
// {
//     printf ( "请输入字符串，以回车结束 ：\n" );
 
//     reverse_output ();
 
//     printf ( "\n以上是反序的输出 " );
 
//     return 0;
// }
 
// void reverse_output ( )
// {
//     char ch_input;
//     ch_input=getchar(  );
 
//     if ( ch_input != '\n' )
//         reverse_output () ;
//     else
//         return ;
 
//     printf ( "%c" , ch_input );
// }



/*
    题目：文本颜色设置
*/

/*
	目前以linux C编程为主, 相关功能无法在linux上实现, 故没有特意做这题
*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
	int color;
	for (color = 1; color < 16; color++)
	{
		textcolor(color);/*设置文本颜色*/
		cprintf("This is color %d\r\n", color);
	}

	textcolor(128 + 15);
	cprintf("This is blinking\r\n");

	return 0;
}
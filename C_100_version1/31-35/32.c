/*

	题目：Press any key to change color, do you want to try it. 
	Please hurry up!

*/

/*
	目前以linux C编程为主, 相关功能无法在linux上实现, 故没有特意做这题
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int color;
	for (color = 0; color < 8; color++)
	{ 
		textbackground(color);/*设置文本的背景颜色*/
		cprintf("This is color %d\r\n", color);
		cprintf("Press any key to continue\r\n");
		getch();/*输入字符看不见*/
	}

	return 0;
}
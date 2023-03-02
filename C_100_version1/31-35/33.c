
/*

    题目：学习gotoxy()与clrscr()函数

*/

/*
	目前以linux C编程为主, 相关功能无法在linux上实现, 故没有特意做这题
*/


#include <stdio.h>


int main(int argc, char const *argv[])
{
	clrscr();/*清屏函数*/
	textbackground(2);
	gotoxy(1, 5);/*定位函数*/
	cprintf("Output at row 5 column 1\n");
	textbackground(3);
	gotoxy(20, 10);
	cprintf("Output at row 10 column 20\n");

	return 0;
}
#include "common.h"

//  userinfouserinfo_create()
// {
	
// 	return NULL;
// }


// int com_buy_strick()


//用户购票功能
int com_buy(p_user h)
{
	system("clear");
	int input = 0;

	flight_print( h);  //打印航班信息, 该函数的声明定义在login文件;

	while (1)
	{
		printf("请选择航班班次>");
		scanf("%d", &input);
		for (int i=1; i<=flight_frequency; i++)
		{
			if (input == i)
			{
				com_buy_strick();
				break;
			}
		}
	}


}

//用户查看功能
int com_find(p_user h)
{
	;
}

//用户修改个人信息功能
int com_revise(p_user h)
{
	;
}

//删除历史信息功能
int com_delete(p_user h)
{
	;
}

//航班查询


int com_revise_find( h);

//用户界面
int com_menu()
{
	print_(40);
	printf("\t   用户界面\n");
	printf("\t1. 购票\n");
	printf("\t2. 查看个人信息\n");
	printf("\t3. 修改个人信息\n");
	printf("\t4. 删除历史信息\n");
	printf("\t0. 退出登录\n");
	print_(40);
}


int common(p_user h)
{
	int input=0;
	while (1)
	{
		com_menu();
		printf("用户,请选择操作>");
		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				com_buy( h);
				break;
			case 2:
				com_find( h);
				break;
			case 3:
				com_revise( h);
				break;
			case 4:
				com_delete( h);
				break;
			case 0:
				return 1;
			default:
				printf("选择错误, 重来!\n\n");
				break;
		}
	}
}
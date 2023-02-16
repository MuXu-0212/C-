#include "administrator.h"

//打印-
void print_(int num)
{
	for (int i=0; i<num; i++)
		printf("-");
	printf("\n");
}

//管理员操作界面
void admi_menu()
{
	print_(40);
	printf("\t   administrator\n");
	printf("\t1. increase new user\n");
	printf("\t2. delete a user\n");
	printf("\t3. revise user's information\n");
	printf("\t0. exit system\n");
	print_(40);

}

//管理员“添加”功能的菜单
void admi_add_menu() 
{
	print_(40);
	printf("\t   increase menu\n");
	printf("\t0. increase new administrator\n");
	printf("\t1. increase new common user\n");
	printf("\t2. increase new vip user\n");
	printf("\t3. exit add\n");
	print_(40);
}

//管理员添加用户，flag为用户级别
int admi_add_user(p_user h, int flag)
{
	user* new = (user*)malloc(sizeof(user));
	if (new == NULL)
	{
		printf("create by default!\n");
		return 0;
	}

	while (getchar()!='\n');

	char id[MAXSIZE_ID]={0};
	char pw[MAXSIZE_PW]={0};

	printf("input new id>");
	scanf("%[^\n]", id);
	while (getchar()!='\n');

	printf("input new pw>");
	scanf("%[^\n]", pw);
	while (getchar()!='\n');

	user* p=h;
	for (p=h; p->next != NULL; p=p->next);

	new->flag = flag;
	strcpy(new->id, id);
	strcpy(new->pw, pw);

	new->next = p->next;
	p->next = new;
}

//管理员添加功能
int admi_add(p_user h)
{
	int input=0;
	while (1)
	{
		// system("clear");
		printf("\n");
		admi_add_menu();
		printf("master, select a option>");
		scanf("%d", &input);

		if (input == 3)		//input=0为退出该选项
		{
			system("clear");
			return 1;
		}

		if (input == 0)
		{
			admi_add_user( h, input);
		}
		else if (input == 1)
		{
			admi_add_user( h, input);
		}else if(input == 2)
		{
			admi_add_user( h, input);
		}
		
		if (input >=0 && input <=2)
		{
			printf("increase successfully!\n");
		}
		else
		{
			while (1)
			{
				printf("is keping to increase a new user?\n");
				printf("1.yes  2.no\n");
				scanf("%d", &input);
				if (input == 1)
				{
					break;
				}
				else if (input == 2)
				{
					return 1;
				}
				else
				{
					printf("input error, trying again!\n");
				}
			}
		}
	}
}

//删除用户
int admi_delete(p_user h)
{
	int flag=0;
	if (h->next == NULL)
	{
		printf("there have no information!\n");
		return 0;
	}

	char id[MAXSIZE_ID]={0};
	while (getchar()!='\n');

	while (1)
	{
		memset(id, 0, sizeof(id));
		printf("\ndelete user\n");
		printf("master, input user'id>");
		scanf("%[^\n]", id);
		while (getchar()!='\n');

		user* p=NULL;
		//遍历链表,找到需要删除的账号
		for (p=h; p->next->next!=NULL; p=p->next)
		{
			if ( !strcmp(p->next->id, id) )
			{
				flag=1;
				break;
			}
		} /*for (p=h; p->next->next!=NULL; p=p->next)*/

		if (flag)
		{
			user* temp = p->next;
			p->next = temp->next;
			free(temp);
			printf("remove succefully!\n\n");
			return 1;		
		}
		else
		{
			printf("error, input again!\n\n");
		}		
	}

}

//管理员模块
void administrator(p_user h)
{
	int input=0;
	while (1)
	{
		admi_menu();
		printf("master, select a option>");
		scanf("%d", &input);
		
		switch (input)
		{
			case 1:
				admi_add( h);
				break;
			case 2:
				admi_delete( h);
				break;
			case 3:
				// admi_revise();
				break;
			case 4:
				// admi_find();
				break;
			case 0:
				// admi_exit();
				break;
			default:
				break;
		}
	}
}



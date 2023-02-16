#include "administrator.h"

user* user_create(void)
{
    user* head = (user*)malloc(sizeof(user));
    if (head == NULL)
    {
    	printf("创建失败!\n");
    	return NULL;
    }

    memset(head->id, 0, sizeof(head->id));
    memset(head->pw, 0, sizeof(head->pw));
    head->next=NULL;
    head->flag=0;
    return head;
}

//尾插法新增用户
//h为用户数据库, id为新增账号, pw为新增密码, 
//flag区分普通用户、会员、管理员、
int user_TailAdd(p_user h, char* id, char* pw, int flag)
{
	user* new = (user*)malloc(sizeof(user));
	if (new == NULL)
	{
		printf("新账号创建失败!\n");
		return 0;
	}

	user* p = NULL;
	for (p=h; p->next!=NULL; p=p->next);
    
    new->next = p->next;
    p->next = new;
    strcpy(new->id, id);
    strcpy(new->pw, pw);
    new->flag=flag;

    printf("添加成功!\n");
    return 1;
}


//隐藏用户输入的密码
char* hide_password(char* pw)
{
	char c=0;
	int i=0;
	system("stty -echo");
	while (1)
	{
		c = getchar();
        if (c == '\n' 
        	|| c == '\r')
        {
        	break;
        }
        putchar('*');
        pw[i++] = c;
	}

	pw[i] = '\0';
	printf("\n%s\n", pw);
	system("stty echo");
	return pw;
}

//登录情况打印
int login_print(int flag, p_user p)
{
	if (flag == 0 || p == NULL)
	{
        printf("信息有误！\n");
        return 0;
	}
	else
	{
		system("clear");
		printf("登入成功！\n");
		switch (p->flag)
		{
			case 2:
				printf("用户,您好！\n");
				break;
			case 1:
				printf("会员,您好！\n");
				break;
			case 0:
				printf("welcome to coming, master!\n");
				break;
		}	
		return 1;	
	}
}

//登录信息校验
int compare_IdAndPw(p_user h, char* id, char* pw)
{
	user* p=h;
	int flag=0;

	for (p=h->next; p!= NULL; p=p->next)
	{
		if (!strcmp(p->id, id)
			&& !strcmp(p->pw, pw))
		{
			flag = 1;
			break;
		}
	}

	return login_print( flag, p);
}


//用户登录
void user_login(p_user person)
{
	int i=3;
	char id[MAXSIZE_ID]={0};
	char pw[MAXSIZE_PW]={0};

	while (i--)
	{
		memset(id, 0, sizeof(id));
		memset(pw, 0, sizeof(pw));

		//system("clear");
		printf("请输入账号>\n");
		scanf("%[^\n]", id);
		while (getchar()!='\n');

		printf("请输入密码>\n");
		hide_password( pw);

		int ret = compare_IdAndPw( person, id, pw) ;
        if (ret)
        {
        	break;
        }

        system("clear");

        if (i != 0)
        {
        	printf("还有%d次输入机会\n\n", i);
        }
        else
        {
        	printf("次数用尽,登录失败!\n");
        }
	}

}

void ManageSystem(void)
{
	//flag=2代表该结构体信息为普通用户信息
	user* person = user_create();
	user_TailAdd(person, "111", "111", 2);

	//flag=1代表该结构体信息为会员信息
	user_TailAdd(person, "222", "222", 1);

	//flag=0代表该结构体信息为管理员信息
	user_TailAdd(person, "333", "333", 0);

	system("clear");

	user_login(person);
    administrator(person);
}
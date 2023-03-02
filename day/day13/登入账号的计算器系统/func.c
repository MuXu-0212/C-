#include "head.h"

/*----------------------------------------------------
	用户信息
*/
    people user[MAXSIZE_USER_NUM]={
    	{"115", "123"}, 
    	{"111", "456"}
    };

/*----------------------------------------------------
	登入
*/
int login(/*int argc, char const *argv[]*/)
{
	char account[MAXSIZE_ACCOUNT]={0};
	char passcode[MAXSIZE_PASSCODE]={0};
	int account_i=0;
	int passcode_i=0;
	char c=0;

//用户重新登入后输入账号密码
again:

/*----------------------------------------------------
	将存放用户输入的数组置0
*/
	memset(account, 0, sizeof(account));
	memset(passcode, 0, sizeof(passcode));

	account_i=0;
	passcode_i=0;	

/*----------------------------------------------------
	用户输入信息
*/
	printf("输入用户账号>");
	while (1)
	{
		c=getchar();
		if (c == '\n' || c == '\r')
		{
			account[account_i]='\0';
			break;
		}
		account[account_i++]=c;
	}

	printf("输入密码>");
	//隐藏输入的密码
    system("stty -echo");
	// account_i=0;
	while (1)
	{
		c=getchar();
		if (c == '\n' || c == '\r')
		{
			passcode[passcode_i]='\0';
			printf("\n");
			break;
		}
        putchar('*');
		passcode[passcode_i++]=c;
	}
    printf("%s\n", passcode);
	system("stty echo");

    //比对输入的账号密码
    int i=0, flag=0;
    for (i=0; i<len; i++)
    {
    	if (!strcmp(account, user[i].account)
    			&& !strcmp(passcode, user[i].passcode) )
    	{
    		user_i = i;
    		flag = 1;	//密码正确,flag置1
    		break;
    	}
    }
    if (flag == 0)  //密码错误
    {
    	system("clear");
    	printf("输入错误!\n");
    	goto again;	//返回输入处,重新输入
    	
    }

    system("clear");
    printf("登录成功!\n");
    return 1;
}


float add(float a, float b)
{
	return a+b;
}

float sub(float a, float b)
{
	return a-b;
}

float mul(float a, float b)
{
	return a*b;
}

float divi(float a, float b)
{
	return a/b;
}

void calc()
{
	float x, y;
	char ch;

	printf("----------------------\n");
	printf("输入两个数和运算符(如 a + b)>");
	scanf("%f %c %f", &x, &ch, &y);
	switch (ch)
	{
		case '+':
			printf("%.2f + %.2f = %.2f\n", x, y, add(x, y));
			break;
		case '-':
			printf("%.2f - %.2f = %.2f\n", x, y, sub(x, y));
			break;
		case 'x':
			printf("%.2f * %.2f = %.2f\n", x, y, mul(x, y));
			break;
		case '/':
			printf("%.2f / %.2f = %.2f\n", x, y, divi(x, y));
			break;
		default:
			printf("输入错误!\n");

	}
	printf("\n");
}


int create_user(person user)
{
	int i=0, flag=1;
	char account[MAXSIZE_ACCOUNT]={0};
	char passcode1[MAXSIZE_PASSCODE]={0};
	char passcode2[MAXSIZE_PASSCODE]={0};
	while (getchar()!='\n');
	while (1)
	{
		memset(account, 0, sizeof(account));

		printf("请输入新账号>");
		scanf("%[^\n]", account);
		while (getchar()!='\n');

		for (i=0; i<len; i++)
		{
			if (!strcmp(user[i].account, account))
			{
				flag=0;
			}
		} 

		if (flag)
		{
			strcpy(user[i].account, account);
			while (1)
			{
				memset(passcode1, 0, sizeof(passcode1));
				memset(passcode2, 0, sizeof(passcode2));

				printf("请输入密码>");
				scanf("%[^\n]", passcode1);
				while (getchar()!='\n');

				printf("请再次输入密码>");
				scanf("%[^\n]", passcode2);
				while (getchar()!='\n');

				if (!strcmp(passcode1, passcode2))
				{
					strcpy(user[i].passcode, passcode1);
					printf("添加成功!\n");
					len++;
					return 1;
				}				
			}

		}
		printf("账号重复,请重新输入!\n");
	}

}

void revise()
{
	while (getchar()!='\n');
	char string[MAXSIZE_PASSCODE]={0};
	printf("输入新密码>");
	scanf("%[^\n]", string);
	while (getchar()!='\n');
	strcpy(user[user_i].passcode, string);
	printf("密码修改成功!\n\n");

}


void menu_print()
{
	printf("\n---------   计算器  ---------\n");
	printf("-----------------------------\n");
	printf("-------   0. 退出    --------\n");
	printf("-------   1. 改密码  --------\n");
	printf("-------   2. 计算    --------\n");
	printf("------- 3. 创建新用户 -------\n");
	printf("----------------------------\n");
}

void menu()
{
	int input=0;
	while (1)
	{
		printf("\n\n");
		menu_print();
		printf("请选择一个选项>");
		scanf("%d", &input);

		if (input == 0)
		{
			system("clear");
			getchar();
			break;
		}

		switch (input)
		{
			case 1:
				revise();
				break;
			case 2:
				calc();
				break;
			case 3:
				create_user( user);
				break;
			default :
				printf("input error!\n\n");
		}

	}
}
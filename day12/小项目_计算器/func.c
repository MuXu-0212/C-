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
	

	for (account_i=0 ; account_i<MAXSIZE_ACCOUNT; account_i++)
	{
		account[MAXSIZE_ACCOUNT]=0;
	}

	for (passcode_i=0 ; passcode_i<MAXSIZE_ACCOUNT; passcode_i++)
	{
		passcode[MAXSIZE_PASSCODE]=0;
	}

	account_i=0;
	passcode_i=0;	

/*----------------------------------------------------
	用户输入信息
*/
	printf("input account>");
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

	//printf("111\n");
	//while (getchar()!='\n');

	printf("input passcode>");
    system("stty -echo");
	account_i=0;
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

	//printf("222\n");



/*----------------------------------------------------
		判断账号密码输入条数,"./a.out"默认算一个,
	账号密码各算一个,总共三个,多或者少都错误
*/
	// if (argc != 3)
	// {
	// 	printf("error!\n");
	// 	return 0;
	// }


//判断账号密码是否正确
    // int i=0, flag=0;
    // for (i=0; i<MAXSIZE_USER_NUM; i++)
    // {
    // 	if (strcmp(argv[1], user[i].account) == 0
    // 			&& strcmp(argv[2], user[i].passcode) == 0)
    // 	{
    // 		flag = 1;
    // 		break;
    // 	}
    // }
    // if (flag == 0)
    // {
    // 	printf("input error!\n");
    // 	return 0;
    // }
    // printf("login succefully!\n");
    // return 1;

    //比对输入的账号密码
    int i=0, flag=0;
    for (i=0; i<MAXSIZE_USER_NUM; i++)
    {
    	if (strcmp(account, user[i].account) == 0
    			&& strcmp(passcode, user[i].passcode) == 0)
    	{
    		user_i = i;
    		flag = 1;	//密码正确,flag置1
    		break;
    	}
    }
    if (flag == 0)  //密码错误
    {
    	printf("input error!\n");
    	printf("======================\n");
    	goto again;	//返回输入处,重新输入
    	
    }

    printf("login succefully!\n");
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
/*
	// printf("input a number>");
	// scanf("%d", &x);

	// getchar();
	// printf("input a character>");
	// scanf("%c", &ch);

	// printf("input a number>");
	// scanf("%d", &y);
*/
	printf("----------------------\ninput two numbers>");
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
			printf("error!\n");

	}
	printf("\n");
}

void revise()
{
	while (getchar()!='\n');
	char string[MAXSIZE_PASSCODE]={0};
	printf("input new passcode>");
	scanf("%[^\n]", string);
	while (getchar()!='\n');
	strcpy(user[user_i].passcode, string);
	printf("passcode revised!\n\n");

}


void menu_print()
{
	printf("\n----------------------------\n");
	printf("---------  计算器  ---------\n");
	printf("----------0. 退出-----------\n");
	printf("----------1. 改密码---------\n");
	printf("----------2. 计算-----------\n");
	printf("----------------------------\n");
}

void menu()
{
	menu_print();
	int input=0;
	while (1)
	{
		printf("select a option>");
		scanf("%d", &input);
		//getchar();

		if (input == 0)
		{
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
			default :
				printf("input error!\n\n");
		}

	}
}
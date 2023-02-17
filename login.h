#ifndef __login_h_
#define __login_h_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#define MAXSIZE_ID 30
#define MAXSIZE_PW 30

#define MAXSIZE_START 30
#define MAXSIZE_DESTINATION 30
#define MAXSIZE_DATA 30
#define MAXSIZE_CLASS 3


//账号登录信息
typedef struct user{
	char id[MAXSIZE_ID];
	char pw[MAXSIZE_PW];
	int flag; /*有三个值,0为管理员,1为会员,2为普通用户*/
	struct user* next;
}user,* p_user;

//航班信息
typedef struct flight_info
{
	int flight_frequency;	//班次
	char start[MAXSIZE_START]; //起点
	char destination[MAXSIZE_DESTINATION]; //终点
	char data[MAXSIZE_DATA]; //日期
	float price[3]; //三种价格
	char class[3];/*舱位类型,头等舱F(First Class), 
					    商务舱B(Bussiness Class),
					    经济舱E经济舱(Economy Class or Coach)*/
	struct flight_info* next; 
}flight_info, *p_flight;



/*--------------------航班部分--------------------*/
extern flight_info* flight_create();
extern int flight_add(flight_info* f);
extern void flight_print(flight_info* f);




/*--------------------用户部分--------------------*/

extern user* user_create(void); //创建一个头节点

//尾插法新增用户
extern int user_TailAdd(p_user h, char* id, char* pw, int flag); 


extern char* hide_password(char* pw); //隐藏用户输入的密码
extern int login_print(int flag, p_user p);//登录情况打印
extern int compare_IdAndPw(p_user h, char* id, char* pw);//登录信息校验

extern void user_login(p_user h);//用户登录



#endif
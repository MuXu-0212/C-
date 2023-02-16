#ifndef __login_h_
#define __login_h_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

#define MAXSIZE_ID 30
#define MAXSIZE_PW 30

typedef struct user{
	char id[MAXSIZE_ID];
	char pw[MAXSIZE_PW];
	int flag; /*有三个值,0为管理员,1为会员,2为普通用户*/
	struct user* next;
}user,* p_user;

extern user* user_create(void); //创建一个头节点

//尾插法新增用户
extern int user_TailAdd(p_user h, char* id, char* pw, int flag); 


extern char* hide_password(char* pw); //隐藏用户输入的密码
extern int login_print(int flag, p_user p);//登录情况打印
extern int compare_IdAndPw(p_user h, char* id, char* pw);//登录信息校验

extern void user_login(p_user h);//用户登录



#endif
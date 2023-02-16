#ifndef __administrator_h_
#define __administrator_h_
#include "login.h"

extern void print_(int num); //打印-
extern int admi_delete(p_user h);//删除用户

extern void admi_menu(); //管理员操作菜单

extern void admi_add_menu(); //管理员“添加”功能的菜单
extern int admi_add(p_user h); //管理员添加功能
extern int admi_add_user(p_user h, int flag); //管理员添加用户，flag为用户级别

extern void administrator(p_user h); //管理员模块
extern void ManageSystem();

#endif
#ifndef __common_h_
#define __common_h_

#include "administrator.h"

#define MAXSIZE_START 30
#define MAXSIZE_DESTINATION 30
#define MAXSIZE_DATA 30



extern int com_buy(p_user h); //用户购票功能
extern int com_find(p_user h); //用户查看功能

extern int com_revise(p_user h); //用户修改个人信息功能

extern int com_delete(p_user h); //删除历史信息功能

extern int com_menu(); //用户界面

#endif
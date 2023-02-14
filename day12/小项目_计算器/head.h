#ifndef __head_h_
#define __head_h_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE_ACCOUNT 50
#define MAXSIZE_PASSCODE 50
#define MAXSIZE_USER_NUM 2

typedef struct {
	char account[MAXSIZE_ACCOUNT];
	char passcode[MAXSIZE_PASSCODE];
}people, * person;


int user_i;

// extern int login(int argc, char const *argv[]);
extern int login();

extern void menu_print();
extern void menu();

extern void revise();

extern float add(float a, float b);
extern float sub(float a, float b);
extern float mul(float a, float b);
extern float divi(float a, float b);
extern void calc();


#endif
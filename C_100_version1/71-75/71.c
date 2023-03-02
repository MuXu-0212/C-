/*

    题目：编写input()和output()函数输入，
    输出5个学生的数据记录。  

*/

#include <stdio.h>

#define MAXSIZE 20
#define STU_MAXSIZE 2

typedef struct student{
	int id;
	char name[MAXSIZE];
	float high;
	float weight;
}student, *stu;

void input(stu s, int i)
{
    s->id=i+1;

	printf("input name>");
    scanf("%s", s->name);

	printf("input high>");
    scanf("%f", &(s->high));

	printf("input weight>");
    scanf("%f", &(s->weight));

}

void output(stu s)
{
    int i=0;

    for (i=0; i<STU_MAXSIZE; i++)
    {
    	printf("%dth :\t", i+1);
    	printf("id=%d\t", s[i].id);
    	printf("name=%s\t", s[i].name);
    	printf("high=%f\t", s[i].high);
    	printf("weight=%f\n", s[i].weight);
    }
}

int main(int argc, char const *argv[])
{
	int i=0;
	student class[STU_MAXSIZE]={0};

	for (i=0; i<STU_MAXSIZE; i++)
	{
        input(&(class[i]), i);
	}

	output(&(class[0]));

	return 0;
}
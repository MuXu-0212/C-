#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE_NAME 20
#define MAXSIZE_NUM 3

typedef struct student{
	char name[MAXSIZE_NAME];
	float chinese;
	float math;
	float English;
}student, *stu;


int main(int argc, char const *argv[])
{
    char name[MAXSIZE_NAME]={0};
    student student[MAXSIZE_NUM]={0};
    int i=0;

    for (i=0 ;i<MAXSIZE_NUM; i++)
    {
    	printf("sizeof(name)=%ld\n", sizeof(name));
    	memset(name, 0, sizeof(name));
    	printf("input student's name>");
    	scanf("%[^\n]", name);
    	while (getchar()!='\n');

    	strcpy(student[i].name, name);

    	printf("input chinese grade>");
    	scanf("%f", &student[i].chinese); 

    	printf("input math grade>");
    	scanf("%f", &student[i].math); 

    	printf("input English grade>");
    	scanf("%f", &student[i].English); 

    	while (getchar()!='\n');
    	
    } /* end of while(i=0 ;i<MAXSIZE_NUM; i++) */


	printf("average of chinese:%.2f\n", (student[0].chinese + student[1].chinese + student[2].chinese)/3);
	printf("average of math:%.2f\n", (student[0].math + student[1].math + student[2].math)/3);
	printf("average of English:%.2f\n", (student[0].English + student[1].English + student[2].English)/3);

	return 0;
}
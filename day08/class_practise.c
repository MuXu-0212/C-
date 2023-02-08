#include <stdio.h>
#include <string.h>

#define MAXSIZE_STU_NUM 5
#define MAXSIZE_SUBJECT_NUM 3
#define MAXSIZE_USER 2

int main(int argc, char const *argv[])
{
    char* user_account[MAXSIZE_USER]={"115","111"};
    char* user_password[MAXSIZE_USER]={"123", "456"};
    int user_i=0, user_flag=0;
    
    if (argc!=3)
    {
    	printf("input error!\n");
    	return 1;
    }

	for (user_i=0; user_i<MAXSIZE_USER; user_i++)
	{
		if (strcmp(argv[1], user_account[user_i]) == 0 
			&& strcmp(argv[2], user_password[user_i]) == 0)
		{
			user_flag=1;
			break;
		}
	}
    
    if (user_flag==0)
    {
    	printf("password error!\n");
    	return 1;
    }


	float arr[MAXSIZE_STU_NUM][MAXSIZE_SUBJECT_NUM]={0};
	int i=0, j=0;
	float sum_subject=0, sum_stu=0;

	for (i=0; i<5; i++)
	{
		printf("第%d个学生\n", i+1);
		sum_stu=0;
		for (j=0; j<3; j++)
		{
			if (j==0)
			{
				printf("请输入语文成绩>\n");
			}
			else if (j==1)
			{
				printf("请输入数学成绩>\n");
			}
			else
			{
				printf("请输入英语成绩>\n");
			}

				scanf("%f", *(&arr[0]+i)+j);
				sum_stu +=*(*(&arr[0]+i)+j);	//一个学生的总成绩
		}
		printf("第%d个学生:总成绩为%.2f, 平均成绩为%.2f\n", i+1, sum_stu, sum_stu/3);
		printf("----------------------------------------\n");
	}

	printf("========================================\n");

	for (i=0; i<3; i++)
	{
		sum_subject=0;
		for (j=0; j<5; j++)
		{
            sum_subject += *(*(&arr[0]+j)+i);
		}

		if (i==0)
			{
				printf("语文的总成绩为%.2f\n", sum_subject);
				printf("语文的平均成绩为%.2f\n", sum_subject/3);
				printf("----------------------------------------\n");

			}
			else if (j==1)
			{
				printf("数学的总成绩为%.2f\n", sum_subject);
				printf("数学的平均成绩为%.2f\n", sum_subject/3);
				printf("----------------------------------------\n");
			}
			else
			{
				printf("英语的总成绩为%.2f\n", sum_subject);
				printf("英语的平均成绩为%.2f\n", sum_subject/3);
				printf("----------------------------------------\n");
			}
	}

	return 0;
}
#include <stdio.h>

#define MAXSIZE 20

struct month
{
	char name[MAXSIZE];
	char simple_month[MAXSIZE];
	int day;
    int number;
};

int main(int argc, char const *argv[])
{
	struct month month = {0};
    int i=0;

	gets(month.name);

    for(i=0;i<3;i++)
    {
    	month.simple_month[i] = month.name[i];
    }

    scanf("%d",&(month.day));

    scanf("%d",&(month.number));

    printf("%s %s %d %d\n", month.name, month.simple_month, month.day, month.number);
	return 0;
}
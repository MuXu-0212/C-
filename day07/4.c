#include <stdio.h>

struct data
{
	int year;
	int month;
	int day;
};

int is_leap(int year)
{
	if (year % 4 == 0)
	{
		if(year % 100 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(int argc, char const *argv[])
{
    struct data data1 = {0};
    int sum = 0;
    struct data* p = &data1;

    scanf("%d%d%d", &(data1.year), &(data1.month), &(data1.day));
    
    if(is_leap(data1.year))
    {
    	sum += 1;
    }

    switch (data1.month-1)
    {
    	case 12: sum +=31;
    	case 11: sum +=30;
    	case 10: sum +=31;
    	case 9: sum +=30;
    	case 8: sum +=31;
    	case 7: sum +=31;
    	case 6: sum +=30;
    	case 5: sum +=31;
    	case 4: sum +=30;
    	case 3: sum +=31;
    	case 2: sum +=28;
    	case 1: sum +=31;break;
    }
	printf("%d年%d月%d日是%d年中第%d天\n", data1.year, data1.month, data1.day
		                                , data1.year, sum+data1.day);
	return 0;
}
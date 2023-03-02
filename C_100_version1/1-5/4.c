#include <stdio.h>

int is_leap(int num)   	//判断平润年
{
    if (num%4==0)
    {
    	if (num%100==0)
        {
        	return 1;
        }
        else 
        {
        	return 0;
        }
    }
    else if (num%400==0)  
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
	int year = 0, month = 0, day = 0, num = 0;
	scanf("%d%d%d", &year, &month, &day);
    
    switch (month)
    {
    	case 12:num +=31;
    	case 11:num +=30;
    	case 10:num +=31;
    	case 9:num +=30;
    	case 8:num +=31;
    	case 7:num +=31;
    	case 6:num +=30;
    	case 5:num +=31;
    	case 4:num +=30;
    	case 3:num +=31;
    	case 2:
    	        if (is_leap)
    	        {
    	        	num +=29;
    	        }
    	        else
    	        {
    	        	num +=28;
    	        }
    	case 1:num +=31;
    }

    printf("%d\n", num);


	return 0;
}
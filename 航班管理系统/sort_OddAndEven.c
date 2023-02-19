#include <stdio.h>
#include <string.h>

void sort_oddAndEven(char* str)
{
	int count=0;	//记录偶数的个数
	int len=strlen(str);	
	char* first=str;

	//所有的奇数移到左边,所有的偶数移到右边
	while (len--)
	{
		if (*first % 2==0 )
		{
			char* pre=first;
			char* p=first+1;
			char temp = *first;
			printf("temp=%c\n", temp);
			printf("---------\n");

			if (*p=='\0')
			{
				break;
			}

			while (*p!='\0' )
			{
				*pre++=*p++;
			}
			*pre=temp;
			count++;
		}
		else
		{
			first++;
		}
	}
    

	//排序奇数
	if (count!=0)
	{
		char* pre=str;
		char* p=str+1;

		while (count--)
		{
			if ()
			{
                
			}
		}		
	}

	if ()
	printf("%s\n", str);

}


int main(int argc, char const *argv[])
{
	char str[20]={0};
	scanf("%s", str);
	sort_oddAndEven( str); 

	return 0;
}
/*
	题目：某个公司采用公用电话传递数据，数据是四位的整数，
	在传递过程中是加密的，加密规则如下： 
	每位数字都加上5,然后用和除以10的余数代替该数字，
	再将第一位和第四位交换，第二位和第三位交换。 
*/

#include <stdio.h>

char* encryption(char* str)
{
	char* p=str;
	int sum=0;

    while (*p != '\0')
    {
    	sum=sum*10+(*p-'0'+5)%10;
    	//printf("%d\n", sum);
    	p++;
    }
    p--;
    char temp=sum;
    while ((p+1)!=str)
    {
        temp=sum%10+'0';
        //printf("temp:%c\n\n", temp);
        *p--=temp;
        sum /= 10;
    }

    char temp_ch=*str;
    *str = *(str+3);
    *(str+3) = temp_ch;

    temp_ch=*(str+1);
    *(str+1) = *(str+2);
    *(str+2) = temp_ch;
    return str;
}

int main(int argc, char const *argv[])
{
	char str[20]={0};
	scanf("%s", str);
	printf("encryption > %s\n", encryption( str));
	return 0;
}
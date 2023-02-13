#include <stdio.h>
#include <string.h>

#define MAXSIZE 20

char* reverse(char* str)
{
	int len=strlen(str);
	char* first=str;
	char* last=str+len-1;

	while (first<=last)
	{
		char t=*last;
        *last = *first;
        *first = t;
        first++;
        last--;
	}
	return str;
}

int main(int argc, char const *argv[])
{
	char str[MAXSIZE]={0};
	printf("输入一串数字\n");

	scanf("%s", str);
	reverse(str);
	printf("%s", str);

	return 0;
}
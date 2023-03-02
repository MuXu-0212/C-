#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	// int num=0;

	// char str[54]={0};
	// char* str1="hello";
	// char* str2="world!";

	// char path[35]="/mnt/hgfs/Linux/";
	// char filename[10] = "1.txt";
	// sprintf(str, "%s%s", path, filename);

	// printf("%s\n", str);

	//--------------------------------------------

	char* str="abc 123 def 456";
	char* str_str[2];
	char* str_num[2];
	int i=0, j=0;

	while (*str!='\0')
	{
		if (*str>'a' && *str<'z')
		{
			sscanf(str_str[i++], "%s ", str);
			sprintf(*str_str, "%s ", str_str[i]);
		}
		else
		{
			sccanf(str, "%s ", str_num[j++]);
		}
	}

	printf("%s\n", *str_str);
	printf("%s\n", *str_num);

	return 0;
}


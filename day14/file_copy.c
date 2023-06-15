/*
	将1.txt中文件拷贝到2.txt中
*/

#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#define PATH1 "./1.txt"
#define PATH2 "./2.txt"

bool file_copy(char* path1, char* path2)
{
	int fd1 = open( path1, O_RDWR);
	if (fd1 == -1)
	{
		perror("打开文件1失败\n");
		return false;
	}

	int fd2 = open( path2, O_RDWR);
	if (fd2 == -1)
	{
		perror("打开文件2失败\n");
		return false;
	}

	char data[512];
	int read_size; //读取文件长度

	while(1)
	{
		read_size = read(fd1, data, 512);

		if (read_size == 0)
		{
			break;
		}

		write(fd2, data, read_size);
	}


	close(fd1);
	close(fd2);

	return true;

}

int main(int argc, char const *argv[])
{
	file_copy( PATH1, PATH2);
	return 0;
}


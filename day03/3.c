#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c = 0;
    int space = 0, enter = 1, character = 0;

	while (c != '#')
	{
		scanf("%c",&c);
		//getchar();

		if (c == '\n')
		{
            enter++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else
		{
			character++;
		}
	}

	printf("space = %d, enter = %d, character = %d\n", space, enter, character);
	return 0;
}
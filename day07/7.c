#include <stdio.h>

typedef union
{
	long i;
	int k[5];
	char C;
} fruit;

struct  creature
{
	short cat;
	fruit apple;
	double dog;
};

int main()
{
	fruit berry;
	printf("sizeof(struct creature) = %d\n", sizeof(struct creature));
	printf("sizeof(berry) = %d\n", sizeof(berry));
	printf("sizeof(struct creature)+sizeof(berry) = %d\n"
		                        , sizeof(struct creature)+sizeof(berry));

	return 0;
}

//32位  fruit 20    creature 32     52
//64位  fruit 24    creature 40     64
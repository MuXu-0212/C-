#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0, j=0;

	for (i=1; i<=9; i++)
	{
		for (j=1; j<=9; j++)
		{
			if ((i+j)%2!=1)
			{
                printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}


// int main() 
// { 
// 	int i,j; 
// 	for(i=0;i<8;i++) 
// 	{ 
// 		for(j=0;j<8;j++) 
// 		if((i+j)%2==0) 
// 		printf("%c%c",219,219); 
// 		else 
// 		printf(" "); 
// 		printf("\n"); 
// 	} 
// } 

/*

    题目：求0—7所能组成的奇数个数。 
    分析:
    	一位数:1、3、5、7	共计4个
    	两位数:			共计4*8个
    	三位数:			共计4*8*8个
    	四位数:			共计4*8*8*8个
    	五位数:			共计4*8*8*8*8个
    	六位数:			共计4*8*8*8*8*8个
    	七位数:			共计4*8*8*8*8*8*8*8个
    	八位数:			共计4*8*8*8*8*8*8*8*7个

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=0;
	long sum=4, s=4;

	for (i=2; i<=8; i++)
	{
		if (i<=2)
		{
			s*=7;
		}
		else
		{
			s*=8;
		}
		sum += s;
	}

	printf("%ld\n", sum);

	return 0;
}


//答案
// #include <stdio.h>

// int main()
// {
//     long sum = 4, s = 4;//sum的初始值为4表示，只有一位数字组成的奇数个数为4个
//     int j;
//     for (j = 2; j <= 8; j++) {    
//         printf("%d位数为奇数的个数%ld\n", j-1, s);
//         if (j <= 2) {
//             s *= 7;
//         } else {
//             s *= 8;
//         }
//         sum += s;    
//     }
//     printf("%d位数为奇数的个数%ld\n", j-1, s);
//     printf("奇数的总个数为：%ld\n", sum);
//     return 0;
// }

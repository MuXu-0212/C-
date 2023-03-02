#include <stdio.h>

//题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在 
//s第10次落地时，共经过多少米？第10次反弹多高？ 


int main(int argc, char const *argv[])
{
	float high=100;
	float sum=high;
	int i = 0;

	for (i=1; i<=10; i++)
	{
        high/=2;
        sum = sum + high*2;
	}

	printf("第10次反弹:%f\n第10次落地:%f\n", high, sum-high*2);
	return 0;
}


//参考
// int main(int argc, char const *argv[])
// {
// 	float sn=100.0,hn=sn/2; 
// 	int n; 
// 	for(n=2;n<=10;n++) 
// 	{ 
// 		sn=sn+2*hn;第n次落地时共经过的米数 
// 		hn=hn/2; /*第n次反跳高度*/ 
// 	}
// 	printf("the total of road is %f\n",sn); 
// 	printf("the tenth is %f meter\n",hn); 

// 	return 0;
// }
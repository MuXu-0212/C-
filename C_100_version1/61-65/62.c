/*

    题目：学习putpixel画点。 

*/

#include <stdio.h>
#include <graphics.h> 

#define MAXSIZE 10


int main() 
{ 
	nt i,j,driver=VGA,mode=VGAHI;
	
	initgraph(&driver,&mode,"");
	setbkcolor(YELLOW);

	for(i=50;i<=230;i+=20)
		for(j=50;j<=230;j++)
	　		putpixel(i,j,1);
	for(j=50;j<=230;j+=20)
		for(i=50;i<=230;i++)
	　		putpixel(i,j,1);

	return 0;
} 

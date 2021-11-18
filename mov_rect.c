#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd=DETECT,gm,i;
	int top = 50, left = 50, right = 300, bottom = 300;
	
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	seybkcolor(WHITE);


	for(i=25;i<=125;i = i+25){
		rectangle(top+i,left+i,right+i,bottom+i);
	}

	getch();
	closegraph();
}

#include <graphics.h>
#include <stdio.h>
#include <conio.h>


void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:/turboc3/bgi");
	circle(250,200,50);
	

	getch();
	closegraph();
	
	
}
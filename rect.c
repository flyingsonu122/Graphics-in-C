#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int gd=DETECT,gm;
	int x = 10, y= 20, radius = 20;
	initgraph(&gd,&gm,"c:\\tc\\bgi");




   for(radius=25;radius<=125;radius=radius+20)
       {
            circle(x,y,radius);
    	}
	getch();
	closegraph();
}

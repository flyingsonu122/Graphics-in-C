#include<graphics.h>
#include<conio.h>
void main()
{
	int gd= DETECT,gm;
	int x= 320,y= 240,radius;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	outtextxy(250,80,"CONCENTRIC CIRCLE");
	for(radius=25; radius<=125; radius= radius+20)
	{
		circle(x,y,radius);
	}
	getch();
	closegraph();
}

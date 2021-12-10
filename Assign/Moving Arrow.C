#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
int i;
	int gd=DETECT,gm;

	initgraph(&gd,&gm,"c:/turboc3/bgi");
	for(i=0;i<16;i++)
	{
	setcolor(i);
line(0+i*30,200,0+i*30,300);
line(0+i*30,200,100+i*30,200);
line(0+i*30,300,100+i*30,300);
line(100+i*30,150,100+i*30,200);
line(100+i*30,350,100+i*30,300);
line(200+i*30,250,100+i*30,150);
line(200+i*30,250,100+i*30,350);
settextstyle(2,HORIZ_DIR,8);
   outtextxy(10+i*30,240,"JAI SHRI RAM");
delay(300);
cleardevice();
	}
	getch();
	closegraph();


}
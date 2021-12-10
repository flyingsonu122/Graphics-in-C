#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main()
{
int a;
int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:/turboc3/bgi");
printf("1 Draw horizontal line\n2 Draw vertical line\n3 Draw Triangle\n4 Draw a square\n");
printf("5 Draw a pentagon\n6 Draw a Hexagon\n");
printf("Enter choice\n");
scanf("%d",&a);
switch (a)
{
case 1:
line(250,150,350,150);
    break;
case 2:
line(250,300,250,400);
break;
case 3:
line(250,150,350,150);
line(250,150,250,50);
line(350,150,250,50);
  break;
case 4:
line(100,100,200,100);
line(100,100,100,200);
line(200,200,200,100);
line(200,200,100,200);
break;
case 5:
line(100,100,150,50);
line(150,50,200,100);
line(100,100,100,200);
line(200,200,200,100);
line(200,200,100,200);
break;
case 6:
line(100,100,150,50);
line(150,50,200,100);
line(100,100,100,200);
line(200,200,200,100);
line(200,200,150,250);
line(100,200,150,250);
break;



default:
    break;
}
	getch();
	closegraph();


}
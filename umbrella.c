#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
    int gd=DETECT,gm;
    int rhx,rhy,j,i;
    clrscr();
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    for(i=0;i<500;i+=5)
    {
        line(0,380,650,380); //platform     

        if(i%2==0)
        {
            line(25+i,380,35+i,340); //leftleg
            line(45+i,380,35+i,340);//right leg
            line(35+i,310,25+i,330);//left hand
            delay(20);
        }
        else
        {
            line(35+i,380,35+i,340);
            line(35+i,310,40+i,330);
            delay(20);
        }

        line(35+i,340,35+i,310); //body
        circle(35+i,300,10); //head
        line(35+i,310,50+i,330); // hand
        line(50+i,330,50+i,280); //umbrella stick
        line(15+i,280,85+i,280); //umbrella right

        arc(50+i,280,0,180,35); //umbrella body
        arc(55+i,330,180,360,5);//umbrella handle
        rhx=getmaxx();
        rhy=getmaxy();
        for(j=0;j<250;j++)
        {
            outtextxy(random(rhx),random(rhy-95),"`");
            setcolor(j%10);
        }
        delay(150);
        cleardevice();
    }
    getch();
}

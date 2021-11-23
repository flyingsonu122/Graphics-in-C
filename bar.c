
#include <graphics.h>
#include <conio.h>

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    bar(100,100,200,400);
    circle(100,200,50);

    getch();
    closegraph();

    return 0;
	
}

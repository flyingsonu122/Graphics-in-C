#include <graphics.h>
#include<conio.h>
int main( )
{
    initwindow(400, 300, "First Sample");
    circle(100, 50, 40);
    while (!kbhit( ))
    {
        delay(200);
    }
    getch();
    return 0;
}

#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
//mountain
line(0,400,200,300);
line(200,300,400,400);
line(400,400,600,300);
line(600,300,800,400);
//stars


getch();
closegraph();
return 0;
}

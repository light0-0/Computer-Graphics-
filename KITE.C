#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi");
line(260,150,180,250);
line(180,250,260,350);
line(260,350,340,250);
line(340,250,260,150);
line(180,250,340,250);
line(260,150,260,350);
arc(220,250,270,360,40);
arc(220,330,90,180,40);
getch();
closegraph();
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood(int,int,int,int);
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
//ppolygon
line(300,300,260,280);
line(300,300,340,280);
line(300,260,260,280);
line(300,260,340,280);
line(300,200,260,280);
line(300,200,340,280);
line(300,200,300,260);
//floodfillalgo
flood(280,280,1,0);
flood(280,260,3,0);
flood(320,260,3,0);
getch();
closegraph();
return 0;
}


void flood(int x,int y, int fill,int def)
{
if(getpixel(x,y)==def)
{
delay(5);
putpixel(x,y,fill);
flood(x+1,y,fill,def);
flood(x,y+1,fill,def);
flood(x-1,y,fill,def);
flood(x,y-1,fill,def);
}
}
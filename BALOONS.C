#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood(int,int,int,int);
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
ellipse(200,200,0,360,20,45);
flood(200,200,5,15);
ellipse(270,200,0,360,20,45);
flood(270,200,4,15);
ellipse(340,200,0,360,20,45);
flood(340,200,YELLOW,15);
delay(10);
arc(170,245,270,360,30);
arc(170,305,90,180,30);
arc(240,245,270,360,30);
arc(240,305,90,180,30);
arc(310,245,270,360,30);
arc(310,305,90,180,30);
getch();
closegraph();
}
void flood(int x,int y,int fill,int def)
{
if(getpixel(x,y)!=def && getpixel(x,y)!=fill)
{
delay(1);
putpixel(x,y,fill);
flood(x+1,y,fill,def);
flood(x,y+1,fill,def);
flood(x-1,y,fill,def);
flood(x,y-1,fill,def);
}
}

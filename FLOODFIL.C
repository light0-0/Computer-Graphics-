#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void flood(int x,int y, int fill, int def)
{
if(getpixel(x,y)==def)
{
delay(10);
putpixel(x,y,fill);
flood(x+1,y,fill,def);
flood(x,y+1,fill,def);
flood(x-1,y,fill,def);
flood(x,y-1,fill,def);
}
}

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
rectangle(50,50,100,100);
flood(55,55,5,0);
getch();
closegraph();
}
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundaryfill(int x,int y,int  fill,int bfill)
{
if(getpixel(x,y)!=bfill && getpixel(x,y)!=fill)
{
putpixel(x,y,fill);
boundaryfill(x+1,y,fill,bfill);
boundaryfill(x,y+1,fill,bfill);
boundaryfill(x-1,y,fill,bfill);
boundaryfill(x,y-1,fill,bfill);
}
}

int main()
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
rectangle(100,100,50,50);
boundaryfill(55,55,10,15);
delay(1);
getch();
closegraph();

return 0;
}
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x1,y1,x2,y2,x,y,m,i,l,n;
float dx,dy,step,incx,incy;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
for(i=0;i<=700;i++)
{
//water
line(1,300,700,300);
line(1,305,700,305);
line(1,310,700,310);
line(1,315,700,315);
line(1,320,700,320);


//boat
line(50+i,300,1+i,250);
line(100+i,300,150+i,250);
line(1+i,250,150+i,250);
line(50+i,250,70+i,200);
line(90+i,250,70+i,200);
delay(5);
cleardevice();
}

getch();
closegraph();
}


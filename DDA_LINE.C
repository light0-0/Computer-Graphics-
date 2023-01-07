#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm, x1,y1,x2,y2,xin,yin,step,i,dx,dy,x,y;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi\\");
printf("enter the x1,y1\n");
scanf("%d%d",&x1,&y1);
printf("enter the x2 and y2\n");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>=abs(dy))
{
step=dx;
}
else
{
step=dy;
}
xin=dx/step;
yin=dy/step;
x=x1;
y=y1;
putpixel(x,y,4);

for(i=0;i<step;i++)
{
x=x+xin;
y=y+yin;
putpixel(x,y,4);
delay(10);
}
getch();
closegraph();
}







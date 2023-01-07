#include<stdio.h>
#include<conio.h>
#include<graphics.h>
/*void dl(int x1,int y1, int x2,int y2)
{
int dx,dy,x,y,p;
dx=x2-x1;
dy=y2-y1;
x=x1;
y=y1;
p=2*dy-dx;

while(x<x1)
{
if(p>=0)
{
putpixel(x,y,4);
y=y+1;
p=p+2*dy-2*dx;
}
else
{
putpixel(x,y,4);
p=p+2*dy;
}
x=x+1;
delay(20);
}
getch();
}

int main()
{
int gd=DETECT,gm,x1,x2,y1,y2;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dl(x1,y1,x2,y2);
return 0;
}
  */

  int main()
  {
  int gd=DETECT,gm,x,y,x1,y1,x2,y2,p,i,dx,dy;
  initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
  scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
  x=x1;
  y=y1;
  dx=x2-x1;
  dy=y2-y1;
  p=2*dy-dx;
  i=0;
  while(i<=dx)
  {
  putpixel(x,y,WHITE);
  //hile(i<=dx)
  if(p<0)
  {
  x=x+1;
  p=p+2*dy;
  }
  else
  {
  x=x+2;
  y=y+4;
  p=p+2*dy-2*dx;
}
i++;
}
getch();
closegraph();
return 0;
}
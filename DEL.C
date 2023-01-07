#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
/*void main()
{
int gd=DETECT,gm,x,y,xin,yin,x1,x2,y1,y2,step,dx,dy,i;
clrscr();
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>=abs(dy))
{
step=dx ;
}
else
{
step=dy;
}
xin=dx/step;
yin=dy/step;
x=x1;
y=y1;
putpixel(x,y,7);
for( i =0;i<step;i++)
{
x=x+xin;
y=y+yin;
putpixel(x,y,7);
delay(10);
}

getch();
closegraph();
} */


  int main()
  {
  int gd=DETECT,gm,p,x1,x2,y1,y2,x,y,dx,dy,i;
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
  putpixel(x,y,4);
  if(p<0)
  {
  x=x+1;
  p=p+2*dy;
  }
  else
  {
  x=x+1;
  y=y+1;
  p=p+2*dy-2*dx;
  }
  i++ ;
  }
  getch();
  closegraph();
  return 0;
  }


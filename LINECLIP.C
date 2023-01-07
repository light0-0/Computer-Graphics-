#include<stdio.h>
#include<conio.h>
#include<graphics.h>
 static int LEFT=1,RIGHT=2,BOTTOM=4,TOP=8,xmin,ymin,xmax,ymax;
 int getcode(int x, int y)
 {
 int code=0;
 if(y>ymax) code|=TOP;
 if(y<ymin) code|=BOTTOM;
 if(x>xmax) code|=RIGHT;
 if(x<xmin) code|=LEFT;
 return code;
 }

 void main()
 {
 int gd=DETECT,gm,x1,x2,y1,y2,outcode1,outcode2,accept;
 float m;
 initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
 setcolor(WHITE);
 printf("Enter the COordinates of rectangle");
 printf("(x1,y1) = ");
 scanf("%d%d",&xmin,&ymin);
 printf("(x2,y2)");
 scanf("%d%d",&xmax,&ymax);
 rectangle(xmin,ymin,xmax,ymax);
 printf("Enter the Cordinates of line");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2	);
 line(x1,y1,x2,y2);
 getch();
  outcode1=getcode(x1,y1);
  outcode2=getcode(x2,y2);
  accept=0;
   while(1)
   {
   m=(y2-y2)/(x2-x1);
  if(outcode1==0 && outcode2==0)
  {
  accept=1;
  break;
  }
  else if((outcode1 & outcode2)!=0)
  {
  break;
  }
  else
  {
  int x,y;
  int temp;
  if(outcode1==0)
  {
  temp=outcode2;
  }
  else
  {
  temp=outcode1;
  }
  if(temp & TOP)
  {
  x=x1+(ymax-y1)/m;
  y=ymax;
  }
  else if (temp & BOTTOM)
  {
  x=x1+(ymin-y1)/m;
  y=ymin;
  }
  else if(temp & LEFT)
  {
  x=xmin;
  y=y1+m*(xmax-x1);
  }
  if(temp==outcode1)
  {
  x1=x;
  y1=y;
  outcode1=getcode(x1,y1);
  }
  else
  {
  x2=x;y2=y;
  outcode2=getcode(x2,y2);
  }
  }
  }
  printf("after cliiping");
  if(accept)
  cleardevice();
  rectangle(xmin,ymin,xmax,ymax);
  setcolor(RED);
  line(x1,y1,x2,y2);


 closegraph();
 }
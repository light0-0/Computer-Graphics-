#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void banjachuchu(int,int,int,int);
void main()
{
int gd=DETECT,gm,xc,yc,x,y;
float p,r;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
printf("Enter the Cordinates of Mid point of Circle\n");
scanf("%d %d",&xc,&yc);
printf("Enter the Radius\n");
scanf("%f",&r);
x=0;
y=r;
p=(5/4)-r;
do
{
banjachuchu(xc,yc,x,y);
delay(10);
if(p<0)
{
p=p+((2*x)+1);
}
else
{
p=p+((2*(x-y))+1);
y--;
}
x++;
}while(x<y);
if(x==y)
banjachuchu(xc,yc,x,y);
circle(xc,yc,r-25);
getch();
closegraph();
}

void banjachuchu(int x,int y,int x1,int y1)
{
putpixel(x+x1,y+y1,YELLOW);
putpixel(x-x1,y+y1,YELLOW);
putpixel(x+x1,y-y1,YELLOW);
putpixel(x-x1,y-y1,WHITE);
putpixel(x+y1,y+x1,RED);
putpixel(x-y1,y+x1,YELLOW);
putpixel(x+y1,y-x1,LIGHTBLUE);
putpixel(x-y1,y-x1,7);
}


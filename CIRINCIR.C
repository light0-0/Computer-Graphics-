#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void ja(int,int,int,int);
void main()
{
int gd=DETECT,gm,xc,yc,x,y;
float p,r;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");

    printf("enter the Cordinates of mid point of circle\n");
    scanf("%d %d",&xc,&yc);
    printf("enter the radius of circle\n");
    scanf("%d",&r);
    x=0;
    y=r;
    p=(5/4)-r;
    do
    {
    ja(xc,yc,x,y);
    delay(10);
 //   ja(xc-20,yc-20,x-20,y-20);
 //   delay(10);
    if(p<0)
    {
    p=p+((2*x)+1)	;
    }
    else
    {
    p=p+((2*(x-y))+1);
    y--;
    }
    x++;
    }while(x<y);
    if(x==y)
    ja(xc,yc,x,y);
 //   ja(xc-20,yc-20,x-20,y-20);
    getch();
    closegraph();
    }

void ja(int x,int y, int x1, int y1)
{
putpixel(x+x1,y+y1,YELLOW);
putpixel(x-x1,y+y1,YELLOW);
putpixel(x+x1,y-y1,YELLOW);
putpixel(x-x1,y-y1,YELLOW);
putpixel(x+y1,y+x1,YELLOW);
putpixel(x-y1,y+x1,YELLOW);
putpixel(x+y1,y-x1,YELLOW);
putpixel(x-y1,y-x1,YELLOW);
}
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
 circle(200,200,100);
 delay(300);
 circle(175,170,10);
 delay(350);
 circle(230,170,10);
 delay(350);
 arc(200,200,201,340,50);
 delay(350);
 line(
 getch();
 closegraph();
 }
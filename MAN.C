#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
for(i=0;i<700;i++)
{
//ground
line(1,300,700,300);
//legs
line(5+i,300,25+i,250);
line(25+i,250,45+i,300);
//body
line(25+i,250,25+i,150);
//arms
line(25+i,200,1+i,240);
line(25+i,200,50+i,240);
line(50+i,240,70+i,220);
//face
circle(25+i,125,25);
//eyes
circle(15+i,115,1);
circle(35+i,115,1);
//nose
circle(25+i,125,2);
//smile
arc(25+i,125,220,320,12);
delay(5);
cleardevice();
}
getch();
closegraph();
return 0;
}
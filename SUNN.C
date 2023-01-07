#include<conio.h>
#include<stdio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,i,n;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");

for(i=0;i<50;i++)
{
n=i%10;
if(n==0||n==2||n==4||n==6||n==8)
{
delay(200);
cleardevice();
circle(300,200,80);
setfillstyle(1,14);
floodfill(300,200,WHITE);
//upper one
line(270,115,330,115);
line(300,40,270,115);
line(300,40,330,115);
setfillstyle(1,4);
floodfill(300,50,WHITE);


//left triangle
line(210,170,210,230);
line(140,200,210,170);
line(140,200,210,230);
setfillstyle(1,4);
floodfill(150,200,WHITE);
//bottom triangle
line(270,290,330,290);
line(300,370,270,290);
line(300,370,330,290);
setfillstyle(1,4);
floodfill(300,360,WHITE);
//right triangle
line(390,170,390,230);
line(470,200,390,170);
line(470,200,390,230);
setfillstyle(1,4);
floodfill(460,200,WHITE);
}
else
{
delay(200);
cleardevice();
circle(300,200,80);
setfillstyle(1,14);
floodfill(300,200,WHITE);
//upper right triangle
line(345,115,390,155);
line(405,100,345,115);
line(405,100,390,155);
setfillstyle(1,4);
floodfill(400,110,WHITE);

//upper left triangle
line(210,155,255,115);
line(200,105,210,155);
line(200,105,255,115);
setfillstyle(1,4);
floodfill(202,107,WHITE);

//bottom right
line(345,290,390,245);
line(410,300,345,290);
line(410,300,390,245);
setfillstyle(1,4);
floodfill(408,298,WHITE);

//bottom left
line(245,290,210,250);
line(190,295,245,290);
line(190,295,210,250);
setfillstyle(1,4
);
floodfill(192,293,WHITE);
}
}

getch();
closegraph();
return 0;
}

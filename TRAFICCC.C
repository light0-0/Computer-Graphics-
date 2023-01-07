#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi\\");
rectangle(300,70,390,322);
circle(345,112,30);
circle(345,196,30);
circle(345,280,30);
for(i=0;i<10;i++)
{
setfillstyle(1,RED);
floodfill(345,112,WHITE);
delay(1000);

setfillstyle(1,BLACK);
floodfill(345,112,WHITE);
setfillstyle(1,YELLOW);
floodfill(345,196,WHITE);
delay(1000);

setfillstyle(1,BLACK);
floodfill(345,196,WHITE);
setfillstyle(1,GREEN);
floodfill(345,280,WHITE);
delay(1000);
setfillstyle(1,BLACK);
floodfill(345,280,WHITE);
}
getch();
closegraph();
return 0;
}
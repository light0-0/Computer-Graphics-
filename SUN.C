#include<stdio.h>
#include<graphics.h>  
#include<math.h>  

void rot(int x1, int y1, int x2,int y2,int x3,int y3, int midx, int midy, int deg)
{
    double c = cos(deg *3.14/180);  
    double s = sin(deg *3.14/180);  
    int X1 = floor(x1 * c - y1 * s + midx*(1-c)+midy*s);  
    int Y1 = floor(x1 * s + y1 * c + midy*(1-c)-midx*s);  
    int X2 = floor(x2 * c - y2 * s + midx*(1-c)+midy*s);  
    int Y2 = floor(x2 * s + y2 * c + midy*(1-c)-midx*s);  
    int X3 = floor(x3 * c - y3 * s + midx*(1-c)+midy*s);  
    int Y3 = floor(x3 * s + y3 * c + midy*(1-c)-midx*s); 
    
    setcolor(YELLOW);
    line(X1,Y1,X2,Y2);    
    line(X2,Y2,X3,Y3);    
    line(X3,Y3,X1,Y1); 
}

void era(int x1, int y1, int x2,int y2,int x3,int y3, int midx, int midy, int deg)
{
    double c = cos(deg *3.14/180);  
    double s = sin(deg *3.14/180);  
    int X1 = floor(x1 * c - y1 * s + midx*(1-c)+midy*s);  
    int Y1 = floor(x1 * s + y1 * c + midy*(1-c)-midx*s);
    int X2 = floor(x2 * c - y2 * s + midx*(1-c)+midy*s);  
    int Y2 = floor(x2 * s + y2 * c + midy*(1-c)-midx*s);  
    int X3 = floor(x3 * c - y3 * s + midx*(1-c)+midy*s);  
    int Y3 = floor(x3 * s + y3 * c + midy*(1-c)-midx*s); 
    
    setcolor(BLACK);
    line(X1,Y1,X2,Y2);    
    line(X2,Y2,X3,Y3);    
    line(X3,Y3,X1,Y1); 
}

int main()  
{  
    int gd=0,gm, i, j,x1,y1,x2,y2,x3,y3,X1,Y1,X2,Y2,X3,Y3; 
    int midx,midy;
    initgraph(&gd, &gm, "C:\\Turboc3\\bgi");

    midx = getmaxx()/2;
    midy = getmaxy()/2;
    setcolor(YELLOW);
    circle(midx,midy,75);
    
    x1 = midx-25;
    y1 = midy-100;
    x2 = midx;
    y2 = midy-150;
    x3 = midx+25;
    y3 = midy-100;
    
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(midx,midy,75);
    floodfill(midx,midy,YELLOW);
    
    for(j=0;j<360;j+=2)
    {
        for(i=0;i<360;i+=45)
        {
            rot(x1,y1,x2,y2,x3,y3,midx,midy,i+j);
        }
        delay(100);
        for(i=0;i<360;i+=45)
        {
            era(x1,y1,x2,y2,x3,y3,midx,midy,i+j);
        }
    }
    cleardevice();
    getch();  
    closegraph();  
return 0;  
}  

// Finally a gasp of air hahaha chutiya hai tera yeh program chapuuu kahikaaaaa
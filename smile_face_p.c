//Faceoff - human face which smiles

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include<malloc.h>
#include<dos.h>
#include <conio.h>

int xasp,yasp,gdriver = VGA, gmode=VGAMED, errorcode;

struct pos
{
	int x;
	int y;
};

struct face
{
	int radius;
	struct pos position;
	int mood;
};

typedef struct face face;
face *face1;

void getposition()
{
	printf("Enter X Co-ordinate:");
	scanf("%d",&face1->position.x);
	printf("Enter X Co-ordinate:");
	scanf("%d",&face1->position.y);
}

void drawface()
{

	char ch='x';
	int i=0,x,y,color,r,imgsize,dif;

	x=face1->position.x=320;
	y=face1->position.y=180;
	face1->radius=150;
	color=15;
	r=face1->radius;

	setbkcolor(0);
	getaspectratio(&xasp,&yasp);
	setcolor(8);
	circle(x,y,face1->radius);

	setfillstyle(1,color);
	floodfill(x,y,getcolor());


	draweyes(face1);
	drawhair(face1);
	drawmouth(face1);
	drawnose(face1);

}

drawnose()
{
	int i,x,y,r;
	x=face1->position.x;
	y=face1->position.y;
	r=face1->radius;
	setcolor(0);

	for(i=0;i<2;i++)
	{
		arc(x-160-i,y-r/4,340-i,10,r);
		line(x-20,y+4+i,x+20,y+10+i);
	}
}

draweyes()
{

	int i,x1,x2,y1,y2,r;
	setcolor(0);
	r=face1->radius;
	x1=face1->position.x-r/2;
	y1=face1->position.y-r/4;
	x2=face1->position.x+r/2;
	y2=face1->position.y-r/4;

	setaspectratio(xasp/2,yasp);
	arc(x1,y1-r/8,40,140,r/4);//left eyebrow
	arc(x1,y1-r/8+1,40,140,r/4);//left eyebrow
	arc(x1,y1-r/8+2,40,140,r/4);//left eyebrow
	setaspectratio(xasp,yasp);

	for(i=0;i<2;i++)
	{
		arc(x1,y1+i+5,40,140,r/4); //upper left eye
		arc(x1,y1-r/5+i,220,320,r/4); //lower left eye
	}
	circle(x1,y1-r/12,r/10);//left pupul
	setfillstyle(1,0);
	floodfill(x1,y1-r/10,getcolor());
	setfillstyle(1,WHITE);
	floodfill(x1-15,y1-r/6,getcolor());


	setaspectratio(xasp/2,yasp);
	arc(x2,y2-r/8,40,140,r/4);//right eyebrow
	arc(x2,y2-r/8+1,40,140,r/4);//right eyebrow
	arc(x2,y2-r/8+2,40,140,r/4);//right eyebrow

	setaspectratio(xasp,yasp);
	for(i=0;i<2;i++)
	{
		arc(x2,y2+i+5,40,140,r/4);//upper right eye
		arc(x2,y2-r/5+i,220,320,r/4);//lower right eye
	}

	circle(x2,y2-r/12,r/10);//right pupil
	setfillstyle(1,0);
	floodfill(x2,y2-r/12,getcolor());

	setfillstyle(1,WHITE);
	floodfill(x2-15,y2-r/6,getcolor());
}

drawmouth()
{
	int x,y,r,i;
	x=face1->position.x;
	y=face1->position.y+(face1->radius/1.5);
	r=face1->radius;
	setcolor(BLACK);

	if((face1->mood)==1)
		for(i=0;i<4;i++)
			arc(x,y-r/2+i,220,320,r/2);//make happy
	if((face1->mood)==0)
		for(i=0;i<4;i++)
			arc(x,y-i,40,140,r/2);//make sad
}

drawhair()
{       int x,y,r;
	setcolor(8);
	setaspectratio(xasp,yasp/1.5);
	r=face1->radius;
	x=face1->position.x-r/2;
	y=face1->position.y-r/3;

	arc(x,y,34,225,100);

	arc(x+r,y,314,138,100);

	setfillstyle(1,RED);
	floodfill(x,y-70,getcolor());
	floodfill(x+r,y-70,getcolor());
	setaspectratio(xasp,yasp);
}

void main(void)
{
	int i=0;
	initgraph(&gdriver, &gmode,"C:\\TC\\BGI");

	while(!kbhit())
	{
		if((i%2)==1)
		{
			setvisualpage(1);
			setactivepage(0);
			clearviewport();
			face1->mood=0;
			drawface();
			delay(1000);
		}
		else
		{
			setvisualpage(0);
			setactivepage(1);
			clearviewport();
			face1->mood=1;
			drawface();
			delay(300);
		}
		i++;
	}

	getch();
	closegraph();
}

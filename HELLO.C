#include <graphics.h>
#include <conio.h>

int main() 
{
	//initilizing graphic driver and 
	//graphic mode variable
	int graphicdriver=DETECT,graphicmode,middlex,middley;

	//calling initgraph with parameters
	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

	//Printing message for user
	outtextxy(50, 50 + 50, "Program to create traffic signal in C graphics");

	//initilizing variables
    //		int middlex, middley;

	//getting middle x and y
	middlex = getmaxx()/2;
	middley = getmaxy()/2;

	//setting color as white for the outline
	setcolor(WHITE);
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 1);
	rectangle(middlex-30,middley-80,middlex+30,middley+80);
	circle(middlex, middley-50, 22);

	//filling red color to signify stop sign
	setfillstyle(SOLID_FILL,RED);
	floodfill(middlex, middley-50,WHITE);
	setcolor(BLUE);
	outtextxy(middlex-15,middley-50,"STOP");

	//setting color as white for the outline
	setcolor(WHITE);
	rectangle(middlex-30,middley-80,middlex+30,middley+80);
	circle(middlex, middley, 20);

	//filling yellow color to signify ready sign
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(middlex, middley,WHITE);
	setcolor(BLUE);
	outtextxy(middlex-18,middley-3,"READY");

	//setting white color for outline
	setcolor(WHITE);
	rectangle(middlex-30,middley-80,middlex+30,middley+80);
	circle(middlex, middley+50, 22);

	//filling green color to signify go sign
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(middlex, middley+50,WHITE);
	setcolor(BLUE);
	outtextxy(middlex-7,middley+48,"GO");
	setcolor(RED);
	settextstyle(SCRIPT_FONT, HORIZ_DIR, 4);


	getch();
	return 0;
}
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
	void main()
		{
		int gd=DETECT, gm;
		initgraph(&gd,&gm,"C:\\TC\\BGI");

		setcolor(14);
		line(100,100,300,100);
		line(100,100,200,150);
		line(200,150,300,100);
		line(200,150,200,170);
		line(200,170,300,122);
		setcolor(15);
		line(300,100,300,122);
		setcolor(2);
		line(200,150, 200,100);
		line(100,100,200,125);
		line(200,125,300,100);
		getch();
		closegraph();
		}
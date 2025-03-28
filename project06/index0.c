#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

	void main()
		{\
		int gd=DETECT,gm, i;
		//int x1=100,y1=100,x2=100,y2=100;
		int x1=100,y1=100,x2=150,y2=100;
		initgraph(&gd,&gm,"C:\\TC\\BGI");
		cleardevice();

		for(i=1;i<=20;i++)
			{
		cleardevice();
		line(x1,y1,x2,y2);
		x1+=5;
		x2+=5;

		delay(300);
			 }
		getch();
		closegraph();
		}
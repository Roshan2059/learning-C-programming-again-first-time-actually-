#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
	int gd = DETECT;gm;
	intigraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	int l = 100,r =100,t = 50,b = 50;
	int x = 50, y = 100, rad = 50;
	rectangle(l,t,r,b);
	circle(x,y,rad);
	getch();
	closegraph();
	return 0;
}

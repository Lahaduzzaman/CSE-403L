#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
 int gd =DETECT,gm;
 initgraph(&gd,&gm,"");
 line(100,100 ,50 ,180 );
 line(100,100,150,180);
 line(50,180,100,250);
 line(150,180,100,250);
 line(100,100,100,250);
 line(50,180,150,180);
 line(100,250,70,300);
 line(100,250,130,300);
 line(70,300,130,300);
 line(100,300,120,320);
 line(120,320,80,340);
 line(80,340,120,360);
 line(120,360,80,380);
 setcolor(4) ;
 getch();
 closegraph();
}

#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"");
 setcolor(CYAN);
 ellipse(200,200,0,360,50,25);
 line(250,200,280,170);
 line(250,200,280,230);
 line(280,170,280,230);
 circle(160,200,5);
 getch();
 closegraph();
 return 0;
}

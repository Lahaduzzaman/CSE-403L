#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x,y,x1 ,x2,y1 ,y2,k,dx,dy,s,xi,yi;
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"");
 printf("Please Enter First Point=");
 scanf("%d%d",&x1 ,&y1);
 printf("Please Enter Second Point=");
 scanf("%d%d",&x2,&y2);
 x=x1;
 y=y1; putpixel(x,y,RED);
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 s=max(dx,dy);
 xi=round((double)dx/(double)s);
 yi=round((double)dy/(double)s);
 x=x1;
 y=y1;
 putpixel(x,y,RED);
 for(k=0;k<s; k++)
 {
 x=x+xi;
 y=y+yi;
 putpixel(x,y,RED);
 }
 getch();
 closegraph();
}

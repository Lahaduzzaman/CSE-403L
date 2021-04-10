#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
 int gd=DETECT,gm;
 int x1,x2,x3,y1,y2,y3,sx,sy,ch;
 initgraph(&gd,&gm,"");
 printf("Enter The Coordinate of The First Pixel=");
 scanf("%d%d",&x1,&y1);
 printf("Enter The Coordinate of The Second Pixel=");
 scanf("%d%d",&x2,&y2);
 printf("Enter The Coordinate of The Third Pixel=");
 scanf("%d%d",&x3,&y3);
 line(x1,y1,x2,y2);
 line(x1,y1,x3,y3);
 line(x2,y2,x3,y3);
 printf("Enter The Translation Factor along X-axis=");
 scanf("%d",&sx);
 printf("Enter The Translation Factor along Y-axis=");
 scanf("%d",&sy);
 line(x1+sx,y1+sy,x2+sx,y2+sy);
 line(x1+sx,y1+sy,x3+sx,y3+sy);
 line(x2+sx,y2+sy,x3+sx,y3+sy);
 getch();
 closegraph();
 return 0;
}



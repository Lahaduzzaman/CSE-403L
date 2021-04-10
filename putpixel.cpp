#include<graphics.h>
main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   putpixel(25, 25, WHITE);
   getch();
   closegraph();
   return 0;
}


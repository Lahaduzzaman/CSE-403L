#include <graphics.h>
main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "");

   bar(100, 100, 200, 200);

   getch();
   closegraph();
   return 0;
}

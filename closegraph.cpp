#include<graphics.h>
main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "");

   outtext("Press any key to close the graphics mode...");

   getch();
   closegraph();
   return 0;
}

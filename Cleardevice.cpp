#include <graphics.h>
main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   outtext("Press any key to clear the screen.");
   getch();
   cleardevice();
   outtext("Press any key to exit...");

   getch();
   closegraph();
   return 0;
}

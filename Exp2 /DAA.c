#include <graphics.h>
#include <conio.h>
 
main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:/TURBOC3/BGI");
     line(100,100,200,100);    //will draw a horizontal line

   line(10,10,200,10); //will draw another horizonatl line

   getch();
   closegraph();
   return 0;
}

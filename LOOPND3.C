//code for pattern generating
/*
1
22
333
4444
55555
*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int r,c;
   clrscr();
   for(r=1;r<=5;r++)
   {
   for(c=1;c<=r;c++)
   {
   printf("%4d",r);
   }
   printf("\n");
   }
   getch();
   }
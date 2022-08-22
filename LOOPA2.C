/*read your name to print 20 times on screen using counter*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   char nm[30];
   clrscr();
   printf("enter the name :");
   scanf("%s",&nm);
   for (i=1;i<=20;i++)
   {
   printf("%s\t",nm);
   }
   getch();
   }

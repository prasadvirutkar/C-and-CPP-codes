//read any name and print it for 20 times on the screen
#include<stdio.h>
#include<conio.h>
void printname(char[]);

void main()
{
   char nm[10];
   clrscr();
   printf("enter your name :");
   scanf("%s",&nm);
   printname(nm);
   getch();
}

void printname(char x[])
{
   int i;
   for(i=1;i<=20;i++)
   printf("%5d\t%s\n",i,x);

   }






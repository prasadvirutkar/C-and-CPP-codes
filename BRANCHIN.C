#include<stdio.h>
#include<conio.h>
void main()
{
 char nm[10];
 float per;
 clrscr();
 printf("enter student name :");
 scanf("%s",&nm);
 printf("enter student percentage :");
 scanf("%f",&per);
 if(per>=65)
 printf("student is elligible for interview");
 else
 printf("student is waiting for interview");
 getch();
 }

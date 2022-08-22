//demonstrating if......ladder
//read percentage and determine grade
//<50---no,>=50 <60---c,>=65 <75---B,>=75 <85 A,A+
#include<stdio.h>
#include<conio.h>
void main()
{
 float per;
 clrscr();
 printf("enter the percentage of student:");
 scanf("%f",&per);
 //conditional branching using if.....ladder
 if(per<50.0)
  printf("no grade");
  else if(per<65.0)
  printf(" grade:C");
  else if(per<75.0)
  printf(" grade:B");
  else if(per<85)
  printf(" grade:C");
  else
  printf(" grade:A+");
  getch();
  }
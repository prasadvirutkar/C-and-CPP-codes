//program for generating 12hrs clockon the screen
#include<stdio.h>
#include<conio.h>
void main()
{
  int hrs,min,sec;
  clrscr();
  for(hrs=0;hrs<12;hrs++)
  {
  for(min=0;min<60;min++)
  {
  for(sec=0;sec<60;sec++)
  {
  gotoxy("40,12");//locate the screenon sp
  printf("%4d::%4d::%4d",hrs,min,sec);
  delay(100);delay process for sp.m

  }
  }
  }
  grtch();
  }
//understanding nesting function
#include<stdio.h>
#include<conio.h>
void printline(char);
int dsm(int);
void main()
{
 int n;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 printline('=');
 printf("digital sum of numbers:%d\n",dsm(n));

 printf("\n");
 printline('@');
 getch();
 }
 //definition of printline  function
 void printline(char x)
 {
  int i;

  for(i=1;i<=80;i++)
  printf("%c",x);

  }
 //definition of digitalsum function
 int dsm(int n)
 {
 int ds=0;
 printf("\n");
  printline('*');

  while(n>0)
  {
  ds+=(n%10);
  n/=10;
  }
  return ds;

  }


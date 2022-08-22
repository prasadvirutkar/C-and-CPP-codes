/* read a no to check armstrong (153-1^+5^3+3^3=153,sum of cube of all
digit is equle to no)*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,sum=0,temp;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 temp=n;
 //logic for checking armstrong no
 while(n>0)
 {
  r=n%10;
  sum=sum+(r*r*r);
  n/=10;
  }
  if(temp==sum)
  printf("is armstrong no");
  else
  printf("is not a armstrong no");
  getch();
  }
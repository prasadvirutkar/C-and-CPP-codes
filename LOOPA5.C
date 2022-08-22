/* read a no to check prime or not */
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,flag=0,i;
  clrscr();
  printf("enter the no:");
  scanf("%d",&n);
  // logic for checking prime or not
  for (i=2;i<n;i++);
  {
   if (n%i==0)
   flag=1;
   }
   if (flag==0)
   printf("%d is a prime no",n);
   else
   printf("%d is not a prime no",n);
   getch();
   }

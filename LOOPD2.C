//read a no to find factorial
//n !=n x n-1 x n-2 x n-3------1
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,f=1;
  clrscr();
  printf("enter the no:");
  scanf("%d",&n);
  // logic for factorial
  while(n>0)
  {
    f*=n;
    n--;
   }
   printf("factorial of a no:%d\n",f);
   getch();
   }
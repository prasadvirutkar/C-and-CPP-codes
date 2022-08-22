//read a no to check armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,dsum=0,d,temp;
  clrscr();
  printf("enter the no:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
   d=n%10;
   dsum+=(d*d*d);
   n/=10;
   }
   if(dsum==temp)
   printf("%d is an armstrong no\n",n);
   else
   printf("%d is not a armstrong no\n",n);
   getch();
   }



//generate fibonacci series for n term
#include<stdio.h>
#include<conio.h>

void main()
{
  int ft=0,st=1,rt,i,n;
  clrscr();
  printf("how many time required:");
  scanf("%d",&n);
  // logic for generating fibonacci series
  printf("%4d,%4d",ft,st);
  for(i=3;i<n;i++)
  {
   rt=ft+st;
   printf("%4d",rt);

   ft=st;
   st=rt;
   getch();
   }
   }














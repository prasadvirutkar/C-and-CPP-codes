//find 10 multiples of a given no
#include<stdio.h>
#include<conio.h>

void multi(int,int);

void main()
{
 int n;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 multi(n,10);// compute 10 multiples of a no.
 getch();
}
void multi(int n,int m)
{

  if(m==0)
       return;
  printf("%d\n",n*(11-m));
  multi(n,--m);
       return;
  }



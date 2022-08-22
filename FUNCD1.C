//defining user defined functions
//factorial of a no : n!=1 x n-1 x n-2.......1
#include<stdio.h>
#include<conio.h>
// function prototype
int facto(int);
void main()
{
   int n;
   clrscr();
   printf("enter the no :");
   scanf("%d",&n);
   printf("the no is :%d\t factorial:%d\n",n,facto(n));
   getch();
   }
 //function body

int facto(int n)
{
  int f=1;
  while(n>0)
  {
  f*=n;
  n--;
  }
  return f;

  }

//a pro to find the factorial of a no using recursion
//n=n x n-1 x.....1
#include<stdio.h>
#include<conio.h>
int facto(int); // prototype function

void main()
{
 int n;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 printf("the factorial of a no:%d\n",facto(n));
 getch();
}
int facto(int n)
{
 int f;
 if(n==1)
	  return 1;

 f=n*facto(n-1); //re-refer from its own difinition
	  return f;
}
/*explanation
 f=4*6=24
 f=3*2
 f=2*1
      */

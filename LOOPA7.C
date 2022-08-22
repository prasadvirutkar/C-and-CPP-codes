//read a no to find 10 multiples of a no
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 //loop to print 10 multiple of no
 for(i=1;i<=10;i++)
 {
 printf("%d\t%d=%d\n",n,i,(n*i));
 }
 getch();
 }
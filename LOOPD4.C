//read a no to find the 10 mutiples of a no
/*
i.p 5
5
10
15
...50
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("enter the no :");
 scanf("%d",&n);
 //loop to print 10 multiples of a no
 for(i=1;i<=10;i++)
  printf("%d\t%d=%d\n",n,i,(n*i));
  getch();
  }

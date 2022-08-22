//read a no to find digital sum
/*1234
o.p 10*/
#include<stdio.h>
#include<conio.h>
int dsum(int);

void main()
{
     int n,m;
     clrscr();
     printf("enter the no:");
     scanf("%d",&n);
     m=dsum(n);
     printf("the digital sum of in %d is%d",n,m);
     getch();
}
int dsum(int n)
{

 if(n!=0)
 {
 return(n%10+dsum(n/10));
 }
 else
 {
 return 0;
 }
}


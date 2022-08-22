//read a no to print reverse
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 // loop for printing no in reverse
 while(n>0)
 {
 printf("%d",(n%10));//4321
 n/=10;
 }
 getch();
 }
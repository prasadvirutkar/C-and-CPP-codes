/* read a no to check wheather it is even or odd */
#include<stdio.h>
#include<conio.h>
void main()
{
 int n;
 clrscr();
 printf("first no ");
 scanf("%d",&n);
 if(n%2==0)
 printf("number is even");
 else
 printf("number is odd");
 getch();
 }

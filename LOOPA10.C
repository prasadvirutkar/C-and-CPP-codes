/* read a no to check palindrom */
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,sum=0,temp;
 clrscr();
 printf("enter the no :");
 scanf("%d",&n);
 temp=n;
 //logic for checking palindrome
 while(n>0)
 {
 r=n%10;
 sum=(sum*10)+r;
 n/=10;
 }
 if(temp==sum)
 printf("is palindrome no");
 else
 printf("is not a palindrome no");
 getch();
 }

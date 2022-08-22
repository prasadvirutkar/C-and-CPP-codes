#include<stdio.h>
#include<conio.h>
void main()
{
 char nm[10];
 int a,b,c;
 clrscr();
 printf("\n enter the names of person:");
 scanf("%s%s%s",&nm);
 printf("enter the age:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
 {
 printf("\nthe biggest age is a");
 }
 else
 {
 printf("\nthe lowest age is a");
 }
 if(b>a && b>c)
 {
 printf("\nthe biggest age is b");
 }
 else
 {
 printf("\nthe lowest age is b");
 }
 if(c>a && c>b)
 {
 printf("\nthe biggest age is c");
 }
 else
 {
 printf("\nthe lowest age is c");
 }
 getch();
 }

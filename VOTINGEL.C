#include<stdio.h>
#include<conio.h>
void main()
{
 char nm[10];
 int age;
 clrscr();
 printf("enter the name:");
 scanf("%s",&nm);
 printf("enter the age:");
 scanf("%d",&age);
 //conditional expression for checking voting
 if(age>18)
 {
 printf("%s eligibal age for voting:%d\n",nm,age);
 }
 else
 {
 printf("%s not eligibal age for voting:%d\n",nm,age);
 }
 getch();
 }

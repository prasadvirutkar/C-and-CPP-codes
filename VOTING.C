#include<stdio.h>
#include<conio.h>
void main()
{
 char nm[10];
 int age;
 clrscr();
 printf("enter your name:");
 scanf("%s",nm);
 printf("enter an age:");
 scanf("%d",age);
 // conditial expression for checking voting elligibility
 if(age>18)
 {
    //then block
 printf("%s is elligible age:%d\n",nm,age);
 }
 else
 {
 printf("%s is not elligible for age:%d",nm,age);
 }
 getch();
 }
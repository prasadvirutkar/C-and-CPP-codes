//read any name and print it for 20 times on the screen
#include<stdio.h>
#include<conio.h>
void printname(char[]);
void main()
{
 char nm[10];
 clrscr();
 printf("enter the name:");
 scanf("%s",&nm);
 printname(nm);
 }
 //finction definition
 void printname(char x [])
 {
 int i;
 for(i=1;i<=20;i++)
 printf("%d\t%s\n",i,x);
 getch();
 }
//a program to read a string and print it reverse
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[20];
 int i;
 clrscr();
 printf("enter a string:");
 scanf("%s",&str);
 printf("original string:%s\n",str);
 //logic for reversing a string
 printf("reverse string:");
 for(i=strlen(str)-1;i>=0;i--)
 printf("%c",str[i]);
 getch();
 }
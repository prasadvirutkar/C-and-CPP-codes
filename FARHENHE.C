#include<stdio.h>
#include<conio.h>
void main()
{
 int tem;
 float celsius;
 float farhenheit;
 clrscr();
 printf("temprature:");
 scanf("%s",&tem);
 farhenheit=(celsius*9/5)+32;
 printf("%d,2fcelsius=%d.2farhenheit",celsius,farhenheit);
 getch();
 }
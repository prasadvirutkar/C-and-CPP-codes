//code for pattern generating
/*
1
12
123
1234
12345
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c;
 clrscr();
 for(r=1;r<=5;r++)
 {
 for(c=1;c<=r;c++)
 {
 printf("%4d",c);
 }
 printf("\n");
 }
 getch();
 }
//find sum of all even nos int range 0-100
#include<stdio.h>
#include<conio.h>

int esum(int);

void main()
{
 clrscr();
 printf("summation of all even no 0-100:\t%d\t",esum(0));
 getch();
}
int esum(int n)
{
 int s;
 if(n==100)
       return 100;
 s=n+esum(n+=2);
       return s;
}
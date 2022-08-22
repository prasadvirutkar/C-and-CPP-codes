//SOP--POP Approach - arithmetics
#include<stdio.h>
#include<conio.h>
//global data
int a=5;
int b=7;

void main()
{
 clrscr();
 printf("A :%d\tB :%d\n",a,b);
 printf("addition :%d\n",add());
 printf("substraction :%d\n",sub());
 printf("multiplication :%d\n",mul());
 printf("division :%d\n",div());
 getch();
}

int add()
{
 return (a+b);
}
int sub()
{
 return (a-b);
}
int mul()
{
 return (a*b);
}
int div()
{
 return (a/b);
}
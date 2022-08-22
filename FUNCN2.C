// understanding nested function
#include<stdio.h>
#include<conio.h>
void printline(char);
int digitalsum(int);

void main()
{
 int n;
 clrscr();
 printf("enter the no :");
 scanf("%d",&n);
 printline('=');
 printf("digital sum of numbers:%d\n",dsum(n));

 printf("\n");
 printline('@');
 getch();
 }
 //definition for printline
 void printline(char x)
 {
 int i;
 for(i=1;i<=80;i++)
 printf("%c\n",x);
 }
 //definition for digitalsum
 int digitalsum(int n)   //1234
 {
 printf("\n");
 printline('*');
 int dsum;
 while(n>0)
 {
 dsum+=(n%10);
 n/=10;
 }
 return dsum;
 }

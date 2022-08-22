//read a no and find their digital sum..1234
#include<stdio.h>
#include<conio.h>

int dsum(int);

void main()
{
 int n;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 printf("digital sum of numbers:%d\n",dsum(n));

 getch();
 }
 //definition of digital sum
 int dsum(int n) //1234
 {
  int dsum=0;
  printf("\n");
  while(n>0)
  {
  dsum+=(n%10);
  n/=10;
  }
  return dsum;
  }
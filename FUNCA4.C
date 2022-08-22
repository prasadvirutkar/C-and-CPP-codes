//read a no to find their digital sum
// i.p 1234
// o.p 10
#include<stdio.h>
#include<conio.h>
int digitalsum(int);
void main()
{
 int n;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 digitalsum(n);
 getch();
 }
int digitalsum(int n)
{
int  i,dsum=0;
while(n>0)
{
i=n%10;
dsum=dsum+i;
n=n/10;
}

printf("dsum is =%d",dsum);
return 0;
}

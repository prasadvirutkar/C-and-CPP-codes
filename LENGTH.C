#include<stdio.h>
#include<conio.h>
void main()
{
int num1[]={1,2,3,4};
int num2[]={5,6,7,8},m=0,n=0,i,c[];
clrscr();
m=sizeof(num1)/2;
n=sizeof(num2)/2;
for(i=0;i<m+n;i++)
{
if(i<m)
{
c[i]=num1[i];
}
else if(i>=m)
{
c[i]=num2[i-m];
}
printf(" %d ",c[i]);
}
getch();
}
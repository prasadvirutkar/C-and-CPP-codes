/*read a no and print reverse
i.p 1234   o.p 4321
n=1234
n=n/10-----123
n%10------4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 //logical statement for print reverse digit
 while(n>0)
 {
 printf("%d",n%10); //4321
 n/=10;
 }
 getch();
 }
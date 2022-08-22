#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter any 3 nos\n");
 scanf("%d%d%d",&a,&b,&c);
 //expression to determine  greatest
 if(a>b && a>c)
 printf("%d to determine greatest\n",a);
 else if(b>a && b>c)
 printf("%d to determine greatest\n",b);
 else
 printf("%d to determine greatest\n",c);
 //expression to determine  lowest
 if (a<b && a<c)
 printf("%d to determinr lowest\n",a);
 else if(b<a && b<c)
 printf("%d to determine lowest\n",b);
 else
 printf("%d to determine lowest\n",c);
 getch();
 }
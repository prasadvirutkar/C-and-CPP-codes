//read nos till their summation remains <=100 and count total nos entered
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,sum=0,cnt=0;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n)
 {
   sum+=n;
   cnt++;
   }
   while(sum<=100);
   printf("enter total nos:%d\n",cnt);
   printf("summation:%d\n",sum);
   getch();
   }
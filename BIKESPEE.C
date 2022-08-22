#include<stdio.h>
#include<conio.h>
void main()
{
 float s=65,fc=45;
 int d;
 float t,avg;
 clrscr();
 printf("\t\t\t biker:");
 printf("\t speed:%.2f\nfuel consumption:%.2\n",s,fc);
 printf("total distance:");
 scanf("%d",&d);
 t=d/s;
 avg=d/fc;
 printf("calculate time:%.2f\n",t);
 printf("calculate the avg:%.2f\n",avg);
 getch();
 }
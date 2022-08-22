#include<stdio.h>
#include<conio.h>
void main()
{
 float \price;
 int disc;
 clrscr();
 printf("enter the price:");
 scanf("%f",&price);
 printf("enter the discount:");
 scanf("%d",&disc);
 if (price<1500)
 {
 printf("discount is 0%");
 }
 if (price>=1500 && price<4500)
 {
 printf("discount is 2%");
 }
 if (price>=4000 && price<6000)
 {
 printf("discount is 4%");
 }
 if (price>=6000)
 {
 printf("discount is 8%");
 }
 getch();
 }
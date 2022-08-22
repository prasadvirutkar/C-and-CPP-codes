/* read price for dozen of oranges and quantity to purchase. compute price
for given quantity and round it to nearest integer.*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int orange;
 int quantity;
 float doz;
 float tp;
 clrscr();
 printf("enter dozen of oranges:");
 scanf("%d",&doz);
 printf("enter the quantity of oranges:");
 scanf("%d",&quantity);
 tp=doz*quantity/12;
 printf("value of doz:%f",tp);

 getch();
 }



/*read temprature in centigrade and if it more than 30 display message hot ,
if it is more than 40 very hot else normal*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int temp;
 clrscr();
 printf("enter temprature:");
 scanf("%d",&temp);
 if (temp>30&&temp<40)
 printf("temp is hot");
 if (temp>=40)
 printf("temp is very hot");
 else
 printf("temp is normal");

 getch();
 }










































































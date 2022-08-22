#include<stdio.h>
#include<conio.h>
void main()
{
 float radius,area,circumferance,diameter,pi=3.14;
 clrscr();
 printf("\n,enter radius of circle:");
 scanf("%f",&radius);
 diameter=2*radius;
 circumferance=2*pi*radius;
 area=pi*radius*radius;
 printf("\n,enter diameter of circle=%2f\n",diameter);
 printf("\n,enter circumferance of circle=%2f\n",circumferance);
 printf("\n,enter area of circle=%2\n",area);
 getch();
 }







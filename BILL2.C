#include<stdio.h>
#include<conio.h>
void main()
{
 char nm[10];
 int mn;
 float ir,fr,bl,tr;
 clrscr();
 printf("\n,enter the name of consumer:");
 scanf("%s",&nm);
 printf("\n,enter the meter no:");
 scanf("%d",&mn);
 printf("\n,enter the initial reading:");
 scanf("%d",&ir);

 printf("\n,enter the final reading:");
 scanf("%f",&fr);
 tr=fr-ir;
 printf("tr%f",tr);
 bl=tr*3.50;
 printf("the bill is%f",bl);
 getch();

 }

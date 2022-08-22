#include<stdio.h>
#include<conio.h>
void main()
{
 float A,B,C,D,Net;

 clrscr();
 printf("a\tb\tc\td\n");
 scanf("%f%f%f%f",&A,&B,&C,&D);
 Net=A+B+C+D;
 //compute profit share
 printf(" share of A :%.2f\tprofit share :%.2f\n",(A/Net),10000*(A/Net));
 printf("share of B :%.2f\tprofit share :%.2f\tn",(B/Net),10000*(B/Net));
 printf("share of C :%.2f\tprofit share :%.2f\n",(C/Net),10000*(C/Net));
 printf("share of D :%.2f\tprofit share:%.2f\n",(D/Net),10000*(D/Net));
 getch();
 }








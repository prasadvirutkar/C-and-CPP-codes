//array of undefined subscript
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[]={10,20,30,40,50,60,70,80,90,100};
 int i,n;
 clrscr();
 n=sizeof(A)/2;//total element=size of array/2-size of the int
 printf("array of subscript \t element \t memory address \n");
 for(i=0;i<n;i++)
   printf("A[%d]\t%d\t%u\n",i,A[i],&A[i]);
 getch();
 }
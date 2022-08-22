/*C program for bubble sort :C programming code for bubble sort to sort
numbers or arrange them in ascending order.you can modify it to print no in
descending order
bubble sort algorithim implementation in C*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int array[100],n,c,d,swap;
 clrscr();
 printf("enter number of element\n");
 scanf("%d",&n);
 printf("enter %d integers\n",n);
 for(c=0;c<n;c++)
 scanf("%d",&array[c]);
 for(c=0;c<(n-1);c++)
 {
  for(d=0;d<n-c-1;d++)
   {
    if(array[d]>array[d+1])//for decreasing order use
    {
   swap       =array[d];
   array[d]      =array[d+1];
   array[d+1] =swap;
   }
  }
 }
 printf("sorted list in ascending order:\n");
 for(c=0;c<n;c++)
 printf("%d\n",array[c]);
 getch();
 }
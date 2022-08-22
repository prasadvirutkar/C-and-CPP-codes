/*selection sort in c:C program for selection sort*sort numbers.this code
implements selection sort algorithm to arrange numbers of an array in the
ascending order.with little modification,it will arrange number in descending
order.*/
//selection sort algorithm implementation in C
#include<stdio.h>
#include<conio.h>
void main()
{
  int array[100],n,c,d,position,swap;
  clrscr();
  printf("enter the no of elements\n");
  scanf("%d",&n);

  printf("enter %d integers\n",n);

  for(c=0;c<n;c++)
  scanf("%d",&array[c]);

  for(c=0;c<(n-1);c++)
  {
  position=c;
  for(d=c+1;d<n;d++)
  {
   if(array[position]>array[d])
    position=d;
  }
  if(position!=c)
  {
   swap=array[c];
   array[c]=array[position];
   array[position]=swap;
  }
 }
  printf("sorted list in ascending order:\n");
  for(c=0;c<n;c++)
  printf("%d\n",array[c]);
  getch();
 }
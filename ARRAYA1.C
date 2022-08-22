//construct a single daimeter array of integers to find
//list all element with subscript
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[5],i,sum=0,max,min;
 float avg;
 clrscr();
 printf("enter a 5 elements :");
 for(i=0;i<5;i++)
 {
  scanf("%d",&A[i]);
  sum=sum+A[i];
  avg=sum/5;
 }
 printf("sum of all elements :%d\n",sum);
 printf("average of all elements :%.2f\n",avg);

 max=A[0];
 for(i=0;i<5;i++)
 if(A[i]>max)
 max=A[i];
 printf("max of 5 elements :%d\n",max);

 max=A[0];
 for(i=0;i<5;i++)
 if(min>A[i])
 min=A[i];
 printf("min of 5 element :%d\n",min);
 getch();
 }


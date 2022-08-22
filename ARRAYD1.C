//arry1
//declare an array of defined subscript , insert element in it
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[5];//array of size
 int i;//arrey counter
 clrscr();
 //logic for inserting elements in array
 for(i=0;i<5;i++)
 {
    printf("enter data from A[%d]:",i);
    scanf("%d",&A[i]);
  }
 //logic for displaying array elements ,memory positions
 printf("array sub\telement\tmemory address\n");
 for(i=0;i<5;i++)
 {
  printf("A[%d]\t\t%d\t\t%u\n",i,A[i],A[i]);
 }
 getch();
 }


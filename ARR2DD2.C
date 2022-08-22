//demonstrating 2-d array
//read size of matrix ,insert and print element in the matrix format
//find out row wise summation
#include<stdio.h>
#include<conio.h>

#define MAX  100 //macro definition
void main()
{
 int A[MAX][MAX];
 int m,n,i,j,rs=0;
 clrscr();
 printf("enter the size of MAT :");
 scanf("%d%d",&m,&n);
 //logic for inserting data into a MAT
 for(i=0;i<m;i++)//represent the row
 {
  for(j=0;j<n;j++)//represent the column
   {
   printf("enter the element of A[%d][%d]",i,j);
   scanf("%d",&A[i][j]);
   }
 }
 //logic for printing the MAT elements,row wise summation
 printf("Matrix elements follows\n ");
 for(i=0;i<m;i++)
 {
   rs=0;
  for(j=0;j<n;j++)
  {
   printf("%4d\t",A[i][j]);
   rs+=A[i][j];
  }
  printf("%d",rs);
  printf("\n");
 }
 getch();
 }



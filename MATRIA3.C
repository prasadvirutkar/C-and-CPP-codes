//multiplication of matrix
#include<stdio.h>
#include<conio.h>
#define MAX 100

void main()
{
 int mat1[MAX][MAX],mat2[MAX][MAX],r,c,row,colm;
 int matmulti[MAX][MAX],k,sum=0;
 clrscr();
 printf("\nenter the size of matrix in row and column \n\t");
 printf("row=");
 scanf("%d",&row);
 printf("\tcolom=");
 scanf("%d",&colm);
 printf("\nenter the element of first matrix\n");
 for(r=0;r<row;r++)
  {
   for(c=0;c<colm;c++)
    {
     printf("matrix element of first matrix [%d][%d]===",r,c);
     scanf("%d",&mat1[r][c]);
    }
    printf("\n");
  }
  printf("\nenter the elements of second matrix\n");
  for(r=0;r<row;r++)
   {
    for(c=0;c<colm;c++)
     {
      printf("matrix element of second matrix[%d][%d]===",r,c);
      scanf("%d",&mat2[r][c]);
     }
     printf("\n");
   }
  printf("\nthe elements of first matrix\n\n");
  for(r=0;r<row;r++)
   {
    for(c=0;c<colm;c++)
     {
     printf("%4d",mat1[r][c]);
     }
   printf("\n");

   }
   printf("\nthe element of second matrix\n");
   for(r=0;r<row;r++)
    {
     for(c=0;c<colm;c++)
      {
      printf("%4d",mat2[r][c]);
      }
     printf("\n");
   }
  printf("\nperforming multiplication of matrix\n");
  for(r=0;r<row;r++)
  {
   for(c=0;c<colm;c++)
    {
     for(k=0;k<colm;k++)
     {
      sum=sum+mat1[r][k]*mat2[k][c];
     }
     matmulti[r][c]=sum;
     sum=0;
    }
    }
   printf("the multiplication of matrix\n");
   for(r=0;r<row;r++)
    {
     for(c=0;c<colm;c++)
      {
       printf("%4d",matmulti[r][c]);
      }
      printf("\n");
    }

getch();
}
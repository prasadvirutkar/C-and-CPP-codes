//pro for developing a matrix
#include<stdio.h>
#include<conio.h>

#define MAX 100

void main()
{
 int A[MAX][MAX],m,n,r,c;
 int Cs[MAX];
 int rs=0;
 int trace,ld;
 clrscr();
 printf("enter a size of MAT :");
 scanf("%d%d",&m,&n);

 //contruct a MAT
 printf("enter element in MAT\n");
 for(r=0;r<m;r++)
  {
  for(c=0;c<n;c++)
   {
    printf("enter data for A[%d][%d]",r,c);
    scanf("%d",&A[r][c]);
   }
  }
 //logic for print MAT
 printf("MAT element follows \n");
 for(r=0;r<m;r++)
  {
   for(c=0;c<n;c++)
    {
     printf("%4d",A[r][c]);
    }
    printf("\n");
  }
 //logic for row-wise summation
 printf("row wise summation \n");
 for(r=0;r<m;r++)
  {
   rs=0;
   for(c=0;c<n;c++)
   {
   printf("%4d",A[r][c]);
   rs+=A[r][c];
    }
     printf("====%4d\n",rs);
  }
 //logic for column wise summation
 printf("column-wise summation \n");
 for(c=0;c<n;c++)
  {
   Cs[c]=0;
   for(r=0;r<m;r++)
    {
     Cs[c]+=A[r][c];
    }
  }
  printf("======\n");
  for(c=0;c<n;c++)
     printf("%4d\n",Cs[c]);
 //find transpose of MAT
 printf("transpose of MAT\n");
 for(r=0;r<m;r++)
  {
   for(c=0;c<n;c++)
    {
     printf("%4d",A[c][r]);
    }
   printf("\n");
  }
 //find trace of square matrix-lower diagonal
 trace=0;
 for(r=0,c=0;r<m;r++,c++)
    trace+=A[r][c];
  printf("trace of a matrix %d\n",trace);
 //find summation of upper digonal element
  ld=0;
  for(r=0,c=n-1;r<m;r++,c--)
  ld+=A[r][c];
  printf("summation of upper diagonal elements: %d\n",ld);
  getch();
 }





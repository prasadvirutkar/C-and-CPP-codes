//demonstrating multi dimensional
//record marks of student
//student 10, 5 subject, 2 papers, 2 test
#include<stdio.h>
#include<conio.h>

void main()
{
 int mrk[10][5][2][2];
 int i,j,k,l;
 clrscr();
 printf("enter the marks:\n");
 for(i=0;i<10;i++) //student counter
  {
   for(j=0;j<5;j++)//subject counter
    {
     for(k=0;k<2;k++)//paper counter
      {
       for(l=0;l<2;l++)//test counter
	{
	 printf("enter marks of student %d\tsub :%d\tpapers :%d\ttest:%d",i+1,j+1,k+1,l+1);
	 scanf("%d",&mrk[i][j][k][l]);
	 }
	}
       }
      }
getch();
    }
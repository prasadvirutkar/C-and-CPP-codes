//single dimension array of user find size
//add all array elements to find the sum of them
//find the greatest and lowest among array elements
#include<stdio.h>
#include<conio.h>

#define MAX 100 //macro definition
void main()
{
 int A[MAX],n,i;
 int mx=0,mn=999;
 int sum=0;
 clrscr();
 printf("enter no of subscript of single dimension array:\n");
 scanf("%d",&n);
 //enter data in one dimension array
 for(i=0;i<n;i++)
 {
  printf("enter element for A[%d] :",i);
  scanf("%d",&A[i]);
  sum+=A[i];
  }
  //print all elements of 1-d array
  printf("subscript\telement\n");
  for(i=0;i<n;i++)
  printf("A[%d]\t%d\n",i,A[i]);
  printf("summation of all array elements :%d\n",sum);
  //logic for determine greatest and lowest among all array elements
  mx=A[0];
  mn=A[0];
  for(i=1;i<n;i++)
  {
  if(A[i]>mx)
	 mx=A[i];

  if(A[i]<mn)
	 mn=A[i];
  }
  printf("greatest element :%d\tlowest element :%d\n",mx,mn);
  getch();
  }
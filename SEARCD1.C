//Implementation of linear search
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[]={3,23,9,18,7,5,72,8};
 int E,i,pos,n;
 clrscr();
 n=sizeof(A)/2; //compute size of an array
 printf("enter the element to search :");
 scanf("%d",&E);
 //implementation of linear search
 for(i=0;i<n;i++)
 {
   if(A[i]==E)
   {
      pos=i;//record found position
      break;
   }
 }
 //confirm search
 if(i<n)
      printf("element %d found at position :%d\n",E,pos);
 else if(i>=n)
      printf("data not found in an array\n");
      getch();
}
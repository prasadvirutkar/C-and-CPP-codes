//implementation of binary search
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[]={10,20,30,40,50,60,70,80,90,100};
 int n,i,mid,E,pos;
 /*
 A   - array of sorted elements
 n   - size of an array
 i   - array counter
 mid - mid position
 E   - element to search
 pos - found position
 */
 clrscr();
 n=sizeof(A)/2;//size of an array
 mid=A[n/2];
 printf("enter the element to search:");
 scanf("%d",&E);
 //apply Binary search
 if(E==mid)
 {
    pos=n/2;
    printf("found at position :%d\n",pos);
 }
 else if(E<mid)
 {
    for(i=(n/2)-1;i>=0;i--)
    {
     if(E==A[i])
     {
       pos=i;
       break;
     }
   }
 }
 else if(E>mid)
 {
  for(i=(n/2)+1;i<n;i++)
  {
   if(E==A[i])
   {
    pos=i;
    break;
   }
  }
 }

//confirm search
printf("enter found at position :%d\n",pos);
getch();
}

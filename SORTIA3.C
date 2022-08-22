/*inserting sort in c:c program for insertion sort to sort numbers .his code
implements insertion sort algorithm to arrange numbers of an array in descending
order,with a little modification ,it will arrage no. in descending order.
*/
//insertion sort algorithim implementation in C
//insertion sort ascending order
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,array[100],c,d,t;
 clrscr();
 printf("enter number of element\n");
 scanf("%d",&n);

 printf("enter the %d integers\n",n);
 for(c=0;c<n;c++)
 {
  scanf("%d",&array[c]);
  }
 for(c=1;c<=n-1;c++)
 {
 d=c;
 while(d>0&&array[d-1]>array[d])
 {
 t        =array[d];
 array[d] =array[d-1];
 array[d-1]=t;
 d--;
 }
}
 printf("sorted list in ascending order:\n");
 for(c=0;c<=n-1;c++)
 {
 printf("%d\n",array[c]);
 }
 getch();
 }
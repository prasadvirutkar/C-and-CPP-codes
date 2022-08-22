//referal code
/*linear search in c
linear search in c programming:the following code implements linear search
which is used to find wheather a given number is present in an array and if
it is present in an array and if its present then at what location it occur
it is alao known as sequential search.it is straight forward and work as fol
lows:we keep on comparing each element with the element to search until it is
found or the list end.linear search in c language for multiple occurance and
using function.
*/
//linear search C program
#include<stdio.h>

int main()
{
 int array[1000],search,c,n;
 clrscr();
 printf("enter the number of element in array\n");
 scanf("%d",&n);
 printf("enter %d integer(s)\n",n);
 for(c=0;c<n;c++)
  scanf("%d",&array[c]);
 printf("enter the number to search\n");
 scanf("%d",&search);
 for(c=0;c<n;c++)
 {
  if(array[c]==search)
  {
   printf("%d is present at location %d.\n",search,c+1);
   break;
  }
 }
 if (c == n)
 printf("%d is not present in array.\n",search);
 return 0;
 }
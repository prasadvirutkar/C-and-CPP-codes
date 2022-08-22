//read a four digit no to print it using alphabets
//i.p 1234   o.p one two three four
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a=1000;
  clrscr();
  printf("enter the four no:");
  scanf("%d",&n);// 1234/1000
  while (n>0)
  {
  switch(n/a)
  {
     case 1:
     printf("one\t");
     break;
     case 2:
     printf("two\t");
     break;
     case 3:
     printf("three\t");
     break;
     case 4:
     printf("four\t");
     break;
     case 5:
     printf("five\t");
     break;
     case 6:
     printf("six\t");
     break;
     case 7:
     printf("seven\t");
     break;
     case 8:
     printf("eight\t");
     break;
     case 9:
     printf("nine\t");
     break;
     default:
     printf("zero\t");

     }// end of switch
     n=n-(n/a)*a;
     a=a/10;
     }// end of while
     getch();
     }
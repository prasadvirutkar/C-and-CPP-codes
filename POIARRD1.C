//pointer to an array
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[]={10,20,30,40,50,60,70,80,90,100},i;
 int *B;
 clrscr();
 B=A;//by default pointer variable point to base address
 printf("array sub\telement \n");
 /* for(i=0;i<10;i++);
	   printf("A[%d]\t\t%d\n",i,*(B+i));
   printf("transversing an array in the reverse order \n");
   printf("array sub\telement \n");
   for(i=9;i>=0;i--);
      printf("A[%d]\t\t%d\n",i,*(B+i));

 getch();
 }
*/


 while(*B)
 {
     printf("%d\n",*(B++));
 }
 B=A;
 printf("transversing reverse\n");
 for(i=9;i>=0;i--)
    printf("A[%d]\t\t%d\n",i,*(B+i));

getch();
}

//demonstrating pointers
#include<stdio.h>
#include<conio.h>
void main()
{
 int A=5;//premitive type
 int *B;//decleration-derived type
 clrscr();
 B=&A;//B points(ref) to A
 printf("value of A :%d\n",A);
 printf("Memory Address of A :%u\n",&A);
 printf("value holds by B:%u\n",B);
 printf("address of B :%u\n",&B);
 printf("Memory size of B %d\n",sizeof(B));
 printf("value ref by B :%d\n",*B);
 *B+=5;//A+=5
 printf("value of A :%d\n",A);
 getch();
}
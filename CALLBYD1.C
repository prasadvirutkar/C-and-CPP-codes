//demonstrating pointers
#include<stdio.h>
#include<conio.h>

void update(int *B);

void main()
{
 int A=5;
 clrscr();
 printf("value of A:%d\n",A);//5
 update(&A);//call by reference
 printf("update value of A:%d\n",A);//10
 getch();
}
 //*B=&A
void update(int *B)
{
 *B+=5;
}

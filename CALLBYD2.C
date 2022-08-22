//call by referance
#include<stdio.h>
#include<conio.h>

void exchange(int *C,int *D);

void main()
{
 int A=5,B=7;
 clrscr();
 printf("value of A:%d\t value of B:%d\n",A,B);//5,7
 exchange(&A,&B);//call by referance
 printf("Exchange value of A:%d\t value of B:%d\n",A,B);//7,5
 getch();
}
void exchange(int *C,int *D)
{
 int T=*C;
 *C=*D;
 *D=T;
}

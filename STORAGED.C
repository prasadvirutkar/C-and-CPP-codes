// demonstrating global variable
#include<stdio.h>
#include<conio.h>

 int a=5;//global having scope throught the program
 void f1(void);
 void main()
 {
    clrscr();
    printf("value of a:%d\n",a);//5
    f1();
    printf("final value of a:%d\n",a);//10
    }
    void f1(void)
    {
    a+=5;
    printf("updated value of a:%d\n",a);//10
    }
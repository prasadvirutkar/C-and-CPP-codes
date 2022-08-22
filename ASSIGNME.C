#include<stdio.h>
#include<conio.h>
void main()
{
 char nm[10];
 int age;
 clrscr();
 printf("enter the name of person:");
 scanf("%s",&nm);
 printf("enter the age:");
 scanf("%d",&age);
 if (age<18)
 {
 printf("person in j.r kid\n");
 }
 if (age>=18 && age<25)
 {
 printf("person in young one\n");
 }
 if (age>=25 && age<40)
 {
 printf("person in career age\n");
 }
 if (age>=40 && age<60)
 {
 printf("person in mid age\n");
 }
 if (age>=60)
 {
 printf("person in old age\n");
 }
 getch();
 }
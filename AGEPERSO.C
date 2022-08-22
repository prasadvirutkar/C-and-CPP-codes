/*read person age to display following message as per age
 <18-jr.kid
 >=18<25 collage going
 >=25<40 career or oriented
 >=40<60 middle age
 */
#include<stdio.h>
#include<conio.h>
void main()
{
 char nm[10];
 int age;
 clrscr();
 printf("enter person name:");
 scanf("%s",nm);
 printf("enter person age:");
 scanf("%d",&age);
 //display following messge as per age
 if (age<18)
 {printf("person jr.kid");
 }
 if (age>=18&&age<25)
 {printf("person going collage\n");
 }
 if (age>=25&&age<40)
 {printf("person is career oriented\n");
 }
 if (age>=40&&age<60)
 {printf("person is middle age");
 }
 if (age>=60)
 {printf("person old age");
 }
 getch();
 }
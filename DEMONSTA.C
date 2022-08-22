 // Demonstating switch......case
 //input any digit to print in alphabet
 //1.....one 2....two...3.....three
#include<stdio.h>
#include<conio.h>
void main()
{
 int dg;
 clrscr();
 printf("enter any digit :");
 scanf("%d",&dg);
 switch(dg)
 {
  case 1:
  //case '1':
  //case '*':
  printf("one");
  break;
  case 2:
  printf("two");
  break;
  case 3:
  printf("three");
  break;
  case 4:
  printf("four");
  break;
  case 5:
  printf("five");
  break;
  case 6:
  printf("six");
  break;
  case 7:
  printf("seven");
  break;
  case 8:
  printf("eight");
  break;
  case 9:
  printf("nine");
  break;
  default:
  printf("zero");
  getch();
  }
  }

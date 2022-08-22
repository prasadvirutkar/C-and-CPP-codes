//read two nos to perform all possible airthmetics of user choice
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 char ch;
 clrscr();
 printf("enter two nos");
 scanf("%d%d",&a,&b);
 //Menu for arithmetics
 gotoxy(40,5);
 printf("menu for airthmetics");
 gotoxy(30,6);
 printf("1,+,a,A---addition");
 gotoxy(30,7);
 printf("2,-,s,S---substraction");
 gotoxy(30,8);
 printf("3,*,m,M---multiplication");
 gotoxy(30,9);
 printf("4,/,d,D---divisuon");
 gotoxy(30,10);
 printf("5,%,r,R---modulus");
 gotoxy(30,12);
 printf("enter your choice:");
 ch=getche();
 switch(ch)
 {
  case 1:
      case '+':
      case 'a':
      case 'A':
	      gotoxy(30,15);
      printf("result of addition :%d\n",a+b);
      break;
      case 2:
      case '-':
      case 's':
      case 'S':
	      gotoxy(30,15);
      printf("result of substraction :%d\n",a-b);
      break;
      case 3:
      case '*':
      case 'm':
      case 'M':
	      gotoxy(30,15);
      printf("result of multiplication :%d\n",a*b);
      break;
      case 4:
      case '/':
      case 'd':
      case 'D':
	      gotoxy(30,15);
      printf("result of division :%d\n",a/b);
      break;
      case 5:
      case '%':
      case 'r':
      case 'R':
	      gotoxy(30,15);
      printf("result of modulus :%d\n",a%b);
      break;
 default:
	 printf("wrong choice;");
	 }
	 }
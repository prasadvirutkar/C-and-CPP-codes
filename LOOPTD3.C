//read a four digit number to print it using alphabate
//i.p 1234  o.p one two three four
#include<stdio.h>
#include<conio.h>
void main()
 {
   int n,a=1000;
   clrscr();
   printf("enter the four digit:");
   scanf("%d",&n);//1234/1000
    while(n>0)
    {

	     switch(n/a)
	     {
	     case 1:
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


	   }//end of switch
	   n=n-(n/a)*a; //1234-1*1000----n-234
	   a=a/10;//a=100
	   }//end of  while
	   getch();
	   }

//read any name and print it for 20 times on the screen
//read prasad
#include<stdio.h>
#include<conio.h>

void printname(char[],int i);

void main()
{
  char nm[10];
  clrscr();
  printf("enter your name:");
  scanf("%s",&nm);
  printname(nm,20);
  getch();
}
void printname(char nm[],int count)
{

 //c=1;
 if(count>0)
    {
    printname(nm,count-1);
    printf("print name %s\n",nm);
    }
}


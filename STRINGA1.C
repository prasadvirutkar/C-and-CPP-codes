//a function which will read a string and returns no of words in it
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int i;
 int count=1;
 char str[1000];
 clrscr();
 printf("enter a string:");
 gets(str);
 i=0;
while(str[i]!='\0')
{
 {
  if(str[i]==' ')
  count++;
  i++;
  }
  }
  printf("\n number of words =%d",count);
  getch();
  return 0;
  }


//construct a single dimension of a string to find
//list all elements with subsequence
//find all strings start with vowels

#include<stdio.h>
#include<stdio.h>
#include<string.h>
void main()
{
 char str[20];
 int A[5],i,vc=0;
 clrscr();
 printf("enter a string:");
 scanf("%s",&str);
 //logic for counting no of vowels
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'
  || str[i]=='u')
  vc++;
  }
  printf("no of vowels :%d\n",vc);
  getch();
  }

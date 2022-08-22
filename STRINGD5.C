//read a string and check weather it is palindrom or not
/*
reverse of a string is equle to same string
wow
mom
nitin
madam
dad
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[20];
 int i,j;
 clrscr();
 printf("enter a string:");
 scanf("%s",&str);
 //logic for checking palindrom or not
 for(i=0,j=strlen(str)-1;i<=j;i++,j--)
 {
    if(str[i]!=str[j])
	     break;
 }
 if(i>j)
      printf("%s is a palindrom \n",str);
 else
     printf("%s is not palindrom \n",str);

 getch();
 }

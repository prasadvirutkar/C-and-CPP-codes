//read a string and change case of it
/*
i.p -abcd
e.g -ABCD
ASCII values - 0- 255
A - 65
Z - 91
a - 97
z - 123
A - a - 32
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char str[20];
 int i;
 clrscr();
 printf("enter a string in any case:");
 scanf("%s",&str);
 //change case logic
 for(i=0;i<strlen(str);i++)
    {
    //case for capital case
    if(str[i]>=65 && str[i]<91)
	    str[i]+=32;
    else if(str[i]>=97 && str[i]<123)
	    str[i]-=32;
    }
    printf("change case string :%s\n",str);
    getch();
    }
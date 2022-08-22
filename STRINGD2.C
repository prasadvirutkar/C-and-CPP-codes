//read a string and check no of vowels and consonent in it
//a,e,i,o,u----vowels,consonent
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char str[20];
int i,vc=0,cc=0;
clrscr();
printf("enter a string:");
scanf("%s",&str);
//logic for counting no of vowels and consonents
for(i=0;i<strlen(str);i++)
   {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
	vc++;
    else
	cc++;
    }
printf("no of vowels :%d\t no of consonents:%d\n",vc,cc);
getch();
}

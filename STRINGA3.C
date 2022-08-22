//function to convert case of given  string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int i;
 char str[5000];
 clrscr();
 printf("enter a string:");
 gets(str);
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]>=65&&str[i]<91)
  str[i]+=32;
  if(str[i]>=97&&str[i]<123)
  str[i]-=32;
 }
printf("\n change case string is %s\n",str);
getch();
}
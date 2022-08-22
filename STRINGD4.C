//string pattern
/*
i.p axiomtechguru
o.p
a
ax
axi
axio
axiom
.......
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
  //patern generation of a string
  for(i=0;i<strlen(str);i++)
  {
   for(j=0;j<=i;j++)
       {
	printf("%c",str[j]);
	}
	printf("\n");
	}
	getch();
	}
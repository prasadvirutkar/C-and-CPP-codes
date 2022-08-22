#include<stdio.h>
#include<conio.h>
void main()
{
 //declaration of variable
 char snm[10];
 int rn,s1,s2,s3,s4,s5,tot;
 float per;
 clrscr();
 //read data from user
 printf("enter the student name:");
 scanf("%s",&snm);
 printf("enter roll no:");
 scanf("%d",&rn);
 printf("enter sub1 \tsub2\tsub3\tsub4\tsub5 marks:");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 //compute
 tot=s1+s2+s3+s4+s5;
 per=(float) tot/5;
 //output
 printf("\t\t\t marksheet \n");
 printf("student name :%s\troll no:%d\n",snm,rn);
 printf("sub1%d\tsub2:%d\tsub3:%d\tsub4:%d\t:sub5:%d\m",s1,s2,s3,s4,s5);
 printf("total marks obtaind :%\n",tot);
 printf("percentage :%.2f\n",per);
 getch();
 }

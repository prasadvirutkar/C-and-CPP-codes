//generate fibbonoci series for n terms
#include<stdio.h>
#include<conio.h>
void main()
{
  int ft=0,st=1,rt,i,n;
  clrscr();
  printf("how many terms required:");
  scanf("%d",&n);
  //logic for fibbonoci
  printf("%4d,%4d",ft,st);
  for(i=3;i<n;i++)
  {
    rt=ft+st;
    printf("%4d",rt);
    ft=st;
    st=rt;
    }
     getch();
     }
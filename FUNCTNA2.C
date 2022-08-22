//print all even nos is the range of 0-100 and print summation
#include<stdio.h>
#include<conio.h>
int esum(int);
void fun(int);
void main()
{
    int n;
    clrscr();
    printf("enter all even no till:");
    scanf("%d",&n);
    fun(n);
    getch();

}
void fun(int x)
{


    esum(x);
}
int esum(int n)
{
    int i,sum=0;
    for(i=0;i<=n;i++)
    {
    if(i%2==0)
    {
    printf("%5d",i);
    sum=sum+i;
    }
}
printf("\n summation of all even nos = %d",sum);
return 0;
}


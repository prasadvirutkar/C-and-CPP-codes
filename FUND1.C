//nesting function-referring a function from anothers definition
#include<stdio.h>
#include<conio.h>
void f1(void);
void f2(void);
void f3(void);
void f4(void);

void main()
{
  clrscr();
  printf("am in main\n");
  f1();//calling f1
  printf("back to the main()\n");
  }
  void f1(void)
  {
  printf("am in f1 definition\n");
  f2();
  printf("back to f1\n");
  }
  void f2(void)
  {
  printf("am in f2 definition\n");
  f3();
  printf("back in f2\n");
  }
  void f3(void)
  {
  printf("am in f3 definition\n");
  f4();
  printf("back in f3\n");
  }
  void f4(void)
  {
  printf("am in f4 definition\n");
  printf("return back to the main\n");
  }



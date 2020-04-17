//program to illustrate the STORAGE CLASSES ;
#include<stdio.h>
#include<conio.h>
void f1();
void f2();
void f3();
void f4();
int d=5;

void main()
{
 auto int a=5;

 clrscr();
 f1();
 f2();
 f3();
 f4();
 getche();
}

void f1() //for auto class;
{
 int a,t;
 printf("a=%d\n",a);
 printf("t=%d\n",t);
}

void f2() //for static class;
{
 static int b;
 printf("b=%d\n",b);
}

void f3() //for register class;
{
  register int c;
 printf("c=%d\n",c);
}

void f4()//for extern class
{
 extern int d;
 printf("d=%d\n",d);
}
/*OUTPUT
a=-10
t=-28756
b=0
c=870
d=5
*/











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

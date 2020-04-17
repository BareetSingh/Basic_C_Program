//Program to swappimg any two numbers
//By using two variables
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("Enter any two number for swapping\n");
 scanf("%d %d",&a,&b);
 printf("\nthe numbers you have entered\n");
 printf("a=%d\n",a);
 printf("b=%d\n",b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter swapping the numbers are\n");
 printf("a=%d\n",a);
 printf("b=%d\n",b);
 getch();
}
/*
OUTPUT

Enter any two number for swapping
10
20

the numbers you have entered
a=10
b=20

After swapping the numbers are
a=20
b=10
*/










                                                                                
                                                                                
                                                                                

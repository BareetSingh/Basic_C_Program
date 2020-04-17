//Program to swappimg any two numbers
//By using three variables
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,t;
 clrscr();
 printf("Enter any two number for swapping\n");
 scanf("%d %d",&a,&b);
 printf("\nthe numbers you have entered\n");
 printf("a=%d\n",a);
 printf("b=%d\n",b);
 t=a;
 a=b;
 b=t;
 printf("\nAfter swapping the numbers are\n");
 printf("a=%d\n",a);
 printf("b=%d\n",b);
 getch();
}
/*OUTPUT
Enter any two number for swapping
21 31

the numbers you have entered
a=21
b=31

After swapping the numbers are
a=31
b=21
*/













                                                                                

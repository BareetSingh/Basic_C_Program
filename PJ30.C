//program to find addition of two numbers using call by reference;
#include<stdio.h>
#include<conio.h>
sum(int *,int *);
void main()
{
 int a,b;
 clrscr();
 printf("Enter any two numbers for Addition\n");
 scanf("%d %d",&a,&b);
 printf("%d",sum(&a,&b));
 getch();
}

sum(int *x,int *y)
{
 return(*x + *y);
}
/*OUTPUT
Enter any two numbers for Addition
23 45
68
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

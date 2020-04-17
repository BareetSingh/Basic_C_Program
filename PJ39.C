//39.Program for pointer as function;
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
 int a,b;
 clrscr();
 printf("Enter any two numbers for Swapping\n");
 scanf("%d %d",&a,&b);
 printf("you have Entered\na= %d;\nb= %d;\n",a,b);
 swap(&a,&b);
 printf("After Swapping the numbers are\na= %d;\nb= %d;\n",a,b);
 getche();
}
void swap(int *x,int *y)
{
 *x=*x + *y;
 *y=*x - *y;
 *x=*x - *y;
}
/*OUTPUT
Enter any two numbers for Swapping
12
13
you have Entered
a= 12;
b= 13;
After Swapping the numbers are
a= 13;
b= 12;
*/










                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


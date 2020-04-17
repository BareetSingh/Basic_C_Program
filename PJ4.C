//program to find given number prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
int n,a;
clrscr();
printf("enter any number \n");
scanf("%d",&n);
for(a=2;a<n;a++)
{
 if(n%a==0)
 {
 printf("number is not prime\n");
 break;
 }
}
if(a==n)
printf("number is prime\n");
getch();
}
/*OUTPUT

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









                                                                                
                                                                                
                                                                                
                                                                                


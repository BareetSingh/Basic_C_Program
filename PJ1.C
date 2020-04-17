//program to find the enter number is odd or even
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter any number to find even or odd\n");
scanf("%d",&n);
if(n%2==0)
printf("\nResult\n%d is an even number\n",n);
else
printf("\nResult:\n%d is a odd number\n",n);
getch();
}

/*
OUTPUT

Enter any number to find even or odd
23

Result:
23 is a odd number
*/



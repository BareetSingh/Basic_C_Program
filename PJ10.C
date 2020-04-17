//program to find product of digits in a number
#include<stdio.h>
#include<conio.h>
void product();
void main()
{
clrscr();
product();
getch();
}

void product()
{
int n,p=1;
printf("Enter any number\n");
scanf("%d",&n);
while(n!=0)
{
p=p*(n%10);
n=n/10;
}
printf("The product of digits in the number %d",p);
}
/*
OUTPUT
Enter any number
2198
The product of digits in the number 144
*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

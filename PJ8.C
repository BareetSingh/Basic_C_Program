//programe for reverse to given number
#include<stdio.h>
#include<conio.h>
void main()
{
int n,r=0;
clrscr();
printf("enter any number for reverse\n");
scanf("%d",&n);
while(n!=0)
{
 r=r*10+n%10;
 n=n/10;
}
printf("\nAfter reverse the number is %d",r);
getch();
}
/*
OUTPUT
enter any number for reverse
1234

After reverse the number is 4321
*/













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

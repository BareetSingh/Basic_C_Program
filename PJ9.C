//program to find the sum of digits in the given number
#include<stdio.h>
#include<conio.h>
void main()
{
int d,sum=0;
clrscr();
printf("enter any number\n");
scanf("%d",&d);
while(d!=0)
{
sum=sum+d%10;
d=d/10;
}
printf("The sum of digits in the given number is %d",sum);
getch();
}
/*OUTPUT
enter any number
2101
The sum of digits in the given number is 4
*/













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

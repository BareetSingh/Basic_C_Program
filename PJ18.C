//program to calculate the power of given number;
#include<stdio.h>
#include<conio.h>
void power();
void main()
{
 clrscr();
 power();
 getch();
}

void power()
{
 int n,p,Result=1;
 printf("Enter number and Power\n");
 scanf("%d %d",&n,&p);
 while(p!=0)
 {
  Result=Result*n;
  p--;
 }
 printf("%d",Result);
}
/*OUTPUT
Enter number and Power
2
8
256
*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

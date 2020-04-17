//program to print armstrong number between 1 to 500;
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,temp,sum,r;
 clrscr();
 for(i=1;i<=10;i++)
  printf("%d\t",i);

 for(n=100;n<=500;n++)
 {
  sum=0;
  temp=n;
  while(temp!=0)
  {
   r=temp%10;
   sum=sum+(r*r*r);
   temp=temp/10;
  }
  if(sum==n)
  printf("%d\t",n);
 }
getch();
}
/*OUTPUT
1       2       3       4       5       6       7       8       9       10
153     370     371     407
*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

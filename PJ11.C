//program to find given number armstrong or not
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,z,r,p=0;
 clrscr();
 printf("Enter any Three digits Number\n");
 scanf("%d",&n);
 z=n;
 while(n!=0)
 {
  r=n%10;
  p=p+(r*r*r);
  n=n/10;
 }
 if(p==z)
  printf("given number is an armstrong number\n");
 else
  printf("given number is not an armstorng number\n");
 getch();
}
/*
Enter any Three digits Number
153
given number is an armstrong number
*/















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

//program to find given number is palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,temp,r=0;
 clrscr();
 printf("Enter any number\n");
 scanf("%d",&n);
 temp=n;
 while(n!=0)
 {
 r=r*10+n%10;
 n=n/10;
 }
 if(temp==r)
 printf("Given number is a Palindrom Number\n");
 else
 printf("Given number is nont a Palindrom number\n");
 getch();
}
/*OUTPUT
Enter any number
191
Given number is a Palindrom Number
*/











                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

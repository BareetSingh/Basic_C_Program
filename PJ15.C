//progarm to find lowest number using turnuary operator;
#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,n3,Lowest;
 clrscr();
 printf("Enter any three numbers for Comparison\n");
 scanf("%d %d %d",&n1,&n2,&n3);
 Lowest=(n1<n2)?((n1<n3)?n1:n3):((n2<n3)?n2:n3);
 printf("\nLowest Number is %d",Lowest);
 getch();
}
/*OUTPUT
Enter any three numbers for Comparison
123
321
149

Lowest Number is 123
*/









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

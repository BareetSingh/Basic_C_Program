//program to print Fibonacci series till 25 terms;
#include<stdio.h>
#include<conio.h>
void main()
{
 long int i,t1=0,t2=1,sum=0;
 clrscr();
 for(i=1;i<=25;i++)
  {
  printf("%ld\t",sum);
  t1=t2;
  t2=sum;
  sum=t1+t2;
  }
 getch();
}
/*OUTPUT
0       1       1       2       3       5       8       13      21      34
55      89      144     233     377     610     987     1597    2584    4181
6765    10946   17711   28657   46368
*/













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

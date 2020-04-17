//program to find Largest number using conditional operator;
#include<stdio.h>
#include<conio.h>
void main()
{
 int n1,n2,n3,Largest;
 clrscr();
 printf("Enter any three numbers for Comparison\n");
 scanf("%d %d %d",&n1,&n2,&n3);

 if(n1>n2 && n1>n3)
  printf("Largest number is %d",n1);

 else if(n2>n1 && n2>n3)
  printf("Largest number is %d",n2);

 else
  printf("Largest number is %d",n3);

 getche();
}
/*OUTPUT
Enter any three numbers for Comparison
128
987
200
Largest number is 987
*/















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


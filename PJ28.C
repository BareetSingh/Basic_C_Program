//program to find sum of elements in Array;
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,n,sum=0;
 clrscr();
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Now enter %d elements\n",n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 for(i=0;i<n;i++)
 {
  sum=sum+a[i];
 }
 printf("The sum of elements in Array is %d",sum);
 getch();
}
/*OUTPUT
Enter the number of elements
6
Now enter 6 elements
10 20 30 110 50 100
The sum of elements in Array is 320
*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

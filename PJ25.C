//program for sorting an Array;
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,j,t,z=10;
 clrscr();
 printf("Enter any ten number for sorting\n");
 for(i=0;i<10;i++)
   scanf("%d",&a[i]);
 printf("After sorting the numbers are\n");
 for(j=0;j<z;j++)
 {
  for(i=0;i<z-1;i++)
  {
   if(a[i]>a[i+1])
    {
     t=a[i];
     a[i]=a[i+1];
     a[i+1]=t;
    }
  }
 }
 for(i=0;i<10;i++)
 {
  printf("%d ",a[i]);
 }
getche();
}
/*OUTPUT
Enter any ten number for sorting
10 23 3 7 99 21 45 54 14 83
After sorting the numbers are
3 7 10 14 21 23 45 54 83 99
*/













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                




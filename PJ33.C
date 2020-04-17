//program for sorting an Array throuh function;
#include<stdio.h>
#include<conio.h>
void sorting(int b[]);
void main()
{
 int a[20],i,j;
 clrscr();
 printf("Enter any ten numbers for sorting\n");
 for(i=0;i<10;i++)
   scanf("%d",&a[i]);
 sorting(a);
 printf("\nAfter sorting the numbers are\n");
 for(i=0;i<10;i++)
  printf("%d ",a[i]);
 getch();
}

void sorting(int b[])
{
 int i,j,t,z=10;

 for(j=0;j<z;j++)
 {
  for(i=0;i<z-1;i++)
  {
   if(b[i]>b[i+1])
    {
     t=b[i];
     b[i]=b[i+1];
     b[i+1]=t;
    }
  }
 }
}
/*OUTPUT
Enter any ten numbers for sorting
10 20 4 9 98 56 100 61 23 22

After sorting the numbers are
4 9 10 20 22 23 56 61 98 100
*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


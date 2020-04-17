//program to find addition of two matricess;
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[3][3],B[3][3],C[3][3],i,j,k,m,n,p,q;
 clrscr();
 printf("Enter the numbers of rows and column of first matrix\n");
 scanf("%d %d",&m,&n);
 printf("\nEnter the elemnts of first matrix\n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  scanf("%d",&A[i][j]);
 printf("\nNow enter the numbers of rows and columns of second Matix\n");
 scanf("%d %d",&p,&q);
 if(m!=p || p!=q)
 printf("\nMatrix with entered ordered can not add with each other\n");
 else
 {
  printf("\nNow Enter elemnts of second matrix\n");
   for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
     scanf("%d",&B[i][j]);
  }
 printf("\nAddition of Matricess is\n");
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
  {
   C[i][j]=A[i][j]+B[i][j];
   printf("%d ",C[i][j]);
  }
  printf("\n");
 }
 getche();
}
/*OUTPUT
Enter the numbers of rows and column of first matrix
3
3

Enter the elemnts of first matrix
1 2 1
2 3 4
6 5 4

Now enter the numbers of rows and columns of second Matix
3
3

Now Enter elemnts of second matrix
2 6 5
2 1 7
1 3 8

Addition of Matricess is
3 8 6
4 4 11
7 8 12
*/



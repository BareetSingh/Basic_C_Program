//program to product of two matricess;
#include<stdio.h>
#include<conio.h>
void main()
{
 int A[3][3],B[3][3],C[3][3],m,n,p,q,i,j,k,product=0;
 clrscr();
 printf("Enter the number of rows and columns of first matrix\n");
 scanf("%d %d",&m,&n);
 printf("\nEnter the elemnts of first matrix\n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf("%d",&A[i][j]);

 printf("\nEnter the number of rows and columns of second matrix\n");
 scanf("%d %d",&p,&q);
 if(n!=q)
  printf("Matrix with entered ordered can not be multiply with each other\n");
 else
 {
  printf("\nNow Enter the elemnts of second matrix\n");
  for(i=0;i<p;i++)
   for(j=0;j<q;j++)
    scanf("%d",&B[i][j]);
 }
		  //Logic for Multiplication
 for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
   {
    for(k=0;k<p;k++)
    {
     product=product+A[i][k]*B[k][j];
    }
    C[i][j]=product;
    product=0;
   }
  }
 printf("\nProduct of Matricess is\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<q;j++)
  {
   printf("%d\t",C[i][j]);
  }
  printf("\n");
 }
getch();
}
/*OUTPUT
Enter the number of rows and columns of first matrix
3
3

Enter the elemnts of first matrix
5 3 1
2 -1 2
4 1 3

Enter the number of rows and columns of second matrix
3
3

Now Enter the elemnts of second matrix
5 3 1
2 -1 2
4 1 3

Product of Matricess is
35      13      14
16      9       6
34      14      15
*/



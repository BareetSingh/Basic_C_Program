//38.Program of Array of Pointer;
#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,*pt[20];
 clrscr();
 printf("Enter any ten numbers\n");
 for(i=1;i<=10;i++)
 {
  scanf("%d",&a[i]);
  pt[i]=&a[i];
 }

  printf("You have Entered\n");
  for(i=1;i<=10;i++)
  {
   printf("%d ",*pt[i]);
  }
  getch();
}
/*OUTPUT
Enter any ten numbers
12 32 12 42 12 42 13 4212 43 13
You have Entered
12 32 12 42 12 42 13 4212 43 13
*/

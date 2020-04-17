//program to illustrate structure;
#include<stdio.h>
#include<conio.h>
struct book
{
 char N[20];
 float P;
 int Page;
}b;

void main()
{
 struct book N,P,Page;
 clrscr();
 printf("Enter the detail of Book:-\n");
 printf("Name;Price and Number of pages\n");
 scanf("%s %f %d",&b.N,&b.P,&b.Page);

 printf("You have Entered\nName of the Book:- %s\nPrice of the Book:- %f $\nNumber of Pages in the Book:- %d\n",b.N,b.P,b.Page);
 getch();
}
/*OUTPUT
Enter the detail of Book:-
Name;Price and Number of pages
VISTAS 80.00 112
You have Entered
Name of the Book:- VISTAS
Price of the Book:- 80.000000 $
Number of Pages in the Book:- 1112
*/





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



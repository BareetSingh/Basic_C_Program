//35.Program to illustrate array within structure;
#include<stdio.h>
#include<conio.h>
struct student
{
 int id;
 char name[20];
 int marks[5];
}s1;

void main()
{
 int i;
 clrscr();
 printf("Enter the detail of Student\n\n");
 printf("Endter id:");
 scanf("%d",&s1.id);
 printf("\nEnter Name:");
 scanf("%s",&s1.name);
 printf("\nEnter Marks of 5 subjects:");
 for(i=0;i<=4;i++)
  scanf("%d",&s1.marks[i]);

 printf("\nYou have Entered\n");
 printf("Studnet id: %d",s1.id);
 printf("\nStudent Name: %s",s1.name);
 printf("\nMarks: ");
 for(i=0;i<=4;i++)
  printf("%d ",s1.marks[i]);
 getche();
}
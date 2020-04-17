//37.Program for structure within function;
#include<stdio.h>
#include<conio.h>
void display(struct student);

struct student
{
 int rollno;
 char name[20];
}s1;

void main()
{
 clrscr();
 printf("Enter th Detail of Student:\n");
 printf("Student Roll No.: ");
 scanf("%d",&s1.rollno);
 printf("\nStudent Name: ");
 scanf("%s",&s1.name);
 display(s1);
 getche();
}

void display(struct student d1)
{
 printf("\nYou have Entered\n");
 printf("Student Roll No.: %d\nStudent Name: %s\n",d1.rollno,d1.name);
}
/*OUTPUT
Enter th Detail of Student:
Student Roll No.: 101

Student Name: Dren

You have Entered
Student Roll No.: 101
Student Name: Dren
*/




                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

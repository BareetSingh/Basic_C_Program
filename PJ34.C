//program to illustrate array of structure;
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
 int rollno;
 char name[10];
};
void main()
{
 int i;
 struct student st[3];
 clrscr();
 printf("Enter Records of 3 students");
 for(i=0;i<3;i++)
 {
  printf("\nEnter Rollno:");
  scanf("%d",&st[i].rollno);
  printf("Enter Name:");
  scanf("%s",&st[i].name);
 }
 printf("\nStudent Information List:");
 for(i=0;i<3;i++)
 {
  printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
 }
getche();
}
/*OUTPUT
Enter Records of 3 students
Enter Rollno:1
Enter Name:Max

Enter Rollno:2
Enter Name:John

Enter Rollno:3
Enter Name:Elexa

Student Information List:
Rollno:1, Name:Max
Rollno:2, Name:John
Rollno:3, Name:Elexa
*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
               
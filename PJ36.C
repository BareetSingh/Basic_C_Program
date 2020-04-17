//36.Program for Structure within Structure;
#include<stdio.h>
#include<conio.h>
struct emp_address
{
 char city[20];
 long int pin;
}d2;

struct emp_data
{
 int id;
 char name[20];
 struct emp_address d2;
}d1;

void main()
{
 clrscr();
 printf("Enter the info of Employee\n");
 printf("Id,Name,City and Pincode\n");
 scanf("%d %s %s %ld",&d1.id,&d1.name,&d1.d2.city,&d1.d2.pin);

 printf("\nYou Have Entered\n");
 printf("Employee Id: %d\nEmployee Name: %s\nCity: %s\nCity Pincode: %ld\n",d1.id,d1.name,d1.d2.city,d1.d2.pin);
 getch();
}
/*OUTPUT
Enter the info of Employee
Id,Name,City and Pincode
121
Mandeep
Kashipur
244713

You Have Entered
Employee Id: 121
Employee Name: Mandeep
City: Kashipur
City Pincode: 244713
*/



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

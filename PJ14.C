//program to find given number is perfect or not;
void main()
{
int n,sum=0,r,i;
clrscr();
printf("Enter any number\n");
scanf("%d",&n);
for(i=1;i<n;i++)
{
r=n%i;
if(r==0)
sum=sum+i;
}
if(sum==n)
printf("Entered number is a perfect Number");
else
printf("Entered number is not a perfect Number");
getch();
}
/*OUTPUT
Enter any number
496
Entered number is a perfect Number
*/







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


//Program to find LCM and HCF
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,L,H;
 clrscr();
 printf("Enter any two numbers to find its\n");
 scanf("%d %d",&a,&b);
 //logic for LCM
 for(L=a>b?a:b;L<=a*b;L+=a>b?a:b)
  if(L%a==0 && L%b==0)
   break;
  printf("\nLCM=%d",L);
 //logic for HCF
 for(H=a>b?a:b;H<=a<b?a:b;H--)
  if(a%H==0 && b%H==0)
   break;
  printf("\n\nHCF=%d",H);
 getche();
}
/*OUTPUT
Enter any two numbers to find its
248
196

LCM=248

HCF=4
*/









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

